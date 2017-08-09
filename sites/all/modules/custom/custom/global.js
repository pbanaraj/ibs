(function($) {
  //$("#block-formblock-user-register .form-submit").attr('disabled', 'disabled');
  $.fn.error_message_call = function(o){
    // Removes all span tags except first element.
    $(o.thisObj).find('span').slice(0).remove();
  }
  
  $.fn.trigger_error_messages = function(o){
    $(".error-messages").slice(0).remove();
  }
 
  // Custom function to retreive params from requeted url.
  getParameterByName = function (name, url) {
    if (!url) url = window.location.href;
    name = name.replace(/[\[\]]/g, "\\$&");
    var regex = new RegExp("[?&]" + name + "(=([^&#]*)|&|#|$)");
    results = regex.exec(url);
    if (!results) return null;
    if (!results[2]) return '';
    return decodeURIComponent(results[2].replace(/\+/g, " "));
  }

  // Scroll.
  ajaxScrollTrigger = function(selector, nid) {
    var el = $(selector + nid);
    var originalPOS = el.offset().top;
    // Scroll window and stay to the specific content.
    $("body, html").animate({
        scrollTop: originalPOS - 130
    }, 600);
  }
})(jQuery);

(function ($) {
  Drupal.behaviors.sbiGlobal = {
    attach: function (context, settings) {
      // On click of Why SBISMART menu, redirects to respective page.
      $("#why-sbismart .dropdown-toggle").on('click', function() {
        var anchorHREF = $(this).attr('href');
        if (anchorHREF) {
          window.location.href = anchorHREF;
        }
      });
    }
  };
})(jQuery);
