<?php

global $base_url;
$module_path = drupal_get_path('module', 'sbicap_feedback');
drupal_add_js( $module_path . '/js/sbicap_feedback.js');

print '<form id="'.$form['#id'].'" accept-charset="UTF-8" method="'.$form['#method'].'" action="'.$form['#action'].'">';
?>
    <div class="row">
      <div class="col-lg-12 col-md-12 col-sm-12 col-xs-12">
       <div class="branchesWrapper pageWrapper">
        <div class="row heading-border">
         <div class="col-lg-1 col-md-1 col-sm-1 col-xs-2">
          <div class="help pull-right"></div>
         </div>
        </div>
        <div class="row">
         <div class="col-sm-12">
          <div class="feedback-container">
           <div class="feed-main-tit">
            <h4><?php print drupal_render($form['submitted']['feedback_title']); ?></h4>
            <p><?php print drupal_render($form['submitted']['feedback_description']); ?></p>
           </div>
          </div>
          <div class="row">
           <div class="col-sm-12 feedback-categoty-holder">
            <div class="feedback-categoty-cont">
             <div class="col-sm-6 no-padd">
             <div class="feedback-categoty-ind">
                <fieldset>
                  <div class="panel-title"><div class="panel-heading">Overall / Specific</div></div>
                  <?php print drupal_render($form['submitted']['section']);?>
                  <?php print drupal_render($form['submitted']['specific_section']);?>
                </fieldset>
              </div>
              <div class="feedback-categoty-ind">
                <?php print drupal_render($form['submitted']['presentation']);?>
              </div>
              <div class="feedback-categoty-ind">
                <?php print drupal_render($form['submitted']['content']);?>
              </div>
             </div>
             <div class="col-sm-6 no-padd">
              <div class="feedback-categoty-ind">
                <?php print drupal_render($form['submitted']['navigation']);?>
              </div>
              <div class="feedback-categoty-ind">
                <?php print drupal_render($form['submitted']['overall']);?>
              </div>
             </div>
             <div class="row">
              <div class="col-sm-12">
               <div class="feedback-categoty-ind">
                <div class="text-area-cont">
                  <?php print drupal_render($form['submitted']['additional_feedback']);?>
                </div>
               </div>
              </div>
              <div class="col-sm-12">
               <div class="rating-security-cont">
                <div class="rating-security-cont-in">
                 <div class="col-sm-3">
                  <div class="fld-cont no-padd">
                   <!-- <input type="text" name="code" class="txt-cls"/> -->
                     <?php print drupal_render($form['submitted']['client_code']);?>
                    <?php print drupal_render($form['feedback_captcha_element']);?>
                  </div>
                 </div>
                </div>
               </div>
              </div>
              <div class="col-sm-12">
               <div class="rating-btn-cont">
                <!-- <input type="button" class="rate-btn homelink" value="HOME"/>
                <input type="reset" class="rate-btn reset" value="RESET"/>
                <input type="submit" class="rate-btn submit" value="SUBMIT"/> -->
                <?php echo drupal_render_children($form); ?>
               </div>
              </div>
             </div>
            </div>
           </div>
          </div>
         </div>
        </div>
       </div>
      </div>
      <?php print '</form>';?>
