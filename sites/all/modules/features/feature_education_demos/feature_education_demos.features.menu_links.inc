<?php
/**
 * @file
 * feature_education_demos.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_education_demos_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_demo:node/add/demo.
  $menu_links['navigation_demo:node/add/demo'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/demo',
    'router_path' => 'node/add/demo',
    'link_title' => 'Demo',
    'options' => array(
      'attributes' => array(
        'title' => 'Demo page content',
      ),
      'identifier' => 'navigation_demo:node/add/demo',
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
  t('Demo');

  return $menu_links;
}
