<?php
function custom_email_us_form($form,&$form_state,$data = NULL) {
	$form['exitsting_customer'] = array(
		'#type' => 'radios',
		'#title' => t('Existing Customer'),
		'#options' => array('1' => t('Yes'), 0 => t('No')),
		'#description' => t('What would you like to do on fourth down?'),
		'#default_value' => 1,
	);
	$form['category'] = array(
		'#title' => t('Category'),
		'#type' => 'select',
		'#options' => get_call_back_data(),
		'#prefix' => '<div class="catg">',
		'#suffix' => '</div>',
		/*'#ajax' => array(
			'callback' => 'ajax_get_subcategory',
			'wrapper' => 'city-div',
			'method' => 'replace',
			'effect' => 'fade',
		),*/
	);
	
	$form['subcategory'] = array(
		'#title' => t('Sub category'),
		'#type' => 'select',
		'#options' => get_chield_category(),
		'#validated' => TRUE,
		'#prefix' => '<div id="city-div" class="catg">',
		'#suffix' => '</div>',
	);
	$form['query_type'] = array(
		'#title' => t('Query Type'),
		'#type' => 'select',
		'#options' => array('leadstatus' => 'Lead Related Query', 'accopenquery' => 'Account Opening Query', 'others' => 'Others'),
		'#prefix' => '<div class="query" style="display:none;">',
		'#suffix' => '</div>',
	);
	$form['some_text'] = array(
			'#markup' => '<h3>Please Fill the details below</h3>'
	);
	$form['client_code'] = array(
		'#title' => t('Client Code*'),
		'#type' => 'textfield',
		'#prefix' => '<div class="catg">',
		'#suffix' => '</div>',
	);
	$form['name'] = array(
		'#title' => t('Name'),
		'#type' => 'textfield',
		'#prefix' => '<div class="query" style="display:none;">',
		'#suffix' => '</div>',
	);
	$form['pan_number'] = array(
		'#title' => t('Pan Number'),
		'#type' => 'textfield',
	);
	$form['application_no'] = array(
		'#title' => t('Application Number'),
		'#type' => 'textfield',
		'#prefix' => '<div class="query" style="display:none;">',
		'#suffix' => '</div>',
	);
	$form['contact_number'] = array(
		'#title' => t('Contact Number*'),
		'#type' => 'textfield',
		'#attributes' => array('size' => 10),
	);
	$form['date_of_birth'] = array(
		'#title' => t('DOB'),
		'#type' => 'textfield',
		'#prefix' => '<div class="catg">',
		'#suffix' => '</div>',
	);
	$form['email'] = array(
			'#title' => t('Email'),
			'#type' => 'textfield',
	);
	$form['description'] = array(
		'#title' => t('Description*'),
		'#type' => 'textarea',
	);
	
	$form['submit'] = array(
		'#value' => 'Submit',
		'#type' => 'button',
		'#submit' => array('custom_email_us_form_submit'),
	);
	return $form;
}


function ajax_get_subcategory($form, &$form_state){
	$form['#rebuild'] = TRUE;
	drupal_set_message('working');
	$category = ($form_state['values']['category'] > 0)? $form_state['values']['category']: 0;
	//$subcategory = get_call_back_data($category);print_r($subcategory);
	$form['subcategory']['#options'] = array('test' => 'testing', 'work' => 'working');
	$form_state['rebuild'] = TRUE;
	return $form['subcategory'];
}

/*
 * Gets the all call back terms
 */
function get_chield_category() {
	$query = db_select('taxonomy_term_hierarchy', 'th');
	$query->join('taxonomy_term_data', 'td', 'th.tid = td.tid');
	$query->fields('td', array('name'))
	->fields('td', array('tid'))
	->condition('td.vid', 17)
	->condition('th.parent', 0, '>');

	$result = $query->execute();

	$call_back = array();
	$call_back[''] = 'Select';
	foreach ($result as $row) {
		$call_back[$row->tid] = $row->name;
	}

	return $call_back;
}

/**
 * Implements hook_form_submit().
 */
