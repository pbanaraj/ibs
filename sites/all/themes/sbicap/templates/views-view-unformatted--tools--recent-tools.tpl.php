<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="col-sm-12">
  <div class="tool-rt-container">
    <div class="row">
      <div class="col-sm-12">
        <h4 class="tool-rt-tit"><?php print t('Recent Tools'); ?> </h4>
      </div>
    </div>
    <div class="row">
      <div class="col-sm-12">
        <?php foreach ($rows as $id => $row): ?>
          <div class="rt-cnt-tit">
            <?php print $row; ?>
          </div>
        <?php endforeach; ?>
      </div>
    </div>
  </div>
</div>