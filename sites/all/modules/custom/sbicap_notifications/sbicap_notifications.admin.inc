<?php

/**
 * @file
 * Configure Notification Settings.
 */
function sbicap_notifications_admin_form() {
  $form = array();
  $form['notification'] = array(
    '#type' => 'fieldset',
    '#title' => check_plain('Settings'),
  );
  // Global time to reopen the notification items If cookie crosses this time.
  $form['notification']['global_time'] = array(
    '#title' => t('Enter Global Time.'),
    '#type' => 'textfield',
    '#default_value' => variable_get('global_time', 15),
    '#description' => t("Enter in minutes. E.g. 1 or 15."),
  );
  // To make use of notification block starts opening after this time passes.
  $form['notification']['items_open_time'] = array(
    '#title' => t('Enter Open Time.'),
    '#type' => 'textfield',
    '#default_value' => variable_get('items_open_time', 4500),
    '#description' => t("Enter in milliseconds. E.g. 1000 or 4500."),
  );
  // Time to stay each notification item.
  $form['notification']['item_stay_time'] = array(
    '#title' => t('Enter Item Stay Time.'),
    '#type' => 'textfield',
    '#default_value' => variable_get('item_stay_time', 4500),
    '#description' => t("Enter in milliseconds. E.g. 1000 or 4500."),
  );
  // Time for item speed either open/close.
  $form['notification']['item_speed'] = array(
    '#title' => t('Enter Item Speed.'),
    '#type' => 'textfield',
    '#default_value' => variable_get('item_speed', 100),
    '#description' => t("Enter in milliseconds. E.g. 100 or 2000."),
  );
  return system_settings_form($form);
}
