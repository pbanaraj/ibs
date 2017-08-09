<?php

/**
 * Render the latest maps for all the menus.
 *
 * @return string
 *   Returns HTML string of site map for menus.
 */
function CUSTOM_site_map_menus() {
  $output = '';
  $options = array();

  // Get the list of menus we'll be displaying.
  $mids = array_filter(variable_get('site_map_show_menus', array()));

  // Allow other modules to alter it.
  drupal_alter('site_map_menu_list', $mids);

  // Iterate through each menu to render it.
  if (!empty($mids)) {
    foreach ($mids as $mid) {
      $class = array();
      $menu = menu_load($mid);
      // Use menu_tree_all_data to retrieve the expanded tree.
      $tree = menu_tree_all_data($mid);
      if (module_exists('i18n_menu')) {
        $tree = i18n_menu_localize_tree($tree, $GLOBALS['language']->language);
      }

      // Add an alter hook so that other modules can manipulate the
      // menu tree prior to rendering.
      $alter_mid = preg_replace('/[^a-z0-9_]+/', '_', $mid);
      drupal_alter(array('site_map_menu_tree', 'site_map_menu_tree_' . $alter_mid), $tree, $menu);

      $menu_display = _site_map_menu_tree_output($tree);
      $menu_html = drupal_render($menu_display);
      if (!empty($menu_html)) {
        $title = t($menu['title']);
        if (module_exists('i18n_string')) {
          $m_array = array('menu', 'menu', $menu['menu_name'], 'title');
          $title = i18n_string_plain($m_array, $title);
        }
        _site_map_set_option($options, 'site_map_show_titles', 1, 1, 'show_titles', TRUE);

        $class[] = 'col-lg-4 col-md-4 col-sm-4 col-xs-12 site-map-box-menu';
        $class[] = 'site-map-box-menu-' . $mid;
        $attributes = array('class' => $class);
        $output .= theme('site_map_box', array(
          'title' => $title,
          'content' => $menu_html,
          'attributes' => $attributes,
          'options' => $options,
        ));
      }
    }
  }

  return $output;
}