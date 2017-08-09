<?php
if(!empty($terms)) :
$block = module_invoke('content_search', 'block_view', 'CONTENT_SEARCH_BLOCK');
print $block['content'];
?>
<div class="row">
  <div class="col-xs-12">
    <h3 class="branchTitle fontBold edu-learn-tit">Few of the topics that we have covered are :</h3>
    <div class="row">
      <div class="col-sm-12">
        <ul class="edu-list">
          <?php foreach($terms as $term): ?>
            <li id="scl_<?php echo $term->tid; ?>" class="sub-listing"><?php echo $term->description; ?></li>
          <?php endforeach; ?>
        </ul>
      </div>
    </div>

  </div>
</div>

<div class="row edu-margin-container ">
  <div class="col-sm-12 ">
    <div class="edu-learning-analysis tabContainer">
        <div class=" edu-learning-analysis-lft" id="eduquicktab" ></div>
        <div class=" edu-learning-analysis-rt">
          <div class="edu-learning-analysis-rt-inner" id="eduquickbody"></div> 
        </div>
    </div>
  </div>
</div>
<?php endif; ?>