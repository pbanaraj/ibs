<?php
/**
 * @file
 * feature_sbi_branches.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_sbi_branches_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_branches:node/add/branches.
  $menu_links['navigation_branches:node/add/branches'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/branches',
    'router_path' => 'node/add/branches',
    'link_title' => 'Branches',
    'options' => array(
      'identifier' => 'navigation_branches:node/add/branches',
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
  t('Branches');

  return $menu_links;
}
