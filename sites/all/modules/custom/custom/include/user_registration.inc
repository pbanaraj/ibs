<?php

/*
 * API Connection for user registration
 */
function user_registration($form, &$form_state) {
  $error = form_get_errors();
  $message = "";
  $state_id = $form_state['values']['field_state']['und'][0]['value'];
  $city_id  = $form_state['values']['field_city']['und'][0]['value'];
  // Name validation.
  $name = trim($form_state['values']['name']);
  if ($name == "") {
    $message .= t('Please enter Name.') . '<br/>';
  }
  
  // Mail validation.
  $mail = $form_state['values']['mail'];
  if ($mail == "" || !preg_match('/^[A-z0-9_\-(.A-z0-9_\-)]+[@][A-z0-9_\-]+([.][A-z0-9_\-]+)+[A-z.]{2,4}$/', $mail)){
    $message .= t('Please enter valid Email.') . '<br/>';
  }
  // Mobile validation.
  $mobile = trim($form_state['values']['field__mobile_number']['und'][0]['value']);
  if (!is_numeric($mobile) && $mobile != "") {
    $message .= t('Please enter only digits.') . '<br/>';
  }
  if (is_numeric($mobile) && ((strlen($mobile) < 10) || (strlen($mobile) > 12))) {
    $message .= t('Please enter 10 or 12 digits.') . '<br/>';
  }
  if ($mobile == "") {
    $message .= t('Please enter Mobile no') . '<br/>';
  }
  // Validation for Pin Code.
  $pincode = trim($form_state['values']['field_pin_code']['und'][0]['value']);
  if ($pincode == "") {
    $message .= t('Please enter Pin Code.') . '<br/>';
  }
  if (!is_numeric($pincode)) {
    $message .= t('Please enter only digits.') . '<br/>';
  }
  if ($city_id == "") {
  	$message .= t('Please enter your City.') . '<br/>';
  }
 
  // Validation for Wish to invest field.
  
  
  $invest_options = $form_state['values']['field_wish_to_invest'][LANGUAGE_NONE][0]['value'];
  if ($invest_options == "") {
    $message .= t('Please select Product') . '<br/>';
  }else{
  	if (isset($error['field_wish_to_invest][und'])) {
  		$message .= t('Please select the correct product <br>');
  	}
  }
  
  $citizenship_options = $form_state['values']['field_citizenship'][LANGUAGE_NONE][0]['value'];
  if ($citizenship_options == "") {
    $message .= t('Please select your Citizenship') . '<br/>';
  }else{
  	if (isset($error['field_citizenship][und'])) {
  		$message .= t('Please select the Citizenship <br>');
  	}
  }
  //echo '<pre>'; print_r($error['limit']);exit;
  // Captcha validation.
  if (isset($error['captcha_response'])) {
    $message .= t($error['captcha_response']. '<br/>');
  }
  
  $validate_array = array('Name'=>$name, 'City'=>$city_id, 'Product'=>$invest_options);
  foreach($validate_array as $key => $val){
  	if (preg_match('/[\'\/~`\!@#\$%\^&\*\(\)+=\{\}\[\]\|;:"\<\>\.\?\\\]/', $val)) {
  	$message .= t("Please avoid special characters for ".$key." except underscore and hyphen.") . '<br>';
  	}
  }
  
  if (isset($error['limit'])) {
  	$message .= t($error['limit']. '<br/>');
  }
  
  if ($message == "") {
    $cityname  = $city_id;
	$statename = '';
    
	$city_id  = validate_input($city_id);
	$name = validate_input($name);
	$mail = validate_input($mail);
	$mobile = validate_input($mobile);
	$pincode = validate_input($pincode);
	
    db_insert('sbicap_leads') 
      ->fields(
          array(
            'name' => $name,
            'Email' => $mail,
            'mob_number' => $mobile,
            'State' => $statename,
            'City' => $cityname,
            'Pincode' => $pincode,
            'Source' => 'User Registration',
          )
        )
        ->execute();
       
    // insert through webservice
    ini_set("soap.wsdl_cache_enabled", "0");
    $client = new SoapClient("https://app.sbismart.com/sslwebservices/ssl.asmx?WSDL");

    try {
      $webLeadResult = $client->WebLead(array('Name'=> $name ,'EmailId' => $mail, 'MobileNo' => $mobile, 'ClientCode' => '','ClientType' => '' ,'Products' => $invest_options,'ContactTime' => '','State' => '' , 'City' => $cityname, 'Pincode' => $pincode,'Remarks' => '', 'User' => 'SBISMART', 'Pin' => '0E9651E1-FF51-47DE-926E-B613048310CF'))->WebLeadResult;
      $response = $webLeadResult->any;
      $xml = new SimpleXMLElement($response);
      if ($xml->Status == 'Success') {
        $message = "<div class='success_msg'>Dear ".strtoupper($name).", Thank you for showing interest in becoming our customer.<br/> Our representative will get in touch with you shortly!</div>";
        $commands[] = ajax_command_invoke('.reset_reg', 'click');
      }
      else {
        $message = $xml->Message;
      }
    }
    catch (SoapFault $ex) {
      $message = '<div class="error">Sorry, Please try again later or contact our customer care executive.</div>';
    }
  }
  else {
    $message = "<div class='error-messages'><span class='error'>" . $message . "</span></div>";
  }
  // Unsets error messages.
  unset($_SESSION['messages']['error']);
  
  $field_selector = ".errmsg";
  $commands[] = ajax_command_invoke(NULL, "trigger_error_messages", array(array('thisObj' => $field_selector)));
  $commands[] = ajax_command_after($field_selector, $message);
  $commands[] = ajax_command_replace('.captcha', render($form['captcha']));
  
  return array(
    '#type' => 'ajax',
    '#commands' => $commands,
  );
}

