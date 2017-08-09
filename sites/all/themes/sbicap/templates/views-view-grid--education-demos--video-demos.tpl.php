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
<?php
  // Includes JS file.
  drupal_add_js(drupal_get_path('module', 'sbicap_demos'). '/js/sbicap_demos.js');
?>
<div class="row">
  <div class="col-sm-12">
    <h3 class="loanPageTitle fontBold video-demo-tit"><?php print t('Video Demos');?></h3>
  </div>
</div>
<div class="col-sm-8">
  <?php foreach ($rows as $row_number => $columns): ?>
    <div class="video-demo-lft-container">
      <div class="row">
        <?php foreach ($columns as $column_number => $item): ?>
          <?php print $item; ?>
        <?php endforeach; ?>
        <div class="ajax-display col-sm-12 calculator-container-holder"></div>
      </div>
    </div>
  <?php endforeach; ?>
</div>
