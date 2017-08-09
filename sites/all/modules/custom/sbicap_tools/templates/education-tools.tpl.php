<?php

/**
 * @file
 * Template file for whole Demo related.
 */
$block = module_invoke('content_search', 'block_view', 'CONTENT_SEARCH_BLOCK');
print $block['content'];
 
 ?>
<div class="row">
  <div class="col-sm-8">
    <!-- Video Demos block -->
    <?php print views_embed_view('tools', $display_id = 'tools'); ?>
  </div>
  <!-- Most Viewed Demos block -->
  <?php print views_embed_view('tools', $display_id = 'top_tools'); ?>
</div>