function validate_input($data) {
	//$data = trim($data);
	$data = stripslashes($data);
	$data = htmlspecialchars($data);
	return $data;
}

function user_registration_custom($form, &$form_state){
	return false;
}
/*
 * GET the city name
 */
function get_states_city($state_id, $city_id){
    $data = array();
    
    $query = db_select('taxonomy_term_data', 'td');
    $query->fields('td', array('name'))
        ->condition('td.tid', $state_id);
    $result = $query->execute();
    
    foreach ($result as $state) {
      $data['state'] = $state->name;
    }
    
    $query = db_select('taxonomy_term_data', 'td');
    $query->fields('td', array('name'))
        ->condition('td.tid', $city_id);
    $result = $query->execute();
    
    foreach ($result as $city) {
      $data['city'] = $state->name;
    }
    
    return $data;
}

function custom_block_view_alter(&$data, $block) {
  global $user;
  if ($block->module == 'formblock' && $block->delta == 'user_register' && $block->region == 'sidebar_second') {
    if ($user->uid > 0) {
      $form = '<div>You have already logged in. Logged in user can not do registration process.</div>';
    }
    else {
      $form = drupal_get_form('user_register_form', 'formblock');
    }

    $data['content'] = render($form);
  }
}

/*
 * HOOK_FORM_ID_FORM_ALTER() Impelement
 */
