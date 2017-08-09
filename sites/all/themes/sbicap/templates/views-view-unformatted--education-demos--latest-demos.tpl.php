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

<div class="col-sm-12 education-latest-demos">
  <div class="video-demo-rt-tit">
    <h4><?php print t("Latest Demos"); ?></h4>
  </div>
</div>
<div class="col-sm-12 viwed-demo-holder education-latest-demos">
  <?php foreach ($rows as $id => $row): ?>
    <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
      <?php print $row; ?>
    </div>
  <?php endforeach; ?>
</div>


