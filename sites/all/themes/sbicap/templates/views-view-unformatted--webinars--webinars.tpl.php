<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
$block = module_invoke('content_search', 'block_view', 'CONTENT_SEARCH_BLOCK');
print $block['content'];
?>
<div class="row">
  <div class="col-sm-12">
    <h3 class="loanPageTitle fontBold webinar-tit">Current Webinars</h3>
  </div>
</div>

<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="row">
  <div class="col-sm-12">
<?php foreach ($rows as $id => $row): ?>
    <div class="current-webinar-container">
      <?php print $row; ?>
    </div>
<?php endforeach; ?>
  </div>
</div>