function custom_form_user_register_form_alter(&$form, &$form_state, $form_id) {
  global $user;
  if($user->uid == 0){
  $args = $form_state['build_info']['args'];
  if(!empty($args) && array_search('formblock', $args) !== false) {
    $form['front_page'] = array(
      '#type' => 'hidden',
      '#default_value' => 'home_register_form'
    );

    $form['actions']['#prefix'] = '<div class="text-center" style="margin: 0;">';
    $form['actions']['#suffix'] = '</div>';
  }
  else {
    $form['quick_panel'] = array(
      '#type' => 'hidden',
      '#default_value' => 'quick_panel_register_form'
    );
  }

  $form['field_state']['und']['#options'] = get_states_data();
  $form['field_state']['und']['#ajax'] = array(
    'callback' => 'ajax_get_city_data',
    'wrapper' => 'city-div',
    'method' => 'replace',
    'effect' => 'fade',
  );

  if(isset($form_state['values']['field_state']['und'][0]['value']) && ($form_state['values']['field_state']['und'][0]['value'] > 0)){
    $cities = get_states_data($form_state['values']['field_state']['und'][0]['value']);
    $form['field_city']['und']['#options'] = $cities;
  }

  $form['field_city']['#validated'] = TRUE;
  $form['field_city']['und'][0]['value']['#prefix'] = '<div id="city-wrapper"></div>';
  $form['field_city']['und'][0]['value']['#suffix'] = '</div>';
  $form['field_city'][LANGUAGE_NONE][0]['value']['#ajax'] = array(
    'callback' => 'validation_callback',
    'event' => 'blur',
    'wrapper' => 'city-wrapper',
    'method' => 'prepend',
  );

  $form['field_city']['und']['#prefix'] = '<div id="city-div">';
  $form['field_city']['und']['#suffix'] = '</div>';
  $form['#title'] = 'Become Our Customer';
  $form['account']['mail']['#title'] = "Email";
  $form['account']['mail']['#attributes']['placeholder'] = t('Enter Email');
  $form['account']['mail']['#attributes']['data-toggle'] = t('tooltip');
  $form['account']['mail']['#attributes']['data-original-title'] = t('Enter Email');
  $form['account']['mail']['#attributes']['class'] = array('txt-cls');
  $form['account']['name']['#title'] = "Name";
  $form['account']['name']['#attributes']['placeholder'] = t('Enter Name');
  $form['account']['name']['#attributes']['data-toggle'] = t('tooltip');
  $form['account']['name']['#attributes']['data-original-title'] = t('Enter Name');
  $form['account']['name']['#attributes']['class'] = array('txt-cls');
  $form['account']['name']['#description'] = "";
  $form['account']['name']['#prefix'] = '<div id="name-wrapper"></div>';
  $form['account']['name']['#ajax'] = array(
    'callback' => 'validation_callback',
    'event' => 'blur',
    'wrapper' => 'name-wrapper',
    'method' => 'prepend',
  );

  $form['account']['mail']['#description'] = "";
  $form['account']['mail']['#prefix'] = '<div id="email-wrapper"></div>';
  $form['account']['mail']['#ajax'] = array(
    'callback' => 'validation_callback',
    'event' => 'blur',
    'wrapper' => 'email-wrapper',
    'method' => 'prepend',
  );

  $form['field_wish_to_invest']['und']['#prefix'] = '<div id="multi-product-cont">';
  $form['field_wish_to_invest']['und']['#suffix'] = '</div>';
  $form['field_wish_to_invest']['und']['#options']['_none'] = '- Select Product -';
  $form['field_citizenship']['und']['#options']['_none'] = '- Select your Citizenship -';

  $form['field__mobile_number']['und'][0]['value']['#title'] = "Mobile no";
  $form['field__mobile_number']['und'][0]['value']['#prefix'] = '<div id="mobile-wrapper"></div>';
  $form['field__mobile_number']['und'][0]['value']['#ajax'] = array(
    'callback' => 'validation_callback',
    'event' => 'blur',
    'wrapper' => 'mobile-wrapper',
    'method' => 'prepend',
  );

  $form['field__mobile_number']['und'][0]['value']['#attributes']['placeholder'] = t('Mobile no');
  $form['field__mobile_number']['und'][0]['value']['#maxlength']=12;
  $form['field__mobile_number']['und'][0]['value']['#attributes']['class'] = array('txt-cls');
  $form['field_pin_code']['und'][0]['value']['#title'] = "Pin Code";
  $form['field_pin_code']['und'][0]['value']['#attributes']['placeholder'] = t('Pin Code');
  $form['field_pin_code']['und'][0]['value']['#attributes']['class'] = array('txt-cls');
  $form['field_pin_code']['und'][0]['value']['#prefix'] = '<div id="pincode-wrapper"></div>';
  $form['field_pin_code']['und'][0]['value']['#ajax'] = array(
    'callback' => 'validation_callback',
    'event' => 'blur',
    'wrapper' => 'pincode-wrapper',
    'method' => 'prepend',
  );

  $form['field_city']['und'][0]['value']['#attributes']['placeholder'] = t('City');
  $form['field_city']['und'][0]['value']['#attributes']['class'] = array('txt-cls');
  $form['actions']['submit']['#value'] = "Submit";

  $form['captcha']['#description'] = "";
  $form['Leave Your Details']['profile_phone_number']['#maxlength'] = 10;
  $form['Leave Your Details']['profile_phone_number']['#size'] = 24;
  $form['Leave Your Details']['profile_pin_code']['#maxlength'] = 6;
  $form['Leave Your Details']['profile_pin_code']['#size'] = 24;
  
  
  // Unsets default registration submit action.
  unset($form['actions']['submit']);
  // Unsets default registraion callback.
  unset($form['#submit'][0]);
  // Custom registration action to insert record in sbicap_leads table.
  $form['actions']['custom_actions'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
    '#ajax' => array(
      'callback' => 'user_registration',
      'wrapper' => 'registration-account',
    ),
    '#suffix' => '<div id="registration-account"></div>',
  );

  if (isset($form['captcha']))
    $form['captcha']['#prefix'] = '';
    $form['Leave Your Details']['profile_type_of_user']['#default_value'] = 'Open an Account';		
    //$form['#validate'][] = 'custom_user_register_form_validate';
  }

  $form['reset'] = array(
    '#type' => 'markup',
    '#markup' => '<input type="reset" value="RESET" class="reset_reg btn btn-default form-submit">',
  ); //echo '<pre>'; print_r($form);exit;
  
}

