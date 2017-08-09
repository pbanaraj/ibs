<?php

/**
 * @file
 * Content search configuration.
 */
function content_search_filters_admin() {
  // Brings all vocabularies which are available in the system.
  $vocabularies = taxonomy_get_vocabularies();
  if (count($vocabularies)) {
    // Generates the form.
    $form = _content_search_filters_admin_form($vocabularies);
    return system_settings_form($form);
  }
}

function _content_search_filters_admin_form($vocabularies, $delta = '') {
  if ($delta != '') {
    $delta = 'blocks_' . $delta . '_';
  }
  $form = array();
  $form['filters']['vocabularies'] = array(
    '#type' => 'fieldset',
    '#title' => check_plain('Vocabularies'),
  );
  foreach ($vocabularies as $voc) {
    $vid = $voc->vid;
    $machine_name = $voc->machine_name;
    if ($machine_name == "inner_search_master") {
      $form['filters']['vocabularies'][$voc->name] = array(
        '#type'         => 'fieldset',
        '#title'        => check_plain($voc->name),
        '#collapsible'  => TRUE,
        '#collapsed'    => FALSE,
      );
      // Retrieves terms.
      $terms = taxonomy_get_tree($vid, $parent = 0, $max_depth = NULL, $load_entities = FALSE);
      $term_options = array();
      foreach ($terms as $term) {
        $term_options[$term->tid] = $term->name;
      }

      $form['filters']['vocabularies'][$voc->name]['content_search_' . $machine_name . '_selector'] = array(
        '#type' => 'checkboxes',
        '#title' => t('Choose terms to filter search'),
        '#options' => $term_options,
        '#default_value' => variable_get('content_search_' . $machine_name . '_selector', 'disabled'),
      );
    }
  }
  return $form;
}
