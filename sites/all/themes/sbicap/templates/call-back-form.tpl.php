<?php

/**
 * @file
 * Default simple view template to display a rows in a grid.
 *
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 *
 * @ingroup views_templates
 */
?>
<div class="call_hold">
  <div class="call_img"><img src="/sites/all/themes/sbicap/common/images/call-back-popup-banner.png"><span id="msg"></span></div>
  <div class="call_fields">
    <div class="call_first">
      <div class="call">
        <?php print $category; ?>
      </div>
      <div class="call">
        <?php print $subcategory; ?>
      </div>
    </div>
    <div class="call_first">
      <div class="call">
        <?php print $client_code; ?>
      </div>
      <div class="call">
        <?php print $registered_mobile_no; ?>
      </div>
    </div>
    <div class="call_first">
      <?php print $submit; ?><?php print $reset; ?>
    </div>
  </div>
  <div class="call_foot">
    <div class="call_foot_cnt">
      <span><strong>Note:</strong> Service will be available only from 9.30 to 5.30 on working days.</span>
      <ul>
        <li>You will be connected to team of specialized and trained officers who will assist you with any query related to trading.</li>
        <li>This is a free call back facility and call will be made to your registered contact number with SBIcap Securities. This facility is currently available for numbers within india.</li>
      </ul>
    </div>
  </div>
</div>
