<div class="skin-<?php print $skin; ?>">
  <?php if (!empty($top_widget_rendered)): ?>
    <div class="views-slideshow-controls-top clearfix">
      <?php print $top_widget_rendered; ?>
    </div>
  <?php endif; ?>

  <?php print '<div class="col-sm-8 advertisement-lft-cint-holder">' . $slideshow . '</div>'; ?>

  <?php if (!empty($bottom_widget_rendered)): ?>
    <div class="views-slideshow-controls-bottom col-sm-4">
      <div class="advertisement-rt-container">
        <?php print $bottom_widget_rendered; ?>
      </div>
    </div>
  <?php endif; ?>
</div>
