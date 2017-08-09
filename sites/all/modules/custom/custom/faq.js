/**
 * @file
 * faq.js
 *
 */
(function($) {
  Drupal.behaviors.customFAQs = {
    attach: function (context, settings) {
      // Get 'id' param from url.
      var idParam = getParameterByName("id");
      var cidParam = getParameterByName("cid");

      // Triggers when both FAQ id and cid are avaliable.
      if (idParam != null && cidParam != null) {
        // Triggers category sections.
        triggerCategoryItem(cidParam);
        // Scrolls FAQ item after 2 seconds.
        setTimeout(function() {
          triggerFAQItem(idParam);
        }, 2000);
      }

      // Triggers FAQ item alone.
      if (idParam != null && cidParam == null) {
        triggerFAQItem(idParam);
      }

      // Triggers Category cid alone.
      if (idParam == null && cidParam != null) {
        triggerCategoryItem(cidParam);
        // Triggers scroll page when category active.
        ajaxScrollTrigger(".", "loanPageTitle");
      }

      // Function to trigger FAQ item.
      function triggerFAQItem(idParam) {
        $("." + idParam + " .faq-panel-tit").addClass('bg-dark');
        $("." + idParam + " .faq-panel-tit").find(".faq-plus-icon").hide();
        $("." + idParam + " .faq-panel-tit").find(".faq-minus-icon").show();
        $("." + idParam).find(".faq-panel-desc").show();
        // Triggers scroll page even.
        ajaxScrollTrigger(".", idParam);
      }

      // Function to trigger FAQ Category section.
      function triggerCategoryItem(cidParam) {
        $("." + cidParam).addClass('active').siblings().removeClass('active');
        var ind = $("." + cidParam).index();
        $('.faq-container-lft').eq(ind).show().siblings().hide();
        $('.loading').show();
        $.ajax({url: $("." + cidParam).attr("id"), success: function(result){
          $("#block-custom-faq-accodian").html(result);
        }});
      }
    }
  };
})(jQuery);
