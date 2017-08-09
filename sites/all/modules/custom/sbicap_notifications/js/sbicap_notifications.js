(function($) {
	Drupal.behaviors.sbicap_notifications = {
		attach: function (context, settings) {
			$('.notification-section', context).once('sbicap_notifications', function () {
				var go = false;
				function timer() {
					if(!go)
						return;
					
					var elementName = window.location.href;//current page url
					var infoJson = {};
					var curTime = $.now();			
					infoJson  = {"url":window.location.href,"start":0,"endNotification":true,"time":curTime};//default value
					//check if localStorage has any data for this page
					if(localStorage && localStorage.getItem(elementName)){			
						notification_info = localGet(elementName);			
					}else{			
						localStore(elementName,infoJson);
					}
					
					var notificationSettings 	= Drupal.settings.sbicap_notifications;
					var notificationDuration 	= parseInt(notificationSettings.global_time);
					var itemSpeed 				= parseInt(notificationSettings.item_speed);
					var itemStayTime 			= parseInt(notificationSettings.item_stay_time);
					var itemsOpenTime 			= parseInt(notificationSettings.items_open_time);	
					if(checkNotificationLimitEnds(elementName,notificationDuration)){
						notification_info = localGet(elementName);
						$.ajax({
						method: "POST",
						dataType: "json",
						url: "/sbicap_notifications/sbicap_notifications_node",
						data: { page: notification_info.url,start: notification_info.start}
						})
						.done(function( res ) {	console.log(res);			
							if(res.msg == 'success'){											
								$(".notify-main-tit").html(res.title);
								$(".notify-main-body").html(res.body);
								var timestamp = $.now();
								$(".notification-section .sbicap-notification").removeClass('notification-hidden');						
								$(".notification-section").slideDown(itemSpeed).delay(itemStayTime).slideUp(itemSpeed);//display the popup																					
								notification_info.start = notification_info.start+1;//increment the counter
								notification_info.time = $.now();//update the current time
								notification_info.endNotification = true;
								localStore(elementName,notification_info);//update the localeStorage object
							}else{
								
								notification_info.endNotification = false;//no notifications found
								localStore(elementName,notification_info);//update the localStorage object
								$(".notification-section .sbicap-notification").addClass('notification-hidden');
								notification_info.time = $.now();				
								go = false;
							}						
						});
					}
					setTimeout(timer, 10000);
				}
				//This function checks the notification duration limit of the page
				function checkNotificationLimitEnds(elementName,notificationDuration){
					var data = localGet(elementName);
					var milisec_diff = curTime - data.time;
					var date_diff = new Date( milisec_diff );
					var curTime = $.now();
					
					if(data.endNotification === false){
						//one series is already completed
						if(notificationDuration >= date_diff.getMinutes()){
							//clear local storage and start the notification again
							localStorage.removeItem(elementName);
							var infoJson  = {"url":window.location.href,"start":0,"endNotification":true,"time":curTime};
							localStore(elementName,infoJson);
							return true;
						}else{
							go = false;
							return false;
						}
					}else {					
						return true;
					}
				}			
				function stopTimer(){
					go = false;  
				} 
				function startTimer(){
					go = true;
					timer();
				}
				function localStore(key, obj) {
					return window.localStorage.setItem(key, JSON.stringify(obj));
				}
				function localGet(key) {
					return JSON.parse(window.localStorage.getItem(key));
				}
				window.addEventListener('focus',startTimer);    
				window.addEventListener('blur',stopTimer);
				// Hides notification item when close button clickcs.
				  $(".notify-close").click(function() {
					$(this).parent().hide();
				  });
		});
		}
		
	};
})(jQuery);