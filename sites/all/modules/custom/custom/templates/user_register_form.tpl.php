<div class="form-tit-container <?php (arg(0) == 'open-account')? print ' col-lg-8 col-md-8 col-sm-10 col-xs-12':'';?>">
	<div class="form-title-txt">OPEN AN ACCOUNT</div>
  <div class="form-title"></div>
</div>
<div class="row ">
  <div class="form-container <?php !empty($quick_panel) ? print 'quick-panel-form-cont' : ''; (arg(0) == 'open-account')? print 'contact-frm-section col-lg-8 col-md-8 col-sm-10 col-xs-12':''; ?>">
  	<span class="errmsg"></span>
    <div class="form-fld-container <?php !empty($front_page) ? print 'quesAns form-container-scroll  jScrollResize' : '';?>">
      <div class="frm_cnt" <?php !empty($front_page) ? print 'style="height: 300px;"' : '';?>>
        <?php if(!empty($front_page)): ?>
          <div class="fld-container registerSelection">
            <select name="cbo_product" class="customSelectbox fontSemiBold registerSelect">
              <option class="custom-opt" value="register"><?php print t('Register');?></option>
              <option class="custom-opt" value="online_form"><?php print t('Online a/c form');?></option>
              <option class="custom-opt" value="call_us"><?php print t('Call us to register');?></option>
            </select>
          </div>
          <div style="display:none;" class="callus-container">
            <span>Call Us on "092667 92667" </span>
          </div>
          <div style="display:none;" class="applynow-container">
            <div class="apply"><a href="https://app.sbismart.com/OnlineKYC/welcome.aspx" target="_blank"><?php print t('Apply Now');?></a></div>
          </div>
        <?php endif; ?>
        <div class="fld-container">
          <?php print $name; ?>
        </div>
        <div class="fld-container">
          <?php print $email ?>
        </div>
        <div class="fld-container">
          <?php print $mobileno; ?>
        </div>
          
        <?php if(!empty($front_page)): ?>
         <div class="fld-container">
          <?php print $pincode; ?>
        </div>
        <div class="fld-container">
          <?php print $city; ?>
        </div>  
        <?php else: ?>          
        <div class="fld-container" style="display:inline-flex">
            <div style="margin-right: 2px;min-width: 80px"><?php print $pincode; ?></div>
          <?php print $city; ?>
        </div>
       <?php endif; ?>          
          
        <div class="fld-container">
          <?php print $citizenship; ?>
        </div>            
        <div class="fld-container">
          <?php print $product; ?>
        </div>
        <div class="fld-container">
          <?php print $captcha; ?>
        </div>
        <?php if(!empty($quick_panel)): ?>
          <div class="fld-container">
            <?php print $submit; ?>
          </div>
        <?php endif; ?>
      </div>
    </div>
    <?php //if(!empty($front_page)): ?>
    <?php if(empty($quick_panel)): ?>
      <div class="fld-container last-open-frm-cont">
        <?php print $submit; ?>
      </div>
    <?php endif; ?>
    <?php print $children; ?>
  </div>
