(function($) {
  Drupal.behaviors.customFAQs = {
    attach: function (context, settings) {
    	
    	//$('.pagination .prv').click(function() {
    	$(document).on('click','#marketsnews .pagination .prv', function(event) {
    	   var prv = parseInt($(this).attr('name'));
    	   var cpage = parseInt($("#marketsnews .pagination .cpage").text());
    	   if(prv < cpage){
    		   $("#marketsnews .pagination .cpage").text( cpage - 1);
    		   var count = $('#marketsnews .faq-panel').length;
    		   var end = ((cpage - 1) * 10) - 1; 
			   var start = (end - 10) + 1;
    		   for(var i = 0; i < count; i++){
    			   if((i >= start)&&(i <= end)){
    				   $('#marketsnews .faq-panel').eq(i).addClass('show');
    				   $('#marketsnews .faq-panel').eq(i).removeClass('hide');
    			   }else{
    				   $('#marketsnews .faq-panel').eq(i).removeClass('show');
    				   $('#marketsnews .faq-panel').eq(i).addClass('hide');
    			   }
    		   }
    	   }
    	});
    	
    	//$('.pagination .nxt').click(function() {
    	$(document).on('click','#marketsnews .pagination .nxt', function(event) {
    		var nxt = parseInt($(this).attr('name'));
    		var cpage = parseInt($("#marketsnews .pagination .cpage").text());
    		if(nxt > cpage){
    			$("#marketsnews .pagination .cpage").text( cpage + 1);
    			var count = $('#marketsnews .faq-panel').length;
     		    var end = ((cpage + 1) * 10) - 1; 
     		    var start = (end - 10) + 1;
     		   for(var i = 0; i < count; i++){
    			   if((i >= start)&&(i <= end)){
    				   $('#marketsnews .faq-panel').eq(i).addClass('show');
    				   $('#marketsnews .faq-panel').eq(i).removeClass('hide');
    			   }else{
    				   $('#marketsnews .faq-panel').eq(i).removeClass('show');
    				   $('#marketsnews .faq-panel').eq(i).addClass('hide');
    			   }
    		   }
    		}
    	});
    	
    	//$('.pagination .prv').click(function() {
    	$(document).on('click','#marketsviews .pagination .prv', function(event) {
    	   var prv = parseInt($(this).attr('name'));
    	   var cpage = parseInt($("#marketsviews .pagination .cpage").text());
    	   if(prv < cpage){
    		   $("#marketsviews .pagination .cpage").text( cpage - 1);
    		   var count = $('#marketsviews .content').length;
    		   var end = ((cpage - 1) * 10) - 1; 
			   var start = (end - 10) + 1;
    		   for(var i = 0; i < count; i++){
    			   if((i >= start)&&(i <= end)){
    				   $('#marketsviews .content').eq(i).addClass('show');
    				   $('#marketsviews .content').eq(i).removeClass('hide');
    			   }else{
    				   $('#marketsviews .content').eq(i).removeClass('show');
    				   $('#marketsviews .content').eq(i).addClass('hide');
    			   }
    		   }
    	   }
    	});
    	
    	//$('.pagination .nxt').click(function() {
    	$(document).on('click','#marketsviews .pagination .nxt', function(event) {
    		var nxt = parseInt($(this).attr('name'));
    		var cpage = parseInt($("#marketsviews .pagination .cpage").text());
    		if(nxt > cpage){
    			$("#marketsviews .pagination .cpage").text( cpage + 1);
    			var count = $('#marketsviews .content').length;
     		    var end = ((cpage + 1) * 10) - 1; 
     		    var start = (end - 10) + 1;
     		   for(var i = 0; i < count; i++){
    			   if((i >= start)&&(i <= end)){
    				   $('#marketsviews .content').eq(i).addClass('show');
    				   $('#marketsviews .content').eq(i).removeClass('hide');
    			   }else{
    				   $('#marketsviews .content').eq(i).removeClass('show');
    				   $('#marketsviews .content').eq(i).addClass('hide');
    			   }
    		   }
    		}
    	});
    	
    	//$('.pagination .prv').click(function() {
    	$(document).on('click','#marketsmcxrates .pagination .prv', function(event) {
    	   var prv = parseInt($(this).attr('name'));
    	   var cpage = parseInt($("#marketsmcxrates .pagination .cpage").text());
    	   if(prv < cpage){
    		   $("#marketsmcxrates .pagination .cpage").text( cpage - 1);
    		   var count = $('#marketsmcxrates .content .rows').length;
    		   var end = ((cpage - 1) * 10) - 1; 
			   var start = (end - 10) + 1;
    		   for(var i = 0; i < count; i++){
    			   if((i >= start)&&(i <= end)){
    				   $('#marketsmcxrates .content .rows').eq(i).addClass('show');
    				   $('#marketsmcxrates .content .rows').eq(i).removeClass('hide');
    			   }else{
    				   $('#marketsmcxrates .content .rows').eq(i).removeClass('show');
    				   $('#marketsmcxrates .content .rows').eq(i).addClass('hide');
    			   }
    		   }
    	   }
    	});
    	
    	//$('.pagination .nxt').click(function() {
    	$(document).on('click','#marketsmcxrates .pagination .nxt', function(event) {
    		var nxt = parseInt($(this).attr('name'));
    		var cpage = parseInt($("#marketsmcxrates .pagination .cpage").text());
    		if(nxt > cpage){
    			$("#marketsmcxrates .pagination .cpage").text( cpage + 1);
    			var count = $('#marketsmcxrates .content .rows').length;
     		    var end = ((cpage + 1) * 10) - 1; 
     		    var start = (end - 10) + 1;
     		   for(var i = 0; i < count; i++){
    			   if((i >= start)&&(i <= end)){
    				   $('#marketsmcxrates .content .rows').eq(i).addClass('show');
    				   $('#marketsmcxrates .content .rows').eq(i).removeClass('hide');
    			   }else{
    				   $('#marketsmcxrates .content .rows').eq(i).removeClass('show');
    				   $('#marketsmcxrates .content .rows').eq(i).addClass('hide');
    			   }
    		   }
    		}
    	});
    	
    	//$('.pagination .prv').click(function() {
    	$(document).on('click','#marketsintrnmarkets .pagination .prv', function(event) {
    	   var prv = parseInt($(this).attr('name'));
    	   var cpage = parseInt($("#marketsintrnmarkets .pagination .cpage").text());
    	   if(prv < cpage){
    		   $("#marketsintrnmarkets .pagination .cpage").text( cpage - 1);
    		   var count = $('#marketsintrnmarkets .content').length;
    		   var end = ((cpage - 1) * 10) - 1; 
			   var start = (end - 10) + 1;
    		   for(var i = 0; i < count; i++){
    			   if((i >= start)&&(i <= end)){
    				   $('#marketsintrnmarkets .content').eq(i).addClass('show');
    				   $('#marketsintrnmarkets .content').eq(i).removeClass('hide');
    			   }else{
    				   $('#marketsintrnmarkets .content').eq(i).removeClass('show');
    				   $('#marketsintrnmarkets .content').eq(i).addClass('hide');
    			   }
    		   }
    	   }
    	});
    	
    	//$('.pagination .nxt').click(function() {
    	$(document).on('click','#marketsintrnmarkets .pagination .nxt', function(event) {
    		var nxt = parseInt($(this).attr('name'));
    		var cpage = parseInt($("#marketsintrnmarkets .pagination .cpage").text());
    		if(nxt > cpage){
    			$("#marketsintrnmarkets .pagination .cpage").text( cpage + 1);
    			var count = $('#marketsintrnmarkets .content').length;
     		    var end = ((cpage + 1) * 10) - 1; 
     		    var start = (end - 10) + 1;
     		   for(var i = 0; i < count; i++){
    			   if((i >= start)&&(i <= end)){
    				   $('#marketsintrnmarkets .content').eq(i).addClass('show');
    				   $('#marketsintrnmarkets .content').eq(i).removeClass('hide');
    			   }else{
    				   $('#marketsintrnmarkets .content').eq(i).removeClass('show');
    				   $('#marketsintrnmarkets .content').eq(i).addClass('hide');
    			   }
    		   }
    		}
    	});
    	
    	jQuery('.news_refresh').click(function() {
    	    jQuery("#marketsnews").addClass('feded');
    	    jQuery.ajax({url: '/markets/analysis/news', success: function(result){
    	      jQuery("#marketsnews").html(result);
    	      jQuery("#marketsnews").removeClass('feded');
    	    }});
        });
    	
    	jQuery('.views_refresh').click(function() {
    	    jQuery("#marketsviews").addClass('feded');
    	    jQuery.ajax({url: '/markets/analysis/views', success: function(result){
    	      jQuery("#marketsviews").html(result);
    	      jQuery("#marketsviews").removeClass('feded');
    	    }});
        });
    	
    	jQuery('.mcxrate_refresh').click(function() {
    	    jQuery("#marketsmcxrates").addClass('feded');
    	    jQuery.ajax({url: '/markets/analysis/mcxrate', success: function(result){
    	      jQuery("#marketsmcxrates").html(result);
    	      jQuery("#marketsmcxrates").removeClass('feded');
    	    }});
        });
    	jQuery('.international_market_refresh').click(function() {
    	    jQuery("#marketsintrnmarkets").addClass('feded');
    	    jQuery.ajax({url: '/markets/currencies/international_markets', success: function(result){
    	      jQuery("#marketsintrnmarkets").html(result);
    	      jQuery("#marketsintrnmarkets").removeClass('feded');
    	    }});
        });
        jQuery('.reference_rate_refresh').click(function() {
    	    jQuery("#marketsrefrates").addClass('feded');
    	    jQuery.ajax({url: '/markets/currencies/reference_rates', success: function(result){
    	      jQuery("#marketsrefrates").html(result);
    	      jQuery("#marketsrefrates").removeClass('feded');
    	    }});
        });
    	
    }
  };
})(jQuery);
