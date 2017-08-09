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
    <?php print views_embed_view('education_demos', $display_id = 'video_demos'); ?>
    <div class="row">
      <div class="row document-demo-sect">
        <div class="col-sm-12 ">
          <!-- Document Demos block -->
          <?php print views_embed_view('education_demos', $display_id = 'document_demos'); ?>
        </div>
      </div>
    </div>
  </div>
  <!-- Most Viewed Demos block -->
  <?php print views_embed_view('education_demos', $display_id = 'most_viewed_demos'); ?>
</div>
