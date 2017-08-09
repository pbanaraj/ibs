(function ($) {

  Drupal.behaviors.content_search = {
    attach: function (context, settings) {

      $("[id^='edit-content-search']").focus(
        function(){
          $(this).val('');
      });

      $("[id^='edit-content-search']", context).unbind('autocompleteSelect').bind('autocompleteSelect', function(event, node) {
        var key = $(node).data('autocompleteValue');
        var label = $(node).text();
        
        // If matches found.
        if (key != '0') {
          // Set the value of this field.
          $(this).val(label);
          var loc = window.location.href;
          //loc = loc.lastIndexOf('/') == (loc.length -1) ? loc.substr(0,loc.length-1) : loc.substr(0,loc.lastIndexOf('/'));
          var targetValue = loc.substr(loc.lastIndexOf('/') + 1);
          if (targetValue != "tools-calculators" && targetValue != "demo" && targetValue != "download") {
            var url  = Drupal.settings.basePath + 'modal_display/node/nojs/'+key;
            var link = $("<a></a>").attr('href', url).addClass('use-ajax ctools-modal-ctools-custom-style ctools-use-modal-processed').click(Drupal.CTools.Modal.clickAjaxLink);
            Drupal.ajax[url] = new Drupal.ajax(url, link.get(0), {
              url: url,
              event: 'click',
              progress: { type: 'throbber' }
            });
            link.click();
            // Clears Search field immedeately when popup opens.
            $("[id^='edit-content-search']").val('');
          }
          else {
            // Triggers tool/demo items to open respective content.
            if (targetValue == 'download') {
              var hrefAttr = $("#" + key).find('a').attr('href');
              var fileTitle = $("#" + key).find('a').attr('title')
              window.open(hrefAttr, fileTitle, settings.extlink.extPDFPopup);
            }
            else {
              $("#" + key).trigger('click');
              // Clears Search field immedeately when item triggers.
              $("[id^='edit-content-search']").val('');
            }
            // Pops up PDF file when we have PDF title from search box.
            if ($("." + key).parent().next().find('.pdf-popup')) {
              $("." + key).parent().next().find('a').trigger('click');
            }
          }
        }
        else {
          // If no matches, reset.
          $(this).val('');
          $(this).focus();
        }
      });

      // Play home page video popup
      $(".video_popup").click(function(event){
    	  event.preventDefault();
          var key = $(this).attr('href');
          var url  = Drupal.settings.basePath + 'modal_display/node/nojs/'+key;
          
          var link = $("<a></a>").attr('href', url).addClass('use-ajax ctools-modal-ctools-custom-style ctools-use-modal-processed').click(Drupal.CTools.Modal.clickAjaxLink);
          Drupal.ajax[url] = new Drupal.ajax(url, link.get(0), {
            url: url,
            event: 'click',
            selector: '#' + key,
            progress: { type: 'throbber' }
          });
          link.click();
          
      });	

    }
  };

})(jQuery);