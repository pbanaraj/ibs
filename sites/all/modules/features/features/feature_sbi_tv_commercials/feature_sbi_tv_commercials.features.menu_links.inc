<?php
/**
 * @file
 * feature_sbi_tv_commercials.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_sbi_tv_commercials_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_tv-commercials:node/524.
  $menu_links['main-menu_tv-commercials:node/524'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/524',
    'router_path' => 'node/%',
    'link_title' => 'TV Commercials',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_tv-commercials:node/524',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_why-sbi-smart:node/121',
  );
  // Exported menu link: navigation_tv-commercials:node/add/tv-commercials.
  $menu_links['navigation_tv-commercials:node/add/tv-commercials'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/tv-commercials',
    'router_path' => 'node/add/tv-commercials',
    'link_title' => 'TV Commercials',
    'options' => array(
      'attributes' => array(
        'title' => 'TV Commercials for Why SBISMART.',
      ),
      'identifier' => 'navigation_tv-commercials:node/add/tv-commercials',
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
  t('TV Commercials');

  return $menu_links;
}
