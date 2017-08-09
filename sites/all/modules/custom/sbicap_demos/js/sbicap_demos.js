(function($) {
  Drupal.behaviors.sbicap_demos = {
    attach: function (context, settings) {
      var basepath = Drupal.settings.basePath;

      // Demos click functionality.
      $('.video-info-cont-holder').on('click', function() {
        // Removes active class for .video-info-cont-holder elements.
        $('.video-info-cont-holder').removeClass('active');
        // Adds active class to the clicked element.
        $(this).addClass('active');
        // Throbber when we click on specific tools.
        $(this).parent().find('.ajax-display').html('<div id="global-throbber" class="globalThrobber"><img src="' + Drupal.settings.basePath + 'misc/throbber-active.gif"/></div>');
        // Removes active class when we click other demo.
        $('.video-info-cont').removeClass('active');
        // Adds active class to the clicked demo.
        $(this).find('.video-info-cont').addClass('active');
        var nid = $(this).attr('id');
        // Node title.
        var title = $(this).find('.video-icon-tit').text();
        var parentObj = $(this);
        var ajaxURL = basepath + 'ajax-demos/' + nid;
        // Calls ajax to render specific node/demo.
        $.ajax({
          url: ajaxURL,
          type: 'post',
          success: function (response) {
            // Making .ajax-display container empty to make sure to have only one demo at a time.
            $('.ajax-display').empty();
            // Shows slide down demo content when we click on demo.
            parentObj.parent().find('.ajax-display').html(response).show('show');
            // Prepares close button to keep after the title.
            var close = $('<div class="col-sm-3"><div class="text-right tool-close">X</div></div>');
            parentObj.parent().find('h2').after(close);
            // Removes anchor tag from the demo title.
            parentObj.parent().find('h2').find("a").contents().unwrap();
            // Scrolls down the content position.
            ajaxScrollCall(nid);
            // Triggers close.
            triggerCloseButton();
          }
        });
          // Triggers statistics call.
          triggerStatistics(basepath, nid, title);
      });

      // Get 'id' param from url.
      var idParam = parseInt(getParameterByName("id"));
      if (idParam != null) {
        // Triggers demo video item when page refresh completes.
        $("#" + idParam).trigger('click');
        if ($("." + idParam).length >= 1) {
          if ($(".video-icon-tit " + idParam).next().find('.pdf-popup')) {
            // Triggers respective PDF file when page refresh completes.
            $("." + idParam).next().find('a').trigger('click');
          }
        }
      }

      // Recent tools block content.
      $('.viwed-demo-holder-in').on('click', function() {
        $('.viwed-demo-holder-in').removeClass('active');
        $(this).addClass('active');
        var classData = $(this).find(".demo-title").attr('class').split(" ");
        var nid = classData[1];
        var title = $(this).find(".demo-title").text();
        $("#" + nid).trigger('click');
        if ($(this).find("a").hasClass("pdf-popup")) {
          $(this).find("a").trigger('click');
          // Triggers statistics call.
          triggerStatistics(basepath, nid, title);
        }
      });
      $(".view-display-id-document_demos .video-icon-tit").click(function() {
        if ($(this).next().find('.pdf-popup')) {
          $(this).next().find('a').trigger('click');
        }
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

      // Triggers statistics call.
      function triggerStatistics(basepath, nid, title) {
        // Updates content clicked/viewed statistics.
        var ajaxStatisticsURL = basepath + 'update-statistics';
        $.ajax({
          url: ajaxStatisticsURL,
          type: 'post',
          data: {nodeID: nid, nodeTitle: title},
          success: function (response) {
            // Success message here.
          }
        });
      }

      // Custom function to retreive params from requeted url.
      function getParameterByName(name, url) {
        if (!url) url = window.location.href;
        name = name.replace(/[\[\]]/g, "\\$&");
        var regex = new RegExp("[?&]" + name + "(=([^&#]*)|&|#|$)");
        results = regex.exec(url);
        if (!results) return null;
        if (!results[2]) return '';
        return decodeURIComponent(results[2].replace(/\+/g, " "));
      }
    }
  };
})(jQuery);
