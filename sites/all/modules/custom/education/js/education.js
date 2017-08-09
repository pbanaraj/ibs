(function ($,Drupal) {
Drupal.behaviors.education = {
  attach: function (context, settings) {
    window.gsclid = 0;
    /* This event triggers when you click on the category terms listed in a particular content page */
    $(document).find('.sub-listing').unbind('click').one('click',function(e) {
       var sclid = $(this).attr('id').split('_')[1];
        window.gsclid = sclid;
        $('.sub-listing').removeClass('active');
        $(this).addClass('active');
        ajaxcall(Drupal.settings.basePath + 'views/ajax',sclid,'education_content_title_block','eduquicktab');
    })
     /* This event triggers when you click on the content title listed in a particular content page */
    $(document).find('.lft-inner > ul > li').unbind('click').one('click',function(){
        var nid = $(this).children('span').attr('id');
        $('.lft-inner > ul > li').removeClass('active');
        $(this).addClass('active');
        ajaxcall(Drupal.settings.basePath + 'views/ajax',nid,'education_content_body_block','eduquickbody')
    });
     /*on page load with event is triggered to load first category results*/
    $('.edu-list li:first').once('click', function() {
        $(this).trigger('click');
    });
    
    /*
    * function performs ajax calls and prints the view response.
    */
    function ajaxcall(ajaxurl,sclid,display_id,wrapperid) {
      $('#'+wrapperid).html('<div id="global-throbber" class="globalThrobber"><img src="'+Drupal.settings.basePath+'misc/throbber-active.gif"/></div>');
      $.ajax({
        url: ajaxurl,
        type: 'post',
        data: {
          view_name: 'learning_room_content',
          view_display_id: display_id, //your display id
          view_args: sclid, // your views arguments
        },
        dataType: 'json',
        success: function (response) {
          if (response[1] !== undefined) {
            $('#'+wrapperid).html(response[1].data); // do something with the view
            Drupal.attachBehaviors();
            if(display_id == "education_content_title_block") {
              if( $('.lft-inner > ul > li:first').length == 0) {
                $('#eduquickbody').html("No Records Found!");
              } else {
                $('.lft-inner > ul > li:first').once('click', function() {
                  $(this).trigger('click');
                });
              }
            }
          }
        }
      });
    }
  }
};
})(jQuery,Drupal)