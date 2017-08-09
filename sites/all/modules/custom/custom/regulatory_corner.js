(function ($) {
  Drupal.behaviors.regulatory_corner = {
    attach: function (context) {
      $("#block-custom-regulation .well-sm p.arrow-dark").click(function() {
        $(this).next().toggleClass('hide-content');
        if ($(this).parent().find('.sitcont').is(":hidden")) {
          $(this).parent().find('.sitcont').slideDown();
        }
        else {
          $(this).parent().find('.sitcont').removeClass('hide-content').slideToggle();
        }
        
      });
    }
  };
})(jQuery);