<?php

function getMarketMcxRate(){
	$html = "<div class='mcxrate_refresh'>Refresh</div><div id = 'marketsmcxrates'>" . custom_commodities_mcx_rates1() . "</div>";
	return $html;
}
	
function refresh_marketsmcxrates() {
    $html = custom_commodities_mcx_rates1();
	print $html;
    exit();
}
	
function custom_commodities_mcx_rates1(){
	$service_name = variable_get('mcx_rates', NULL);
	$data = fetch_xml_data($service_name);
	$stocks = $data->XMLDataMCXFutureRatesResult->MCXFutureRatesInfo;
	$html = '<div class="indexouter" id="results">
		 <div class="rows" id="heading" style="background: none repeat scroll 0 0 #CFE4E7;">
		 <div class="commodity">Commodity</div>
			 <div class="expiry">Expiry Date</div>
			 <div class="commodities_ltp">LTP</div>
			 <div class="interest">Open Interest</div>
			 <div class="commodities_open">Open</div>
			 <div class="commodities_high">High</div>
			 <div class="commodities_low">Low</div>
			 <div class="commodities_close">&nbsp;Close</div>
			 </div>';
	$html .= "<div class='content'>";
	$i = 1;
	foreach($stocks as $stock){               	// loop through our books
		$class = ($i > 10)?'hide':'show';
	$html .= "<div class='rows ". $class ."'>
		  <div class='commodity_value'>".$stock->Symbol."</div>
		  <div class='commodity_exp'>".date("M-d-Y",strtotime($stock->Exp_Date))."</div>
		  <div class='ltp_value'>".$stock->ltp."</div>
		 <div class='open_interest'>".round(floatval($stock->OpenInterest),2)."</div>
		   <div class='day_open'>".round(floatval($stock->DayOpen),2)."</div>
		   <div class='day_high'>".round(floatval($stock->DayHigh),2)."</div>
		   <div class='day_low'>".round(floatval($stock->DayLow),2)."</div>
		   <div class='day_close'>".round(floatval($stock->ClosePrice),2)."</div>
		 </div>";
		$i++;
	}
	$html .= "</div>";
	$html .= "</div>";
	
	$html .= '<div class="pagination">
			<span class="prv" name="1"> &lt;&lt;Prev </span>
			<span class="cpage hide">1</span>
			<span class="nxt" name="'.ceil($i/10).'"> Next&gt;&gt; </span>
			</div>';
    return $html;

}