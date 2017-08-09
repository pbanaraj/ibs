<?php
function getInternationalMarket(){
	$html = "<div class='international_market_refresh'>Refresh</div><div id = 'marketsintrnmarkets'>" . custom_international_markets1() . "</div>";
	return $html;
}

function refresh_marketsintrnmarkets() {
	$html = custom_international_markets1();
	print $html;
	exit();
}

function custom_international_markets1(){
	$service_name = variable_get('international_markets', NULL);
	$data = fetch_xml_data($service_name);
	$stocks = $data->XMLDataForexDataResult->ForexDataInfo;
	$html = '<div class="indexouter" id="results"><div class="headline" id="heading">
			 <div class="name">Name</div>
			  <div class="namelong">Country</div>
			  <div class="namelong">Current Price</div>
			 <div id="changename">Change</div>
			 <div class="imchangeextraname">&nbsp;%Change</div>
				 </div>';
	$i = 0; 
	foreach($stocks as $stock){               	// loop through our books
		$change = str_replace("-","",$stock->Perchange);
		$class = ($i > 10)?'hide':'show';
		$html .= "<div class='headline content ".$class."' >
				<div class='value'>".$stock->Symbol."</div>
				<div class='valuelong'>".$stock->country."</div>
				<div class='valuelong'>".$stock->CurrPrice."</div>";
		
		$diff =round(floatval($stock->CurrPrice)-floatval($stock->PrevPrice),4);
		if($diff>0){
			$html .= "<div id='changevalue' class='increase'>&nbsp;".$diff."<span class='up'>&#8593;</span></div>
				  <div id='imchangeextravalue' class='increase'>".round(floatval($change),4)."<span class='up'>&#8593;</span></div>";
		}
		else if($diff<0){
			$diff = str_replace("-","",$diff);
			$html .= "<div id='changevalue' class='decrease'>&nbsp;".$diff."<span class='down'>&#8595;</span></div>
					 <div id='imchangeextravalue' class='decrease'>".round(floatval($change),4)."<span class='down'>&#8595;</span></div>";
		}
		else{
			$html .= "<div id='changevalue'> &nbsp;".$diff."</div>
					 <div id='imchangeextravalue'>".round(floatval($change),4)."</div>";
		}
		$html .= "</div>";
		$i++; 
	}
	$html .= "</div>";
	$html .= '<div class="pagination">
			<span class="prv" name="1"> &lt;&lt;Prev </span>
			<span class="cpage hide">1</span>
			<span class="nxt" name="'.ceil($i/10).'"> Next&gt;&gt; </span>
			</div>';
	return $html;

}