/*
 * Gets the all states
 */
function get_states_data($state = 0) {
    $state = ($state == 0)? 0 : $state ;
    $query = db_select('taxonomy_term_data', 'td');

    $query = db_select('taxonomy_term_hierarchy', 'th');
    $query->join('taxonomy_term_data', 'td', 'th.tid = td.tid');
    $query->fields('td', array('name'))
        ->fields('td', array('tid'))
        ->condition('th.parent', $state);

    $result = $query->execute();
  
    $state = array();
    $state['_none'] = 'State';
    foreach ($result as $row) {
      $state[$row->tid] = $row->name;
    }

    return $state;
}

/*
 * Ajax request to the city name
 */
function ajax_get_city_data($form, &$form_state){
    $state_id = ($form_state['values']['field_state']['und'][0]['value'] != '_none')? $form_state['values']['field_state']['und'][0]['value']: '_none';
    $cities = get_states_data($state_id);
    $cities['_none'] = 'City';
    $form['field_city']['und']['#options'] = $cities;
    
    return $form['field_city'];
}

/**
 * Field level validation.
 * @param Object $form
 * @param Object $form_state
 */
function validation_callback(&$form, $form_state) {
  $message = '';
  $trigger_element = $form_state['triggering_element']['#name'];
  $user_name = $form_state['values']['name'];

  // Validation for Name field.
  if (isset($trigger_element) && $trigger_element == 'name') {
    $field_selector = '#name-wrapper';
    if ($user_name == "") {
      $message = t('Please enter Name.');
    }

    if (preg_match('/[\'\/~`\!@#\$%\^&\*\(\)-_+=\{\}\[\]\|;:"\<\>,\.\?\\\]/', strtolower($user_name))) {
      $message = t("Please avoid special characters.");
    }
  }

  $user_mail = $form_state['values']['mail'];
  // Validation for Email field.
  if (isset($trigger_element) && $trigger_element == 'mail') {
    if ($user_mail == "") {
      $message = t('Please enter Email.');
    }

    if (!preg_match('/^[A-z0-9_\-(.A-z0-9_\-)]+[@][A-z0-9_\-]+([.][A-z0-9_\-]+)+[A-z.]{2,4}$/', $user_mail)) {
      $message = t("Please enter valid Email.");
    }
    
    $field_selector = '#email-wrapper';
  }
  // Validation for Mobile no field.
  if ($form_state['triggering_element']['#field_name'] == "field__mobile_number") {
    $mobile_no = $form_state['values']['field__mobile_number'][LANGUAGE_NONE][0]['value'];
    if (!is_numeric($mobile_no) && $mobile_no != "") {
      $message = t('Please enter only digits.');
    }
    //if (is_numeric($mobile_no) && strlen($mobile_no) != 10) {
    if (is_numeric($mobile_no) && ((strlen($mobile_no) < 10) || (strlen($mobile_no) > 12))) {
      $message = t('Please enter 10 or 12 digits.');
    }
    if ($mobile_no == "") {
      $message = t('Please enter Mobile no');
    }
    $field_selector = '#mobile-wrapper';
  }

  // Validation for City field.
  if ($form_state['triggering_element']['#field_name'] == "field_city") {
    $city = $form_state['values']['field_city'][LANGUAGE_NONE][0]['value'];
    if ($city == "") {
      $message = t('Please enter your City.');
    }
    if (preg_match('/[\'\/~`\!@#\$%\^&\*\(\)+=\{\}\[\]\|;:"\<\>,\.\?\\\]/', $city)) {
    	$message .= t("Please avoid special characters except underscore and hyphen.") . '<br>';
    }
    $field_selector = '#city-wrapper';
  }

  // Validation for Pin Code field.
  if ($form_state['triggering_element']['#field_name'] == "field_pin_code") {
    $pin_code = $form_state['values']['field_pin_code'][LANGUAGE_NONE][0]['value'];
    if ($pin_code == "") {
      $message = t('Please enter Pin Code.');
    }
    if (!is_numeric($pin_code)) {
      $message = t('Please enter only digits.');
    }
    $field_selector = '#pincode-wrapper';
  }
  $messages = "<span class='validation-message error'>$message</span>";
  $commands[] = ajax_command_invoke(NULL, "error_message_call", array(array('thisObj' => $field_selector)));
  //$commands[] = ajax_command_invoke(NULL, "find_error_messages", array(array('thisObj' => $field_selector)));
  $commands[] = ajax_command_prepend($field_selector, $messages);
  return array(
    '#type' => 'ajax',
    '#commands' => $commands,
  );
}
