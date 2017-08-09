jQuery(document).ready(function () {
  var n, t;
  var n;
  jQuery(".section-container").jScrollPane();
  jQuery(document).on("click", ".show-menu", function () {
    jQuery(".topnav").slideToggle("slow")
  });
  jQuery(".showLargeOnly").hide();
  jQuery(".showSmallOnly").hide(); 
  n = jQuery(window).width();
  //console.log(n);
  n > 767 && jQuery(".showLargeOnly").show();
  n <= 767 && jQuery(".showSmallOnly").show();

  jQuery(".showHide").show();
  jQuery(".nav-tabs li a").click(function () {
    jQuery(".showHide").hide();
    jQuery("#" + t + ".tab-pane").hide();
    jQuery(this).tab("show");
    t = jQuery(this).parent().attr("rel");
    jQuery("#" + t + ".tab-pane").show();
    jQuery(".jScrollResize").jScrollPane();
  });

  jQuery(".jScrollResize").jScrollPane();

  jQuery(window).resize(function () {
    jQuery.each(jQuery('.jScrollResize'), function () {
      var api = jQuery(this).data('jsp');
      api.reinitialise();
    });
  });
  jQuery('.carousel[data-type="multi"] .item').each(function () {
    var next = jQuery(this).next();
    if (!next.length) {            
      next = jQuery(this).siblings(':first');
    }
    next.children(':first-child').clone().appendTo(jQuery(this));

    for (var i = 0; i < 2; i++) {
      next = next.next();
      if (!next.length) {
        next = jQuery(this).siblings(':first');
      }
      next.children(':first-child').clone().appendTo(jQuery(this));
    }
  });
  
  jQuery("#edit-captcha-response").attr('placeholder', 'Captcha code');
  jQuery("#edit-captcha-response").removeAttr('data-original-title');
  
  
  jQuery(".navbar-toggle").click(function() {
    jQuery("#myNavbar").slideToggle('slow');
  });

  jQuery('.toggleCollapse').on("hidden.bs.collapse shown.bs.collapse", function() {
    currElem = jQuery('.moreLink[href="#'+jQuery(this).attr("id")+'"]');
    elemText = currElem.attr('title') === 'Know More'? 'Know Less' : 'Know More';
    currElem.html(elemText);
    currElem.attr('title',elemText);
  });

  jQuery(".prodServLinklist .moreLink").click(function() {
    jQuery(".summary" + jQuery(this).attr("id")).toggle();
  });

  jQuery('#floatScroll').scrollToFixed({
    minWidth:768,
  });

  if(jQuery(".call_trade").length) {
    jQuery.ajax({url: '/call-trade/getinfo', success: function(result) {
      jQuery(".call_trade").html(result);
    }});
  }

  /*  GET CHIELD MENU */
  jQuery.ajax({url: '/service/getmenu', success: function(result){
    jQuery("#product_service").append(result);
  }});

  jQuery(".call_trade").change(function() {
    jQuery('.prodServTexttitle').text(jQuery(this).val());
    var total = jQuery(".call_trade option").length;
    for(var i =0; i < total; i++) {
      if(jQuery(".call_trade option").eq(i).val() == jQuery(this).val()){
        jQuery(".call_trade option").eq(i).attr('selected', 'selected');
        jQuery(".call_trade option").eq(i).attr('selected', 'selected');
      }
    }
  });

  jQuery("#state").change(function () {
    var request = jQuery.ajax({
      url: "get/city",
      type: "POST",
      data: {state : this.value},
      dataType: "html"
    });

    request.done(function(result) {
      jQuery("#city").html( result );
    });

    request.fail(function(jqXHR, textStatus) {
      alert( "Request failed: " + textStatus );
    });
  });
  
  jQuery(".registerSelect").change(function() {
    var selected = jQuery(this).val();
    if(selected == 'online_form') { 
      jQuery('.applynow-container').show();
        //window.open('https://app.sbismart.com/OnlineKYC/welcome.aspx', '_blank');
      jQuery('.callus-container').hide();
      jQuery('.fld-container').not('.registerSelection').hide();
    }
    else if(selected == 'call_us') {
      jQuery('.applynow-container').hide();
      jQuery('.fld-container').not('.registerSelection').hide();
      jQuery('.callus-container').show();
    }
    else {
      jQuery('.applynow-container').hide();
      jQuery('.fld-container').show();
      jQuery('.callus-container').hide();
    }
  });

  jQuery('.home-logo > a').removeAttr('data-toggle'); 
  jQuery(".form-container .jspPane .frm_cnt").append(jQuery(".form-container .jspPane > .fld-container").get());

  /*  Home page OPEN ACC POPUU MENU  */
  jQuery('.floatnavTrigger').on('click',function() {
    jQuery('.right-cont-menu').toggle();
    jQuery(this).siblings().toggle()
    jQuery(this).hide()
  });

  jQuery('.floatMenulist .acctIcon').on('click', function() {
    jQuery(this).parent('.floatMenulist').toggleClass('pull-left');
    jQuery(this).parent('.floatMenulist').siblings('.open-acc-form').toggle();
    jQuery('.right-cont-menu').show();
    jQuery('.quick-panel-form-cont input[name=name]').focus();
  });

  /*  Active class add - quick links  */
  jQuery('.floatMenulist li').on('click',function(){
    jQuery(this).addClass('active').siblings().removeClass('active');
  });

  // Not require this code. Need to 
  /*if(jQuery('.popup-open-acc-form .error-processed').length){
    jQuery('.floatMenulist').addClass('pull-left')
    jQuery(this).hide().siblings().show()
    jQuery('.open-acc-form').show()
  }*/

//jQuery('.why-sbi-open-acc, .btnLink, .acctIcon, .reg li:first-child, .register').on('click', function(event) {

jQuery(document).on('click','.why-sbi-open-acc, .btnLink, .acctIcon, .reg li:first-child, .register', function(event) {
	event.preventDefault();
    if(jQuery('.acctIcon').hasClass("active")== false) {
      jQuery('.floatMenulist').addClass('pull-left')
      jQuery('.floatnavTrigger').eq(0).hide().siblings().show()
      jQuery('.open-acc-form').show()
      jQuery('.right-cont-menu').show();
      jQuery('.quick-panel-form-cont input[name=name]').focus();
    }
    else {
      jQuery('.acctIcon').removeClass('active');
    }
  });

  /*  Home page OPEN ACC POPUU MENU  END*/
  /* WHY  SBI Page */
  jQuery.extend({
    isValidSelector: function(selector) {
      try {
        var $element = jQuery(selector);
      }
      catch(error) {
        return false;
      }
      return true;
    }
  });

  jQuery('.why-sbi-section-inner .why-sbi-nav').on('click', function() {
    var ind = jQuery(this).index();
    jQuery(this).children('.sbi-section-holder').addClass('active').parent().siblings().children().removeClass('active')
    jQuery(this).siblings('.why-sbi-section-desc').children('.why-sbi-section-desc-inner').find('.cnt-desc-section').eq(ind).show().siblings().hide()
  })

  jQuery('.why-sbi-close').on('click',function() {
    jQuery(this).parent('.cnt-desc-section').hide()
    jQuery(this).parents('.why-sbi-section-desc').siblings('.why-sbi-nav').children('.sbi-section-holder').removeClass('active')
  })

  jQuery(".Wrapper-why-sbismart .pageSearch-control").change(function() {
    var search = jQuery(".Wrapper-why-sbismart .pageSearch-control").val(); 
    jQuery.ajax({url: '/why-sbi/'+ search, success: function(result) {
      jQuery("#block-custom-why-sbi").html(result);
    }});
  });

  if(jQuery(".Wrapper-why-sbismart").length) {
    var path = window.location.href.slice(window.location.href.indexOf('#') + 1);
    if(jQuery.isValidSelector(path)) {
      var ind = jQuery('.why-sbi-section-inner .why-sbi-nav[id='+ path +']').index();
      jQuery('.why-sbi-section-inner .why-sbi-nav[id='+ path +']').children('.sbi-section-holder').addClass('active').parent().siblings().children().removeClass('active');
      jQuery('.why-sbi-section-inner .why-sbi-nav[id='+ path +']').siblings('.why-sbi-section-desc').children('.why-sbi-section-desc-inner').find('.cnt-desc-section').eq(ind).show().siblings().hide();
      jQuery('html, body').animate({
        scrollTop: jQuery('.why-sbi-section-inner .why-sbi-nav[id='+ path +']').offset().top - 150
      }, 1000);
    }
  }

  jQuery('.why li a').on('click',function() {
	  var path = jQuery(this).attr('href');
	  var param = path.split('#');
	  path = param[1];
      var ind = jQuery('.why-sbi-section-inner .why-sbi-nav[id='+ path +']').index();
      jQuery('.why-sbi-section-inner .why-sbi-nav[id='+ path +']').children('.sbi-section-holder').addClass('active').parent().siblings().children().removeClass('active');
      jQuery('.why-sbi-section-inner .why-sbi-nav[id='+ path +']').siblings('.why-sbi-section-desc').children('.why-sbi-section-desc-inner').find('.cnt-desc-section').eq(ind).show().siblings().hide();
      jQuery('html, body').animate({
        scrollTop: jQuery('.why-sbi-section-inner .why-sbi-nav[id='+ path +']').offset().top - 150
      }, 1000);
  })

  /* WHY  SBI Page End */
  /*Filter FAQ Accodian*/
  jQuery(".Wrapper-why-sbismart .pageSearch-control").keypress(function(e) {
    var key = e.which;
    // the enter key code
    if(key == 13) {
      jQuery('.loading').show();
      var search = jQuery(".Wrapper-why-sbismart .pageSearch-control").val(); 
      jQuery.ajax({url: '/why-sbi/'+ search, success: function(result){
        jQuery("#block-custom-why-sbi").html(result);
      }});
    }
  });

  /* FAQ- Accortion  */
  jQuery('.faq-panel .faq-panel-tit').on('click',function() {
    jQuery(this).addClass('bg-dark').parent('.faq-panel').siblings('.faq-panel').children('.faq-panel-tit').removeClass('bg-dark')
    jQuery(this).siblings('.faq-panel-desc').show()
    jQuery(this).children('.faq-plus-icon.faq-icon').hide().siblings('.faq-minus-icon.faq-icon').show()
    /*jQuery(this).parent('.faq-panel').siblings('.faq-panel').children('.faq-panel-desc').hide().children('faq-panel-tit').find('.faq-minus-icon').hide().siblings('.faq-plus-icon').show()*/
    jQuery(this).parent('.faq-panel').siblings('.faq-panel').children('.faq-panel-desc').hide(function(){
      jQuery(this).siblings('.faq-panel-tit').find('.faq-minus-icon').hide().siblings('.faq-plus-icon').show()
    })
  })

  /*  FAQ TOGGLE JS  left click  */
  jQuery(".faq-tit-cont").on('click', function(event) {
    jQuery(this).addClass('active').siblings().removeClass('active')
    var ind = jQuery(this).index();
    console.log(ind)
    jQuery('.faq-container-lft').eq(ind).show().siblings().hide();
    jQuery('.loading').show();
      jQuery.ajax({url: jQuery(this).attr("id"), success: function(result){
      jQuery("#block-custom-faq-accodian").html(result);
    }});
    // Triggers scroll page when category active.
    ajaxScrollTrigger(".", "loanPageTitle");
  });

  jQuery(".search_faq").on('change', function(event) {
    jQuery('.loading').show();
      jQuery.ajax({url: '/faq/search/' + jQuery(this).val(), success: function(result){
      jQuery("#block-custom-faq-accodian").html(result);
    }});
  });

  /*  EDUTAINMENT PAGE TOGGLE  */
  jQuery('.edutainment-rt-container .rt-cont-list').on('click',function(){
    var ind = jQuery(this).index()
    jQuery(this).addClass('active').siblings().removeClass('active');
    console.log(ind)
    jQuery('.edutainment-lft-cint-holder .edutainment-lft-container').eq(ind).show().siblings().hide()
  });

  jQuery(".rt-cont-list").on('click', function(event) {
    //jQuery('.loading').show();alert('adasda');
      jQuery.ajax({url: jQuery(this).attr("id"), success: function(result){
      jQuery("#block-views-edutainment-block-1").html(result);
      }});
  });

  /*  REGULATORY CORNER  */
  if(jQuery("#quicktabs-regulatory_corner").length) {
    var path = window.location.href.slice(window.location.href.indexOf('#') + 1);//alert(path);
    jQuery('#quicktabs-regulatory_corner ul li a').eq(path-1).trigger("click");
  }

  jQuery(".region-footer-top-right h4 a").on('click', function(event) {
    var attr = jQuery(this).attr("href");
    var param = attr.split('#');
    jQuery('#quicktabs-regulatory_corner ul li a').eq(param[1]-1).trigger( "click" );
  });

  /* PRODUCT AND SERVICE */
  if(jQuery(".page-product-and-service, .Wrapper-product-and-service").length) {
    var path = window.location.href.slice(window.location.href.indexOf('#') + 1);
    if(jQuery.isValidSelector(path)){
      jQuery('html, body').animate({
        scrollTop: jQuery("#" + path).offset().top - 130
      }, 1000);
    }
  }

  jQuery(".menu-footer-top-menu > .footer_links_menu-footer-top-menu > .menu-986 ul li a").click(function(event) {
	  //var path = window.location.href.slice(window.location.href.indexOf('#') + 1);
	  var path = jQuery(this).attr('href').slice(jQuery(this).attr('href').indexOf('#') + 1);
	  var page = path.split('/');
	  //if( page[page.length - 1] == 'product-and-service'){
		//event.preventDefault();
		//var name = jQuery(this).attr('href');alert(name);
	    jQuery('html, body').animate({
	      scrollTop: jQuery("#" + page[page.length - 1]).offset().top - 100
	    }, 1000);
	  //}
  });

  jQuery(document).on('click','.view-chield-menu-for-product-service .field-content a', function(event) {
    var attr = jQuery(this).attr("href");
    var param = attr.split('#');
    jQuery('html, body').animate({
      scrollTop: jQuery("#" + param[1]).offset().top - 100
    }, 1000);
  });
  jQuery('.divSpace a').on('click',function() {
	    var id = jQuery(this).attr("id");
	    if(jQuery(this).attr("aria-expanded") == 'true'){
		    jQuery('html, body').animate({
		      scrollTop: jQuery(".summary" + id).offset().top - 200
		    }, 1000);
	    }
  });
 
  /*  People Page Toggle content  */
  jQuery('.people-listing .people-listing-holder').on('click',function() {
    jQuery(this).children('.people-listing-inner').addClass('active').parent().siblings().children('.people-listing-inner').removeClass('active')
    var ind = jQuery(this).index();
    console.log(ind);
    jQuery(this).siblings('.people-description-holder').children('.people-description-container').eq(ind).show().siblings().hide();
  });

  jQuery('.people-desc-close').on('click',function() {
    jQuery(this).parents('.people-description-container').hide();
    jQuery(this).parents('.people-description-container').parent('.people-description-holder').siblings('.people-listing-holder').children().removeClass('active')
  });

  jQuery('.people-listing .people-listing-holder a').on('click',function(event) {
    event.preventDefault();
  })

  /*  CALLBACK form */
  jQuery(document).on('change','#edit-category', function(event) {
    jQuery.ajax({url: '/callback/parent/' + jQuery(this).val(), success: function(result) {
      jQuery("#edit-subcategory").html(result);
    }});
  });
  jQuery(document).on('click','.call_first button', function(event) {
    event.preventDefault();
    jQuery.post("/callback/request", {
      category: jQuery("#edit-category option:selected").text(),
      subcategory: jQuery("#edit-subcategory option:selected").text(),
      clientcode: jQuery('#edit-client-code').val(),
      mobileno: jQuery('#edit-registered-mobile-no').val()
    },
    function(result) {
      jQuery("#msg").html(result);
        setTimeout(function(){ jQuery('.ctools-close-modal').trigger( "click" );;
      }, 1500);
    });
  });

  jQuery(document).on('blur','.call_fields select,.call_fields input[type=text]', function(event) {
    jQuery.post("/callback/validate", {
      category: jQuery('#edit-category option:selected').text(),
      name: jQuery(this).attr('name'),
      val: jQuery(this).val()
    },
    function(result){
      jQuery("#msg").html(result);
      if(jQuery('#edit-category option:selected').text() == 'Account Opening'){
    	  var arr = ["edit-category", "edit-subcategory", "edit-registered-mobile-no"];
      }else{
          var arr = ["edit-category", "edit-subcategory", "edit-client-code", "edit-registered-mobile-no"];
      }
      var c = 0;
      for (var i = 0; i < arr.length; i++) {
        if((jQuery("#"+arr[i]).val()!= '')){c++;}
      }
      if((c == arr.length) && (result == '')){jQuery('.call_first button').removeAttr('disabled');}else{jQuery('.call_first button').attr('disabled','disabled');}
    });
  });

  jQuery('#custom-email-us-form .form-radio').on('click', function() {
    if(jQuery(this).val() == 1){
      jQuery('.catg').show();
      jQuery('.query').hide();
    }else{
      jQuery('.catg').hide();
      jQuery('.query').show();
    }
  });

  /* CUSTOMER SERVICE*/
  if(jQuery(".custServiceWrapper").length) {
    var path = window.location.href.slice(window.location.href.indexOf('#') + 1);
    if(jQuery.isValidSelector(path)){
      jQuery('html, body').animate({
        scrollTop: jQuery("#" + path).offset().top - 100
      }, 1000);
    }
  }

  /* PRELOGIN AND POSTLOGIN */
  jQuery('.home-logo').mouseover(function() {
    jQuery('.prelogin-sub-section').show();
  });
  jQuery('.home-logo').mouseout(function() {
    jQuery('.prelogin-sub-section').hide();
  });

  jQuery('.prelogin-sub-section > li').mouseover(function() {
    jQuery('.prelogin-sub-section > li .prelogin-mnu-list-cont').hide();
    jQuery(this).find('.prelogin-mnu-list-cont').show();
  });
  jQuery('.region-navigation').mouseover(function() {
    jQuery( ".prelogin-sub-section" ).addClass( "myclass" );
  });  
  jQuery('.region-navigation').mouseover(function() {
    jQuery('.prelogin-sub-section').show();
    jQuery( ".prelogin-sub-section" ).addClass( "myclass" );
  });
  jQuery('.region-navigation').mouseout(function() {
    jQuery('.prelogin-sub-section').hide();
    jQuery( ".prelogin-sub-section" ).removeClass( "myclass" );
  });

  /* QUOTE SECTION */
  jQuery('.quote-tit div').click(function(event) {
    jQuery('.quote-tit div').toggleClass( "act" );
    var code = jQuery('.region-topsearch input[name=company_code]').val();
    jQuery('.region-topsearch input[name=type]').val(jQuery(this).attr('id'));
    if(code != ''){
      jQuery.ajax({url: '/quote/service/' + code + jQuery(this).attr('id') , success: function(result){
        jQuery(".quote-content-section").html(result);
      }});
    }
  });

  jQuery('.region-topsearch button[type=submit]').click(function(event) {
    event.preventDefault();
    var type = jQuery('.region-topsearch select').val();
    if(type == 'quote'){
      var search_txt = jQuery('.region-topsearch input[type=text]').val();
      jQuery.ajax({url: '/quote/' + search_txt, success: function(result){
        jQuery(".quote_result").html(result);
      }});
    }
    else {
      jQuery(".region-topsearch button[type=submit]").closest("form").submit();
    }
  });
  jQuery(document).on('click','.company_name li a', function(event) {
    event.preventDefault();
    var form = jQuery(document.createElement('form'));
    jQuery(form).attr("action", jQuery(this).attr('href'));
    jQuery(form).attr("method", "POST");
    jQuery(form).css("display", "none");

    var company_code = jQuery("<input>")
      .attr("type", "text")
      .attr("name", "code")
      .val(jQuery(this).attr('rel'));
    jQuery(form).append(jQuery(company_code));

    var type = jQuery("<input>")
      .attr("type", "text")
      .attr("name", "type")
      .val("BSE" );
    jQuery(form).append(jQuery(type));

    form.appendTo( document.body );
    jQuery(form).submit();
  });

  jQuery('.Wrapper-getquote, .quote_refresh').click(function() {
    var code = jQuery('.region-topsearch input[name=company_code]').val();
    var type = jQuery('.region-topsearch input[name=type]').val();
    if(code != ''){
      jQuery(".quote-content-section").addClass('feded');
      jQuery.ajax({url: '/quote/service/' + code + type , success: function(result){
        jQuery(".quote-content-section").html(result);
        jQuery(".quote-content-section").removeClass('feded');
      }});
    }
  });

  if(jQuery('.Wrapper-getquote').length) {
    var code = jQuery('.region-topsearch input[name=company_code]').val();
    var type = jQuery('.region-topsearch input[name=type]').val();
    if(code != ''){
      jQuery(".quote-content-section").addClass('feded');
      jQuery.ajax({url: '/quote/service/' + code + type , success: function(result){
        jQuery(".quote-content-section").html(result);
        jQuery(".quote-content-section").removeClass('feded');
      }});
    }
  }
  jQuery('#custom-email-us-form button[type=submit]').click(function(event) {
    event.preventDefault();
    jQuery('.loading').show();
    jQuery.post("/contact/submit", {
      exitsting_customer: (jQuery("#edit-exitsting-customer input[type=radio]:checked").val()== 1)?'YES':'NO',
      category: jQuery("#edit-category option:selected").text(),
      subcategory: jQuery("#edit-subcategory option:selected").text(),
      query_type: jQuery('#edit-query-type  option:selected').text(),
      client_code: jQuery('#edit-client-code').val(),
      name: jQuery('#edit-name').val(),
      pan_number: jQuery('#edit-pan-number').val(),
      application_no: jQuery('#edit-application-no').val(),
      contact_number: jQuery('#edit-contact-number').val(),
      date_of_birth: jQuery('#edit-date-of-birth').val(),
      email: jQuery('#edit-email').val(),
      description: jQuery('#edit-description').val(),
    },
    function(result){
      jQuery('.contact-us-container .status_msg').remove();
      jQuery('.contact-us-container').prepend(result);
      jQuery('.loading').hide();
    });
  });

  /*  MARKET SECTION */
  jQuery(document).on('click','.rgt-sec .btns', function(event) {
    if (jQuery(".right-cont-menu").is(":hidden")) {
      jQuery(".right-cont-menu").css("display", 'block');
      jQuery(".hide-btn").css("display", 'none');
      jQuery(".hide-btn").next().css("display", 'block');
    }

    jQuery(".floatMenulist").addClass("pull-left");
    jQuery(".open-acc-form").css("display", 'block');
  });

  jQuery('.refresh').click(function() {
    jQuery(".market_refresh").addClass('feded');
    jQuery.ajax({url: '/market/refresh', success: function(result){
      jQuery(".market_refresh").html(result);
      jQuery(".market_refresh").removeClass('feded');
    }});
  });
  
  if(jQuery('.Wrapper-careers').length) {
    jQuery('.breadcrumb').append('<a target="_blank" href="https://app.sbismart.com/HTMLPROJECTS/sbi-careers-pages/careers.html" class="btnOpen">Current Openings</a>');
  }
  
  jQuery("#user-register-form input, .captcha input").bind("keyup",function(e){
	  var value = jQuery(this).val();
	    if(e.keyCode == 222){
	    	jQuery(this).val(value.substr(0, value.length - 1));
        }
  });
  
  jQuery(document).on('click','.edu-learning-analysis li.views-row', function(event) {
	  jQuery( ".edu-learning-analysis" ).fadeTo( "slow" , 0.5);
	  var id = jQuery(this).attr('id');
	  	setTimeout(function(){
	  		var text = jQuery('.edu-analysis-container').html();
	  		jQuery('#custom-content-' + id).html(text);
	  		jQuery('.custom-content').hide();
	  		var width = jQuery(window).width();
	 	   if(width <= 767){
	 		  jQuery('#custom-content-' + id).show('slow');
	 	   }else{
	 		  jQuery('#custom-content-' + id).show();
	 	   }
	 	  jQuery('.custom-content').height(jQuery('.edu-learning-analysis .lft-inner').height() - 38);
	 	  jQuery( ".edu-learning-analysis" ).fadeTo( "slow" , 1);
	  	}, 1500);
	  
  });
  /*
  jQuery('.edutainment-rt-container .rt-cont-list').click(function() {
	  var id = jQuery(this).attr('id');
	  setTimeout(function(){
		  var text = jQuery('#block-views-edutainment-block-1 div div div div div div div').html();
		  var res = id.split("/");
		  jQuery('#cntent-video-' + res[2]).html(text);
		  jQuery('.cntent-video').hide();
	  		var width = jQuery(window).width();
	 	   if(width <= 767){
	 		  jQuery('#cntent-video-' + res[2]).show('slow');
	 	   }else{
	 		  jQuery('#cntent-video-' + res[2]).show();
	 	   }
	  }, 1500);
  });
  jQuery('.edutainment-rt-container .rt-cont-list').eq(0).trigger("click");
  */
  //var path = window.location.href.slice(window.location.href.indexOf('.com') + 1);
  /*var path = window.location.href;
  path = path.split('/');
  if((path[3] == '') ){
	  jQuery('.html').prepend('<div class="home-popup-overlay">&nbsp;</div>');
  }
  jQuery(".close_pop").click(function() {
	  jQuery('.popup_close').trigger( "click" );
  });
	jQuery(".popup_close").click(function() {
		jQuery('.home-popup-overlay').hide();
		jQuery('.home-popup').hide();
	});
	jQuery('.home-popup').show();
	setTimeout(function(){ jQuery('.popup_close').trigger( "click" );
	}, 60000);*/
	
});
