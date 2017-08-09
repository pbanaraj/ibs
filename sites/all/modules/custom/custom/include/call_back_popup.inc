<?php

function custom_call_back_form($form,&$form_state) {
	$form['category'] = array(
			'#title' => t('Category'),
			'#type' => 'select',
			//'#required' => TRUE,
			'#options' => get_call_back_data(),
	);
	$form['subcategory'] = array(
			'#title' => t('Sub category'),
			'#type' => 'select',
			//'#required' => TRUE,
			'#options' => array('' => 'Select'),
			'#prefix' => '<div id="dropdown-second-replace">',
			'#suffix' => '</div>',
	);
	$form['client_code'] = array(
			'#title' => t('Client Code'),
			'#type' => 'textfield',
	);
	$form['registered_mobile_no'] = array(
			'#title' => t('Registered Mobile No'),
			'#type' => 'textfield',
	);
	$form['reset'] = array(
        '#type' => 'markup',
        '#markup' => '<input type="reset" value="RESET" class="reset_call btn btn-default form-submit">',
    );
	$form['submit'] = array(
			'#value' => 'SEND AND REQUEST A CALL BACK',
			'#type' => 'submit',
			'#attributes' => array('disabled' => 'disabled'),
			/*'#ajax' => array(
				'callback' => 'custom_call_back_form_submit',
			)*/
			//'#submit' => array('custom_call_back_form_submit'),
	);
	return $form;
}

function custom_call_back_form_validate(){
	$err = '';
	$name = $_REQUEST['name'];
	$val = $_REQUEST['val'];
	$category = $_REQUEST['category'];
	
	if($name == 'category'){
		echo $err = ($val == '_none')?'<span class="error">Please Select the category</span>':'';
	}
	if($name == 'subcategory'){
		echo $err = ($val == '_none')?'<span class="error">Please Select the subcategory</span>':'';
	}
	if(($name == 'client_code') && ($val == '') && ($category != 'Account Opening')){
		echo $err = ($val == '')?'<span class="error">Please enter the client code</span>':'';
	}
	if(($name == 'registered_mobile_no') && ($val == '')){
		echo $err = ($val == '')?'<span class="error">Please enter the registered mobile number</span>':'';
	}else if($name == 'registered_mobile_no'){
		if((!is_numeric($val))){
			echo '<span class="error">Please enter only digits</span>';
		}else{
			echo $err = ((strlen($val) != 10) && ($val != ''))?'<span class="error">Please enter 10 digits</span>':'';
		}
		
	}
}

/*
 * Ajax request to the chield call back terms
 */
function ajax_get_chield_call_back_data(){ 
	$child = get_call_back_data(arg(2));
	$output = '';
	foreach ($child as $key => $val){
		$output .= '<option value="'.$key.'">'.$val.'</div>';
	}
	echo $output;
}

/*
 * Gets the all call back terms
 */
function get_call_back_data($call_back = 0) {
	$call_back = ($call_back == 0)? 0 : $call_back ;
	//$query = db_select('taxonomy_term_data', 'td');

	$query = db_select('taxonomy_term_hierarchy', 'th');
	$query->join('taxonomy_term_data', 'td', 'th.tid = td.tid');
	$query->fields('td', array('name'))
	->fields('td', array('tid'))
	->condition('td.vid', 17)
	->condition('th.parent', $call_back)
	->orderBy('td.weight');
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
function custom_call_back_form_submit(){
	//echo $_REQUEST['category'].'     '.$_REQUEST['subcategory'].'     '.$_REQUEST['clientcode'].'     '.$_REQUEST['mobileno'];
	$category = $_REQUEST['category'];
	$subcategory = $_REQUEST['subcategory'];
	$clientcode = $_REQUEST['clientcode'];
	$mobileno = $_REQUEST['mobileno'];
	
	db_insert('call_back')
	->fields(
			array(
				'category' => $category,
				'subcategory' => $subcategory,
				'client_code' => $clientcode,
				'mobile_no' => $mobileno,
			)
		)
	->execute();
	
	
	$url = "https://app.sbismart.com/sslwebservices/ssl.asmx?op=websiteCallBackReq";
	//ini_set("soap.wsdl_cache_enabled", "0");
	//$client = new SoapClient("https://app.sbismart.com/sslwebservices/ssl.asmx?op=websiteCallBackReq");
	
	
	
	$post_string = '<?xml version="1.0" encoding="UTF-8"?>
	<XML>
        <User>SBISMART</User>
        <Pin>'.$clientcode.'</Pin>
        <Category>'.$category.'</Category>
        <SubCategory>'.$subcategory.'</SubCategory>
        <ClientName></ClientName>
        <MobileNo>'.$mobileno.'</MobileNo>
        <QueryType></QueryType> 
	</XML>';
	
	
	$ch = curl_init();
	curl_setopt( $ch, CURLOPT_URL, $url );
	curl_setopt( $ch, CURLOPT_POST, true );
	curl_setopt( $ch, CURLOPT_HTTPHEADER, array('Content-Type: text/xml'));
	curl_setopt( $ch, CURLOPT_RETURNTRANSFER, true );
	curl_setopt( $ch, CURLOPT_POSTFIELDS, $post_string );
	curl_setopt( $ch, CURLOPT_SSL_VERIFYPEER, false);
	
	$data = curl_exec($ch);
	
	if(curl_errno($ch)){
		echo curl_error($ch);
	}else{
		curl_close($ch);
		echo t('Thank you for your interest! Our customer care executive will get in touch with you.');
	}
	
	
	/*try {
		$strWeather = $client->FeedbackQRC(array('User'=>'SBISMART','Pin' => $clientcode,'Category'=>$category,'SubCategory' => $subcategory,'ClientName' => '','MobileNo' =>$mobileno, 'QueryType' => ''))->FeedbackQRCResult;
		$response = $strWeather->any;
		$xml = new SimpleXMLElement($response);
		if($xml->Status=='Success'){
			echo 'Call request is sent successfully';
		}else{
			echo 'Call request is failed. Try later';
		}
	}catch (SoapFault $ex){
		echo 'Call request is failed. Try later';
	}*/
	
}
