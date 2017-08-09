<?php
function getMarketViews() {
	$html = "<div class='views_refresh'>Refresh</div><div id = 'marketsviews'>" . getMarketViewsInfo() . "</div>";
	return $html;
}

function refresh_marketsviews() {
	$html = getMarketViewsInfo();
	print $html;
	exit();
}

function getMarketViewsInfo () {
	include("JSON.php");
	$service_name = variable_get('views', NULL);
	$html = '<div class="analysis_views"><div class="indexouter" id="results"><div class="outerRow" id="heading">
	         <div class="valuelong commodities_high" >Company Name</div>
			 <div class="commodities_high">Directional View</div>
			 <div class="commodities_high" >Target 1</div>
			 <div class="commodities_high" >Target 2</div>
			 <div class="commodities_high" >Target 3</div>
			 <div class="commodities_high">Stop loss 1</div>
			 <div class="commodities_high">Stop loss 2</div>
			 <div class="commodities_high">Stop loss 3</div>
			 <div class="commodities_high">Source</div>
			 </div>';
	
	$analysisviews = '';
	try {
		$analysisviews = _market_service_json($service_name);
	}
	catch (Exception $e){
		$analysisviews = '';
	}
	
	$i = 0;
	foreach($analysisviews as $analysisview){               	                // loop through our books
		if(stripos($analysisview->source,'CMOTS') !== false) {
			$i++;
			$class = ($i > 10)?'hide':'show';
			$html .= "<div class='outerRow content ". $class ."'>
				  <div class='valuelong day_open' >".$analysisview->companyName."</div>
				  <div class='day_open'>".$analysisview->directionalView."</div>
				  <div class='day_open' >".$analysisview->target1."</div>
				  <div class='day_open'>".$analysisview->target2."</div>
				  <div class='day_open' >".$analysisview->target3."</div>
				  <div class='day_open'>".$analysisview->stopLoss1."</div>
				  <div class='day_open'>".$analysisview->stopLoss2."</div>
				  <div class='day_open'>".$analysisview->stopLoss3."</div>
				  <div class='day_open' >".$analysisview->source."</div>
				  </div>";
		} 
	}
		
	if($i==0)
		$html .= "<div class='outerRow' id='heading' style='text-align: center;font-weight:bold;height:30px;padding:5px 0px 5px 0px;'>No records to display</div>";
		$html .= "</div></div>";
		
		$html .= '<div class="pagination">
			<span class="prv" name="1"> &lt;&lt;Prev </span>
			<span class="cpage hide">1</span>
			<span class="nxt" name="'.ceil($i/10).'"> Next&gt;&gt; </span>
			</div>';
		
		return $html;
}

function _market_service_json($service_url) {
	$ch = curl_init();
	$timeout = 5;
	curl_setopt($ch, CURLOPT_URL,$service_url );
	curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
	curl_setopt($ch, CURLOPT_CONNECTTIMEOUT, $timeout);
	$response = json_decode(curl_exec($ch));
	return $response;
}