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
<?php if (!empty($title)) : ?>
  <div class="row">
    <div class="col-sm-12">
      <h3 class="loanPageTitle fontBold video-demo-tit"><?php print $title; ?></h3>
    </div>
  </div>
  <?php endif; ?>
  <?php drupal_add_js(drupal_get_path('module', 'sbicap_tools'). '/sbicap_tools.js');?>
  <div class="row">
		<div class="">
      <?php foreach ($rows as $row_number => $columns): ?>
        <div class="tool-lft-container">
          <div class="row">
            <?php foreach ($columns as $column_number => $item): ?>
              <?php print $item; ?>
            <?php endforeach; ?>
            <div class="ajax-display col-sm-12 calculator-container-holder"></div>
          </div>
        </div>
      <?php endforeach; ?>
    </div>
</div>
