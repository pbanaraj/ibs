<?php
/**
 * @file
 * phase_2_db.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function phase_2_db_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}
