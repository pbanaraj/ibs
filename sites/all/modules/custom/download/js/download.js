(function ($,Drupal) {
Drupal.behaviors.download = {
  attach: function (context, settings) {
    
	  /*  SBI DOWNLOADS JS TOGGLE  */
		$('.invest-frm-container-holder .digital-contact-mode').on('click',function(){
			$(this).siblings().find('.digital-contact-mode-desc').toggle()
			$('.invest-frm-container-holder .digital-contact-mode .digital-toggle-arw').toggleClass('act')
		});
		$('.Wrapper-download').on('click', '.dwn-more-link', function(){
		//$('.Wrapper-download .dwn-more-link').on('click',function(){
			var len = $('.view-forms-and-software .view-content > .invest-frm-container').length;
			//alert(len);
			$(this).show();
			if($(this).text() == 'More >>'){
				for(var i = 5; i <= len; i++){
					$('.view-forms-and-software .view-content > .invest-frm-container').eq(i).show();
				}
				$(this).text('Less >>');
			}else{
				for(var i = 5; i <= len; i++){
					$('.view-forms-and-software .view-content > .invest-frm-container').eq(i).hide();
				}
				$(this).text('More >>');
			}
		});
		
		
	  
  }
};
})(jQuery,Drupal)