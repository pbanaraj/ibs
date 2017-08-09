<?php $adminform = drupal_get_form('feedback_admin_form'); ?>
<div class="row col-md-12">
  <?php print '<form id="'.$adminform['#id'].'" accept-charset="UTF-8" method="'.$adminform['#method'].'" action="'.$adminform['#action'].'">'; ?>
  <!--<div class="row title"><h4>Feedback Webform Configuration</h4></div>-->
  <div class="row"><?php print drupal_render($adminform['feedback_toaddress']); ?></div>
  <div class="row">
    <div class="col-md-6"><?php print drupal_render($adminform['feedback_scheduler']); ?></div>
    <div class="col-md-6"><?php print drupal_render($adminform['feedback_week']); ?></div>
  </div>
  <div class="row">
    <div class="col-md-6"><?php print drupal_render($adminform['feedback_cron_hrs']); ?></div>
    <div class="col-md-6"><?php print drupal_render($adminform['feedback_cron_minutes']); ?></div>
  </div>
  <div class="row"><?php print drupal_render($adminform['feedback_download_range']); ?></div>
  <div class="row">
    <?php print drupal_render($adminform['actions']); ?>
    <?php //print drupal_render($adminform['cancel']); ?>
  </div>
  <?php print drupal_render($adminform['form_id']);?>
  <?php print drupal_render($adminform['form_build_id']);?>
  <?php print drupal_render($adminform['form_token']);?>
  <?php print '</form>'; ?>
</div>
