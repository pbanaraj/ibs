<div class="col-lg-6 col-md-6 col-sm-6 col-xs-12">
  <?php
    $node = menu_get_object();
    if(isset($node)) :
      if($node->type == 'education'): ?>
        <div class="row edu-margin-container">
      <?php else: ?>
        <div class="row">
      <?php endif; ?>
    <?php endif; ?> 
      <div class="pageSearch">
         <!-- <span class="search-icon"></span>-->
          <!--<input class="pageSearch-control" name="search" placeholder="Search" type="search">-->
          <?php $form = drupal_get_form('content_search_form'); print drupal_render($form); ?>
      </div>
    </div>
</div>