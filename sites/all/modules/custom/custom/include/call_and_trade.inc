<?php
function getCallAndTradeForm($form, &$form_state, $data = NULL){
	$form = array();
	$data = unserialize(variable_get('call_and_trade'));
	$form['#submit'][] = 'call_trade_submit';
	
	
    // --------------- Add more text box starts  ------------------------------
	
	$form['entry_fieldset'] = array(
			'#prefix' => '<div id="call-trade-wrapper">',
			'#suffix' => '</div>'
	);
    if (empty($form_state['pnum_names'])) {
        $form_state['pnum_names'] = 1;
    }

    if($form_state['pnum_names'] < count($data)){
    	$form_state['pnum_names'] = count($data);
    }
    
    for ($i = 0; $i < $form_state['pnum_names']; $i++) {
    	
        $form['entry_fieldset']['place_'.$i] = array(
            '#type' => 'textfield',
            '#title' => 'Place Name',
            '#size' => 22,
        	'#default_value' => (isset($data[$i]['place'])) ? $data[$i]['place'] : '',
        );
        $form['entry_fieldset']['code_'.$i] = array(
        	'#type' => 'textfield',
        	'#title' => 'Code',
        	'#size' => 22,
        	'#default_value' => (isset($data[$i]['code'])) ? $data[$i]['code'] : '',
        );
    }

    $form['entry_fieldset']['add_more'] = array(
        '#type' => 'submit',
        '#value' => t('Add more'),
        '#submit' => array('call_trade_add_more_add_one'),
        '#ajax' => array(
            'callback' => 'call_trade_add_more_callback',
            'wrapper' => 'call-trade-wrapper',
        ),
    );

    
    // ---------------  Add more text box ends ---------------------------------
   
    $form['example_entry']['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Submit'),
    );

    return $form;
	
}

/**
 * Submit handler for the "add-one-more" button.
 *
 * Increments the max counter and causes a rebuild.
 */
function call_trade_add_more_add_one($form, &$form_state) {

    if (!isset($form_state['pnum_names'])) {
        $form_state['pnum_names'] = 0;
        $form_state['pnum_names']++;
    }

    $form_state['pnum_names']++;
    $form_state['rebuild'] = TRUE;
}

function call_trade_add_more_callback($form, $form_state) {
    return $form['entry_fieldset'];
}


function call_trade_submit($form, &$form_state) { 
	$num_field = 0;
	$data = array();
	$num_field = $form_state['pnum_names'];
	
	if (($num_field > 0)) {
		for ($i = 0; $i < $num_field; $i++) {
			$data[$i]['place'] = $form_state['values']['place_'.$i];
			$data[$i]['code'] = $form_state['values']['code_'.$i];
		}
	}
	sort($data);
	variable_set('call_and_trade', serialize($data));
	
	drupal_set_message(t('Your data has been saved.'));
}

function get_call_trade_info(){
	$data = unserialize(variable_get('call_and_trade'));
	
	$options = '<option value="">Select Location</option>';
	foreach($data as $key => $val){
		$options .= '<option value="'.$val['code'].'">'.$val['place'].'</option>';
	}
	echo $options;
}

function getCallTrade(){
	$data = unserialize(variable_get('call_and_trade'));
	
	$output = '<div class="call_trade_hold">';
	foreach($data as $key => $val){
		$even = (($key+1) % 2)?'even':'odd';
		$output .= '<div class="'.$even.'"><div class="code">'.$val['place'].'</div><div class="code">'.$val['code'].'</div></div>';
	}
	$output .= '</div>';
	return $output;
}