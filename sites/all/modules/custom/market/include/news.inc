<?php
//function to display news in accordion
function getMarketNews(){
	$html = "<div class='news_refresh'>Refresh</div><div id = 'marketsnews'>" . getMarketNewsInfo() . "</div>";
	return $html;
}

function refresh_marketsnews() {
	$html = getMarketNewsInfo();
	print $html;
	exit();
}

function getMarketNewsInfo() {
	$service_name = variable_get('news', NULL);
	$data = fetch_xml_data($service_name); 
	//if (!cache_get($service_name, 'cache')) {
	$news = $data->XMLDataLiveNewsResult->LiveNewsInfo;
	$i = 0;
	$html = '<div class="accordition-container">';
	foreach($news as $new) {
		$i++;
		$date = explode(' ', $new->date);
		$date_value = explode('/', $date[0]);
		$time_value = explode(':', $new->time);
		$mktime = mktime($time_value[0], $time_value[1], 0, $date_value[0], $date_value[1], $date_value[2]);
		$new_date = date("F j Y g:i A", $mktime);

		$class = ($i > 10)?'hide':'show';
		$html .= '<div class="faq-panel '. $class .'">
		<div class="faq-panel-tit">'.$new->heading.'
		<div class="faq-plus-icon faq-icon">
		+
		</div>
		<div class="faq-minus-icon faq-icon">
		_
		</div>
		</div>
		<div class="faq-panel-desc">
			<div class="date">'.$new_date.'</div>
			<div class="accordian_content">'.$new->arttext.'</div>
		</div>
		</div>';

	}

	$html .= "</div>";

	$html .= '<div class="pagination">
			<span class="prv" name="1"> &lt;&lt;Prev </span>
			<span class="cpage hide">1</span>
			<span class="nxt" name="'.ceil($i/10).'"> Next&gt;&gt; </span>
			</div>';

	/*cache_set($service_name,$html,'cache',time()+360);
	 } else {
	 $html = $data;
	 }*/
	return $html;
}