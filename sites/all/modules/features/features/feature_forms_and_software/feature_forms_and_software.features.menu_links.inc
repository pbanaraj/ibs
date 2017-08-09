<?php
/**
 * @file
 * feature_forms_and_software.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_forms_and_software_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_forms-and-software:node/add/forms-and-software.
  $menu_links['navigation_forms-and-software:node/add/forms-and-software'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/forms-and-software',
    'router_path' => 'node/add/forms-and-software',
    'link_title' => 'Forms and Software',
    'options' => array(
      'attributes' => array(
        'title' => 'Content type Contains the forms (PDF File/Software)',
      ),
      'identifier' => 'navigation_forms-and-software:node/add/forms-and-software',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Forms and Software');

  return $menu_links;
}
