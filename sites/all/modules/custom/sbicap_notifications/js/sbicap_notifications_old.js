(function($) {
  Drupal.behaviors.sbicap_notifications = {
    attach: function (context, settings) {
      var notificationSettings = Drupal.settings.sbicap_notifications;
      var globalTime = parseInt(notificationSettings.global_time);
      var itemSpeed = parseInt(notificationSettings.item_speed);
      var itemStayTime = parseInt(notificationSettings.item_stay_time);
      var itemsOpenTime = parseInt(notificationSettings.items_open_time);

      var elementsLength = $(".notification-section .visibility-hidden").length;
      var intervalTime = 0;
      if (elementsLength > 0) {
        // Calls function to open notification items.
        triggerNotificationTimeInterval(elementsLength, itemsOpenTime);
      }
      else {
        var notification = JSON.parse($.cookie('notificationItems'));
        var itemsEndTime = parseInt(notification.itemsEndTime);

        if (itemsEndTime != 0) {
          // Finds time difference.
          var timeDiff = new Date($.now() - itemsEndTime);
          // Get minutes.
          var minutes = timeDiff/1000/60;
          // If itemsEndTime crosses/matches the minutes time, enters loop.
          if (minutes >= globalTime) {
            console.log("Time diff in min: " + minutes);
            // Loop through each hidden item.
            $(".notification-section .notification-hidden").each(function() {
              // Re-assigning the visibility-hidden class to open notifications again.
              $(this).removeClass("notification-hidden").addClass('visibility-hidden');
            });

            var elementsLength = $(".notification-section .visibility-hidden").length;
            // Calls function to open notification items.
            triggerNotificationTimeInterval(elementsLength, itemsOpenTime);
          }
        }
        console.log("Items End Time: " + notification.itemsEndTime);
        // console.log(JSON.stringify(notification));
      }

      // Triggers notification items based on interval.
      function triggerNotificationTimeInterval(elementsLength, itemsOpenTime) {
        // Sets interval to open notification items.
        var timer = setInterval(function () {
          showNotifications(elementsLength, itemsOpenTime);
        }, itemsOpenTime * elementsLength);
      }

      function showNotifications(elementsLength, itemsOpenTime) {
        // Parse notificationItems cookie to read JSON object.
        var notification = JSON.parse($.cookie('notificationItems'));
        if (elementsLength > 0) {
          // Collects notification items.
          var items = $(".notification-section .visibility-hidden");
          var updatedNotificationCookie = {};
          updatedNotificationCookie['notificationItems'] = [];
          updatedNotificationCookie['itemsEndTime'] = 0;
          $.each(items, function(index) {
            // Collecting individual items.
            var item = $(this);
            // Splits class to capture notificationID.
            var noteClass = $(this).attr('class').split(' ');
            var notificationDetails = noteClass[1].split('-');
            // Notification ID.
            var notificationID = parseInt(notificationDetails[1]);
            // Individual item to display.
            setTimeout(function() {
              var timestamp = $.now();
              item.slideUp(itemSpeed).delay(itemStayTime * index).slideDown(itemSpeed);
              item.addClass('notification-hidden').removeClass('visibility-hidden');
              item.delay(itemStayTime).slideUp(itemSpeed);
              // Re-assingin updated items values.
              updatedNotificationCookie.notificationItems[index] = {};
              updatedNotificationCookie.notificationItems[index].nid = notificationID;
              updatedNotificationCookie.notificationItems[index].isVisible = false;
              updatedNotificationCookie.notificationItems[index].slideUpTime = timestamp;
              updatedNotificationCookie.notificationItems[index].slideHiddenTime = timestamp;
              // Pushes latest updated JSON object when the last item triggers.
              if(parseInt(elementsLength)-1 == parseInt(index)) {
                intervalTime = $.now();
                updatedNotificationCookie['itemsEndTime'] = intervalTime;
              }
              // Updates notificationItems cookie.
              $.cookie('notificationItems', JSON.stringify(updatedNotificationCookie));
            }, itemsOpenTime * index);
          });
        }
      }
      // Hides notification item when close button clickcs.
      $(".notify-close").click(function() {
        $(this).parent().hide();
      });
    }
  };
})(jQuery);
