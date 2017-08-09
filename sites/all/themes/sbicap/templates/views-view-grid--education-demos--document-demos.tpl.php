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
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="row">
  <div class="col-sm-12">
    <h3 class="loanPageTitle fontBold video-demo-tit"><?php print t('Document Demos');?></h3>
  </div>
</div>
<div class="col-sm-8">
      <?php foreach ($rows as $row_number => $columns): ?>
        <div class="video-demo-lft-container">
          <div class="row">
            <?php foreach ($columns as $column_number => $item): ?>
              <?php if (!empty($item)) :?>
              <div class="col-sm-6 video-info-cont-holder">
                <div class="video-info-cont">
                  <div class="row">
                    <?php print $item; ?>
                  </div>   
                </div>
              </div>
              <?php endif; ?>
          <?php endforeach; ?>
          </div>
        </div>
  <?php endforeach; ?>
</div>
