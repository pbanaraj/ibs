<div class="notification-section">
  <?php
    //$notification_cookie = array();
    //$cookie_decode = drupal_json_decode($_COOKIE['notificationItems']);
    //$counter = 0; 
	$notification_first_class = "visibility-hidden";
	$notification_class = "notification-hidden";
  ?>
  
  <div class="sbicap-notification notification-hidden">
    <div class="row">
      <div class="col-lg-3 col-md-3 col-sm-3 col-xs-3 notify-lft-holder">
        <div class="notify-lft">
          <div class="notify-img"></div>
        </div>
      </div>
      <div class="col-lg-9 col-md-9 col-sm-9 col-xs-9">
        <div class="notify-rt">
          <div class="notify-txt-cont">
            <div class="notify-txt-cont-in">
              <div class="notify-main-tit"></div>
              <p class="notify-main-body"></p>
            </div>
          </div>
        </div>
      </div>
    </div>
    <span class="notify-close">X</span>
  </div>  
</div>
