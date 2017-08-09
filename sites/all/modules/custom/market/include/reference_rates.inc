<?php
function reference_rates(){
	$html = "<div class='reference_rate_refresh'>Refresh</div><div id = 'marketsrefrates'>" . custom_reference_rates1() . "</div>";
	return $html;
}

function refresh_marketsrefrates() {
	$html = custom_reference_rates1();
	print $html;
	exit();
}

function custom_reference_rates1(){
	$EURO = array(
			'symbol' => '1 &#x80;',
			'flag' =>'/sites/default/files/euroflag.png',
	);
	 
	$GBP = array(
			'symbol' => '1 &#xA3;',
			'flag' =>'/sites/default/files/gbpflag.png',
	);
	$USD = array(
			'symbol' => '1 &#x24;',
			'flag' =>'/sites/default/files/usdflag.png',
	);
	$YEN = array(
			'symbol' => '100 &#165;',
			'flag' =>'/sites/default/files/yenflag.png',
	);
	$service_name = variable_get('reference_rates', NULL);
	$data = fetch_xml_data($service_name);
	$stocks = $data->XMLDataRBIRatesResult->RBIRatesInfo;
	$html .= '<div class="indexouter" id="results"><div class="readin" id="heading">
			 <div class="datestring"> As On '.date("d-M-Y H:i:s",strtotime($stocks->CurrDate)).'</div>
			 <div class="under">Underlying</div>
				 <div class="rbi">RBI Reference Rate <del>&#2352;</del></div>
				 </div>';
	 
	foreach($stocks as $stock){
		$split = explode('-',$stock->CurrencyName);
		$var = trim($split[1]);
		$symbol=${$var}['symbol'];
		$flag=${$var}['flag']; // loop through our books
		$html .= "<div class='headline content'>
			  <div class='currency'>"."<img class='img' src=$base_url$flag height='20' width='30'>".$symbol."</div>
			  <div class='currvalue'>".$stock->CurrValue."</div>
				 </div>";
	}
	$html .= "</div>";
	return $html;
}