function custom_email_us_form_submit($form, &$form_state){
	global $user; 
	/*$exitsting_customer = $form['exitsting_customer']['#options'][$form['exitsting_customer']['#value']];
	$category = $form['category']['#options'][$form['category']['#value']];
	$subcategory = $form['subcategory']['#options'][$form['subcategory']['#value']];
	$query_type = $form['query_type']['#options'][$form['query_type']['#value']];
	$client_code = $form['client_code']['#value'];
	$name = $form['name']['#value'];
	$pan_number = $form['pan_number']['#value'];
	$application_no = $form['application_no']['#value'];
	$contact_number = $form['contact_number']['#value'];
	$date_of_birth = $form['date_of_birth']['#value'];
	$email = $form['email']['#value'];
	$description = $form['description']['#value'];*/
	
	$exitsting_customer = $_REQUEST['exitsting_customer'];
	$category = $_REQUEST['category'];
	$subcategory = $_REQUEST['subcategory'];
	$query_type = $_REQUEST['query_type'];
	$client_code = $_REQUEST['client_code'];
	$name = $_REQUEST['name'];
	$pan_number = $_REQUEST['pan_number'];
	$application_no = $_REQUEST['application_no'];
	$contact_number = $_REQUEST['contact_number'];
	$date_of_birth = $_REQUEST['date_of_birth'];
	$email = $_REQUEST['email'];
	$description = $_REQUEST['description'];
	
	$err = '';
	if($category == 'Select'){
		//$err .= '<li>Select Category</li>';
	}
	if($subcategory == 'Select'){
		//$err .= '<li>Select Sub-Category</li>';
	}
	if($query_type == 'Select'){
		//$err .= '<li>Select Query</li>';
	}
	if(($client_code == '') && ($exitsting_customer == 'YES')){
		$err .= '<li>Plaese enter client code</li>';
	}
	if (!preg_match("/^([a-zA-Z]){5}([0-9]){4}([a-zA-Z]){1}?$/", $pan_number)) {
		$err .= '<li>Please enter the correct PAN number.</li>';
	}
	if($contact_number == ''){
		$err .= '<li>Enter Contact Number</li>';
	}else{
		if (!is_numeric($contact_number)) {
			$err .= '<li>Enter Contact Number only digit</li>';
		}else{
			if(strlen($contact_number) != 10){
				$err .= '<li>Contact number should be 10 digit</li>';
			}
		}
	}
	if($description == ''){
		$err .= '<li>Please fill the description</li>';
	}
	/*if($category == 'Select'){
		$err .= '<li>Select Category</li>';
	}
	if($category == 'Select'){
		$err .= '<li>Select Category</li>';
	}*/
	if($err != ''){
		$failure = '<div class="alert alert-block alert-danger messages error status_msg"><ul>'.$err.'</ul></div>';
		echo $failure;
		return;
	}
	$successfull = '<div class="alert alert-block alert-success messages status status_msg">Thank for your comments! Our customer care executive will respond to you.</div>';
	$failure = '<div class="alert alert-block alert-danger messages error status_msg">You have wrong detail! Please try again or contact out customer care executive.</div>';
	if($exitsting_customer == 'NO') {
		ini_set("soap.wsdl_cache_enabled", "0");
		$client = new SoapClient("http://bo.sbicapsec.com/ClientReports/WebService/ssl.asmx?WSDL");
		try {
			if($user->uid != 0){
				$strWeather = $client->FeedbackQRC(array('CustId'=>$user->uid,'CustName' => $user->name,'ContactNo'=>'','Email' => $user->mail,'Subject' => $query_type,'comments' =>$description))->FeedbackQRCResult;
				$response = $strWeather->any;
				$xml = new SimpleXMLElement($response);
				if($xml->Status=='Success'){
					echo $successfull;
				} else
				{
					echo $failure;
				}
			}
	
			else {
				if($form['query_type']['#value'] == 'leadstatus') {
					$strWeather = $client->FeedbackQRC(array('CustId'=>'','CustName' => $name,'ContactNo'=>$contact_number,'Email' => $email,'Subject' => $query_type,'comments' =>$description))->FeedbackQRCResult;
					$strWeather1 = $client->LeadStatus(array('MobileNo'=>$contact_number))->LeadStatusResult;
					$response1 = $strWeather1->any;
					$xml = new SimpleXMLElement($response1);
					if($xml->RecordFound=='True'){
						$leadstatus = $xml->Status;
						echo $successfull;
					} else
					{
						echo $failure;
					}
	
				}
				else if($form['query_type']['#value']=='accopenquery') {
					$strWeather = $client->FeedbackQRC(array('CustId'=>'','CustName' => $name,'ContactNo'=>$contact_number,'Email' => $email,'Subject' => $query_type,'comments' =>$description))->FeedbackQRCResult;
						
					$strWeather1 = $client->ClientStatus(array('refid'=>$application_no,'IdentityProof' => $pan_number))->ClientStatusResult ;
					$response1 = $strWeather1->any;
					$xml = new SimpleXMLElement($response1);
					if($xml->RecordFound=='True'){
						$accstatus = $xml->AccountStatus;
						echo $successfull;
					} else
					{
						echo $failure;
	
					}
				}
	
				$strWeather = $client->FeedbackQRC(array('CustId'=>'','CustName' => $name,'ContactNo'=>$contact_number,'Email' => $email,'Subject' => $query_type,'comments' =>$description))->FeedbackQRCResult;
			}
				
			$response = $strWeather->any;
			$xml = new SimpleXMLElement($response);
			if($xml->Status=='Success'){
				echo $successfull;
			} else
			{
				echo $failure;
			}
		}
		catch (SoapFault $ex){
			echo $failure;
		}
	}
	else
	{
		//For Logged in existing customers
		$query_txt = $name.': '.$description;
		$client = new SoapClient("http://bo.sbicapsec.com/ClientReports/WebService/ssl.asmx?WSDL");
	
		try {
			 
			if($user->uid){
				$strWeather = $client->FeedbackQRC(array('CustId'=>$user->uid,'CustName' => $user->name,'ContactNo'=>'','Email' => $user->mail,'Subject' => $category,'comments' =>$query_txt))->FeedbackQRCResult;
			}
			else {
				$strWeather = $client->FeedbackQRC(array('CustId'=>$client_code,'CustName' => '','ContactNo'=>$contact_number,'Email' => $email,'Subject' => $category,'comments' =>$query_txt))->FeedbackQRCResult;
			}
			$response = $strWeather->any;
			$xml = new SimpleXMLElement($response);
				
			if($xml->Status=='Success'){
				//drupal_goto("contactusthanks");
				echo $successfull;
			} else
			{
				//drupal_goto("contactussorry");
				echo $failure;
			}
		}
		catch (SoapFault $ex){
			//drupal_goto("contactussorry");
			echo $failure;
		}
	}
	
	
}
/*
 * Get contact us email form
 */
function getContactUsEmailForm(){
	$form = drupal_get_form('custom_email_us_form');
	return $form;
}

