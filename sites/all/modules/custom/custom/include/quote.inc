<?php
function ajax_get_quote(){
	global $base_url;
	$service_name = str_replace('{string}', str_replace(" ","%20",arg(1)), variable_get('quote',NULL));
	$data = request_api($service_name);
	$info = json_decode($data, true);
	$html = '<div class="company_name jScrollResize jspScrollable">';
	$html .= '<ul>';
	foreach($info as $key => $value){
		$html .= '<li><a href="'.$base_url.'/getquote" rel="'.$value['companyCode'].'/">'.$value['name'].'</a></li>';
	}
	$html .= '</ul>';
	$html .= '</div>';
	echo $html;
}

function ajax_get_quote_result(){
	$api_url = variable_get('quote_detail',NULL);
	$service_name = str_replace('{companycode}', arg(2), $api_url);
	$service_name = str_replace('{exchange}', arg(3), $service_name);
	$data = request_api($service_name);
	$info = json_decode($data, true);
	$time = explode(' ', $info['updatedTime']);
	$type = (arg(3) == 'BSE')?'5':'15';
	$html = '<div class="row quote-tit-container">
	<div class="col-lg-9 col-md-9 col-sm-9 col-xs-12 ralewayBold quote-cnt-tit pageHeadng">
		'.$info['companyName'].'
	</div>
	<div class="col-lg-3 col-md-3 col-sm-3 col-xs-12">
		<div class="pull-right date-time">
			'.$time[0].' (Delayed by '.$type.' mins)
		</div>
	</div>
</div>
<div class="row">
	<div class="col-sm-12">
		<div class="main-cnt-inner">
			<div class="row main-cnt-inner-in">
				<div class="col-sm-4">
					<div class="change-cont">
						<div class="row">
							<div class="col-sm-12">
								<h1><span class="ltp">LTP:&nbsp;&nbsp; </span>'.$info['price'].'</h1>
							</div>
						</div>
						<div class="row">
							<div class="col-sm-12 today-change-cont">
								
							</div>
						</div>
					</div>
				</div>
				<div class="col-sm-4">
					<div class="change-cont">
						
						<div class="row">
							<div class="col-sm-12 volume-cont">
								<div class="row">
									<div class="col-sm-12 today-change-cont">
										<div>
											Todays Change:
										</div>
										<div>
											'.round($info['change'], 2).' 
										</div>
										
									</div>
								</div>
							</div>
						</div>
					</div>
				</div>
				<div class="col-sm-4">
					<div class="">
						<div class="">
							<div class="prcdiff">
								% Change: &nbsp;&nbsp;
								'.$info['priceDifference'].'%
							</div>
	 					</div>
					</div>
				</div>
			</div>
			<div class="row main-cnt-inner-in">
				<div class="col-sm-4">
					<div class="change-cont">
						<div class="row price-holder">
							<div class="col-sm-12 price-container">
								<div>
									Prev.Close:
								</div>
								<div class="price-val">
									'.$info['oldPrice'].'
								</div>
							</div>
						</div>
						<div class="row price-holder">
							<div class="col-sm-12 price-container">
								<div>
									Open:
								</div>
								<div class="price-val">
									'.$info['open'].'
								</div>
							</div>
						</div>
					</div>
				</div>
				<div class="col-sm-4">
					<div class="change-cont">
						<div class="row price-holder">
							<div class="col-sm-12 price-container">
								<div>
									Bid Price:
								</div>
								<div class="price-val">
									'.$info['bestBuyPrice'].'
								</div>
							</div>
						</div>
						<div class="row price-holder">
							<div class="col-sm-12 price-container">
								<div>
									Offer Price:
								</div>
								<div class="price-val">
									'.$info['bestSellPrice'].'
								</div>
							</div>
						</div>
					</div>
				</div>
				<div class="col-sm-4">
					<div class="change-cont">
						<div class="row price-holder">
							<div class="col-sm-12 price-container">
								<div>
									Bid Qty. :
								</div>
								<div class="price-val">
									 '.$info['bestBuyQuantity'].'
								</div>
							</div>
						</div>
						<div class="row price-holder">
							<div class="col-sm-12 price-container">
								<div>
									Offer Qty. :
								</div>
								<div class="price-val">
									 '.$info['bestSellQuantity'].'
								</div>
							</div>
						</div>
					</div>
				</div>
			</div>
			<div class="row main-cnt-inner-in">
				<div class="col-sm-4">
					<div class="change-cont">
						<div class="row price-holder">
							<div class="col-sm-12 price-container">
								<div>
									Todays Low/High:
								</div>
								<div class="price-val">
									'.$info['low'].' - '.$info['high'].'
								</div>
							</div>
						</div>
					</div>
				</div>
				<div class="col-sm-4">
					<div class="change-cont">
						<div class="row price-holder">
							<div class="col-sm-12 price-container">
								<div>
									52 WK Low / High:
								</div>
								<div class="price-val">
									'.$info['low52Week'].' - '.$info['high52Week'].'
								</div>
							</div>
						</div>
					</div>
				</div>
				<div class="col-sm-4">
					<div class="change-cont">
						<div class="row price-holder">
							<div class="col-sm-12 price-container">
								
							</div>
						</div>
					</div>
				</div>
			</div>
		</div>
	</div>
</div>';
	
	echo  $html;
}

function request_api($service_url){
	$ch = curl_init();
	$timeout = 5;
	$headers[] = 'Content-Type: application/json';
	$headers[] = 'x-accountid: 24214260';
	curl_setopt($ch, CURLOPT_URL, $service_url);
	curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
	curl_setopt($ch, CURLOPT_CONNECTTIMEOUT, $timeout);

	curl_setopt($ch, CURLOPT_HTTPHEADER, $headers);
	$response = curl_exec($ch);
	
	return $response;
}