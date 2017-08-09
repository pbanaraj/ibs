(function($) {
  Drupal.behaviors.sbicap_tools = {
    attach: function (context, settings) {
    var basepath = Drupal.settings.basePath;
    if (document.getElementById('client_invite')) {
      $(document.getElementById('client_invite')).ready(function() {
        var base_url = get_hostname(location.href);
        var id= document.getElementById('client_invite').innerHTML;
        window.location.href =base_url+'/sbicap/education/tools';
        newwindow = window.open(base_url+'/sbicap/popup/education/tools_popup/'+id, 'name', 'class=thickbox,height=400, width=530,top=130,left=430');
        if (window.focus) {newwindow.focus()}
          return false;
        });
      }
      // Tools click functionality.
      $('.tool-single-section-holder').on('click', function() {
        // Throbber when we click on specific tools.
        $(this).parent().find('.ajax-display').html('<div id="global-throbber" class="globalThrobber"><img src="' + Drupal.settings.basePath + 'misc/throbber-active.gif"/></div>');
        // Removes active class when we click other tool.
        $('.tool-single-section').removeClass('active');
        // Adds active class to the clicked tool.
        $(this).find('.tool-single-section').addClass('active');
        var nid = $(this).attr('id');
        // Node title.
        var title = $(this).find('.tool-icon-tit').text();
        var parentObj = $(this);
        var ajaxURL = basepath + 'ajax-content/' + nid;
        // Calls ajax to render specific node/tool.
        $.ajax({
          url: ajaxURL,
          type: 'post',
          success: function (response) {
            // Making .ajax-display container empty to make sure to have only one tool at a time.
            $('.ajax-display').empty();
            // Shows slide down tool content when we click on tool.
            parentObj.parent().find('.ajax-display').html(response).show('show');
            // Prepares close button to keep after the title.
            var close = $('<div class="col-sm-3"><div class="text-right tool-close">X</div></div>');
            parentObj.parent().find('h2').after(close);
            // Removes anchor tag from the tool title.
            parentObj.parent().find('h2').find("a").contents().unwrap();
            // Scrolls down the content position.
            ajaxScrollCall(nid);
            // Triggers close.
            triggerCloseButton();
          }
        });

        // Updates content clicked statistics.
        var ajaxStatisticsURL = basepath + 'update-statistics';
        $.ajax({
          url: ajaxStatisticsURL,
          type: 'post',
          data: {nodeID: nid, nodeTitle: title},
          success: function (response) {
            // Success message here.
          }
        });
      });
      // Recent tools block content.
      $('.rt-cnt-tit').on('click', function() {
        $('.rt-cnt-tit').removeClass('active');
        $(this).addClass('active');
        var classData = $(this).find(".tools-title").attr('class').split(" ");
        var nid = classData[1];
        $("#" + nid).trigger('click');
      });
      // Scroll.
      function ajaxScrollCall(nid) {
        var el = $('#' + nid);
        var originalPOS = el.offset().top;
        // Scroll window and stay to the specific content.
        $("body, html").animate({
            scrollTop: originalPOS
        }, 600);
      }
      // Function to trigger close button.
      function triggerCloseButton() {
        $(".tool-close").on('click', function(){
          if ($(this).parents('.ajax-display').length) {
            $(this).parents('.ajax-display').hide();
          }
        });
      }
      // Opens tooltip on hover of all question mark symbols from tools.
      $(document).tooltip({ selector: '[data-toggle="tooltip"]' });
    }
  };
})(jQuery);

	function closepopup(a){	
                var base_url = window.location.hostname;
		window.opener.location.href =base_url+'/sbicap/education/sbicap_tools_form';	
		
		a.action=base_url+'/sbicap/education/sbicap_tools_form';
		a.submit();
		
	}
function get_hostname(url) {
    var m = ((url||'')+'').match(/^http:\/\/[^/]+/);
    return m ? m[0] : null;
}