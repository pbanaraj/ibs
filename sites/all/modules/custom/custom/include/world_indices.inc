<?php
function getWorldIndices(){
	$service_name = variable_get('world_indices', NULL);
	$data = fetch_xml_data($service_name);
	$stocks = $data->XMLDataWorldIndicesResult->WorldIndicesInfo;
	$arrange_data = array();
	foreach($stocks as $stock){ //print_r($stock);exit;   	// loop through our books
		$stock =  (array) $stock;
		$arrange_data[$stock['continent']][] = array(
				'indexname' => $stock['indexname'],
				'country' => $stock['Country'],
				'continent' => $stock['continent'],
				'curr_value' => $stock['CurrValue'],
				'price_diff' => $stock['PriceDiff'],
				'PerChange' => $stock['PerChange']
		);
	}
	$html ='';
	foreach($arrange_data as $continent => $info){
		$html .= '<div class="col-xs-12 col-sm-12 col-md-6">
		<h4 class="regionName fontBold">'.$continent.'</h4>
		<table class="table marketTable">
			<thead>
				<tr>
					<th>Index Name</th>
					<th>Country</th>
					<th>Current Price</th>
					<th>Price Diff</th>
					<th>% Change</th>
				</tr>
			</thead>
			<tbody>';
		foreach($info as $record){
			$class = ($record['price_diff'] < 0)?'downPer':'upPer';
			$arrow = ($record['price_diff'] < 0)?'fa-caret-down':'fa-caret-up';
			$html .= '<tr>
				<td>'.$record['indexname'].'</td>
				<td>'.$record['country'].'</td>
				<td class="text-right">'.$record['curr_value'].'</td>
				<td class="text-right">'.$record['price_diff'].'</td>
				<td width="85">
					<span class="changePercent '.$class.'">'.round(trim($record['PerChange'], '-'), 2).' %<i class="fa '.$arrow.'" aria-hidden="true"></i></span>
				</td>  
			  </tr>';
		}
		$html .= '</tbody>
			  </table>
		</div>';
	}
	
	if(arg(0) == 'node'){
		$output = '<div class="refresh">Refresh</div><div class="market_refresh">'.$html.'</div>';
		return $output;
	}else{
		echo $html;
	}
}

function fetch_xml_data($service_name) {
	if (!cache_get($service_name, 'cache')) {
		$xml = _market_service($service_name);
	}
	else {
		$cached = cache_get($service_name,'cache');
		$xml = $cached->data;
	}
	return $xml;
}

function _market_service($service_url){
	$ch = curl_init();
	$timeout = 5;
	curl_setopt($ch, CURLOPT_URL, $service_url);
	curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
	curl_setopt($ch, CURLOPT_CONNECTTIMEOUT, $timeout);
	$response = curl_exec($ch);
	try{
		$xml = new SimpleXMLElement($response);
	}
	catch (Exception $e){
		$xml = '';
	}
	curl_close ($ch); //echo '<pre>'; print_r($xml);exit;
	return $xml;
}