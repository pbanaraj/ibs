<div class="notification-section">
  <?php
    $notification_cookie = array();
    $cookie_decode = drupal_json_decode($_COOKIE['notificationItems']);
    $counter = 0; 
  ?>
  <?php foreach ($nodes as $node): ?>
    <?php
      $time = time();
      $notification_first_class = '';
      if (isset($_COOKIE['notificationItems'])) {
        $cookie_decode = drupal_json_decode($_COOKIE['notificationItems']);
        // Enters this loop only when a new item is added.
        if (count($nodes) != count($cookie_decode['notificationItems'])) {
          if (!isset($cookie_decode['notificationItems'][$counter])) {
            $notification_first_class = "visibility-hidden";
            $cookie_decode['notificationItems'][] = array(
              'nid' => $node->nid,
              'isVisible' => TRUE,
              'slideUpTime' => $time,
              'slideHiddenTime' => $time,
            );
            $cookie_decode['itemsEndTime'] = 0;
            // Updating exiting notificationItems cookie incase new items added.
            setcookie('notificationItems', drupal_json_encode($cookie_decode));
          }
        }
        // Handles class to hide/show items.
        $notification_class = ($cookie_decode['notificationItems'][$counter]['isVisible'] == TRUE) ? 'visibility-hidden' : 'notification-hidden';
      }
      else {
        $notification_first_class = "visibility-hidden";
        // Assigns values to the notificationItem to make use of cookie.
        $notification_cookie['notificationItems'][] = array(
          'nid' => $node->nid,
          'isVisible' => TRUE,
          'slideUpTime' => $time,
          'slideHiddenTime' => $time,
        );
        $notification_cookie['itemsEndTime'] = 0;
        // Sets notificationItems cookies for the first time.
        setcookie('notificationItems', drupal_json_encode($notification_cookie));
      }
    ?>
  <div class="sbicap-notification node-<?php print $node->nid . ' ' . $notification_class . ' ' . $notification_first_class; ?>">
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
              <div class="notify-main-tit"><?php print $node->title; ?></div>
              <p><?php print $node->body[LANGUAGE_NONE][0]['value']; ?></p>
            </div>
          </div>
        </div>
      </div>
    </div>
    <span class="notify-close">X</span>
  </div>
  <?php $counter++; ?>
  <?php endforeach; ?>
</div>
