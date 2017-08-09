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
<div class="col-sm-4">
  <div class="tool-rt-container">
    <div class="row education-top-tools">
      <div class="col-sm-12">
        <h4 class="tool-rt-tit"> Top Tools </h4>
      </div>
    </div>
    <div class="row">
      <div class="col-sm-12 education-top-tools">
        <?php foreach ($rows as $id => $row): ?>
          <div class="rt-cnt-tit">
            <?php print $row; ?>
          </div>
        <?php endforeach; ?>
      </div>
      <!-- Recent Tools block -->
      <?php print views_embed_view('tools', $display_id = 'recent_tools'); ?>
    </div>
  </div>
</div>