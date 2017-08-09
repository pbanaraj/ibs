(function($) {
  Drupal.behaviors.SBICAPFeedback = {
    attach: function (context, settings) {
      $("#edit-reset").click(function(){
        var max_length = $(".max-limit-desc em:eq(0)").text();
        if (max_length) {
          // Resets Left: description.
          $(".max-limit-left").html("Left: <em>" + max_length + "</em> character(s).")
        }
      });
      // Overall / Specific.
      var selectedVal = $("#edit-submitted-section input[type='radio']:checked").val();
      if (selectedVal == "overall") {
        $(".webform-component--specific-section").addClass('feedback-hide-element');
      }
      $("#edit-submitted-section input[type='radio']").click(function() {
        $(".webform-component--specific-section").toggleClass('feedback-hide-element');
      });
      // Inserts Radio button titles after the label.
      $(".form-item-submitted-presentation-locate-links img, #edit-submitted-navigation-navigation-rating img, #edit-submitted-content-content-rating img, #edit-submitted-overall-recommend-us img").each(function() {
        var imgTitle = $(this).attr('title');
        $("<span>" + imgTitle + "</span>").insertAfter($(this).parent());
      });
      // Presentation.
      var locateLinksVal = $(".webform-component--presentation--locate-links input[type='radio']:checked").val();
      if (locateLinksVal != "wow") {
        $("webform-component--presentation--improve-presentation1").removeClass("feedback-hide-element");
      }
      if (locateLinksVal == undefined) {
        $("webform-component--presentation--improve-presentation1").addClass("feedback-hide-element");
      }
      $(".webform-component--presentation--locate-links input[type='radio']").click(function() {
        if ($(this).val() != "wow") {
          $(".webform-component--presentation--improve-presentation1").removeClass('feedback-hide-element');
        }
        else {
          $(".webform-component--presentation--improve-presentation1").addClass('feedback-hide-element');
        }
      });

      // Navigation.
      var navigationRatingVal = $(".webform-component--navigation--navigation-rating input[type='radio']:checked").val();
      if (navigationRatingVal != "wow") {
        $(".webform-component--navigation--improve-navigation").removeClass("feedback-hide-element");
      }
      if (navigationRatingVal == undefined) {
        $(".webform-component--navigation--improve-navigation").addClass("feedback-hide-element");
      }
      $(".webform-component--navigation--navigation-rating input[type='radio']").click(function() {
        if ($(this).val() != "wow") {
          $(".webform-component--navigation--improve-navigation").removeClass('feedback-hide-element');
        }
        else {
          $(".webform-component--navigation--improve-navigation").addClass('feedback-hide-element');
        }
      });

      // Content.
      var contentRatingVal = $(".webform-component--content--content-rating input[type='radio']:checked").val();
      if (contentRatingVal != "wow") {
        $(".webform-component--content--improve-content").removeClass("feedback-hide-element");
      }
      if (contentRatingVal == undefined) {
        $(".webform-component--content--improve-content").addClass("feedback-hide-element");
      }
      $(".webform-component--content--content-rating input[type='radio']").click(function() {
        if ($(this).val() != "wow") {
          $(".webform-component--content--improve-content").removeClass('feedback-hide-element');
        }
        else {
          $(".webform-component--content--improve-content").addClass('feedback-hide-element');
        }
      });

      // Overall.
      var overallRatingVal = $(".webform-component--overall--recommend-us input[type='radio']:checked").val();
      if (overallRatingVal != "wow") {
        $(".webform-component--overall--comment-overall-experience").removeClass("feedback-hide-element");
      }
      if (overallRatingVal == undefined) {
        $(".webform-component--overall--comment-overall-experience").addClass("feedback-hide-element");
      }
      $(".webform-component--overall--recommend-us input[type='radio']").click(function() {
        if ($(this).val() != "wow") {
          $(".webform-component--overall--comment-overall-experience").removeClass('feedback-hide-element');
        }
        else {
          $(".webform-component--overall--comment-overall-experience").addClass('feedback-hide-element');
        }
      });
    }
  };
})(jQuery);
