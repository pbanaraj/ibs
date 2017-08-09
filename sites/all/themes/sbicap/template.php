<?php
/**
 * @file
 * The primary PHP file for the Drupal Bootstrap base theme.
 *
 * This file should only contain light helper functions and point to stubs in
 * other files containing more complex functions.
 *
 * The stubs should point to files within the `./includes` folder named after
 * the function itself minus the theme prefix. If the stub contains a group of
 * functions, then please organize them so they are related in some way and name
 * the file appropriately to at least hint at what it contains.
 *
 * All [pre]process functions, theme functions and template files lives inside
 * the `./templates` folder. This is a highly automated and complex system
 * designed to only load the necessary files when a given theme hook is invoked.
 *
 * Visit this project's official documentation site, http://drupal-bootstrap.org
 * or the markdown files inside the `./docs` folder.
 *
 * @see _bootstrap_theme()
 */

/**
 * Include common functions used through out theme.
 */
//include_once dirname(__FILE__) . '/includes/common.inc';


/**
 * Implements theme_menu_tree().
 */

function sbicap_menu_tree($variables) {
  $menu = $variables['theme_hook_original'];
  switch ($menu) {
    case 'menu_tree__menu_topnav':
      return '<ul class="topnav">' . $variables['tree'] . '</ul>';
      break;
    case 'menu_tree__menu_about_us':
      return '<ul>' . $variables['tree'] . '</ul>';
      break;
    case 'menu_tree__menu_careers':
      return '<ul>' . $variables['tree'] . '</ul>';
      break;
    case 'menu_tree__menu_education':
      return '<ul>' . $variables['tree'] . '</ul>';
      break;
    case 'menu_tree__menu_home':
      return '<ul>' . $variables['tree'] . '</ul>';
      break;
    case 'menu_tree__menu_markest':
      return '<ul>' . $variables['tree'] . '</ul>';
      break;
    case 'menu_tree__menu_why_sbi_mart':
      return '<ul>' . $variables['tree'] . '</ul>';
      break;
    case 'menu_tree__menu_footer_bottom_menu':
      return '<ul class="bottomNav">' . $variables['tree'] . '</ul>';
      break;
    default:
      return '<ul class="menu nav">' . $variables['tree'] . '</ul>';
  }
}

function sbicap_tree_links($variables) {
  global $language;

  $links = $variables['links'];
  $attributes = $variables['attributes'] + array('class' => 'links');
  $exclude_mlids = $variables['exclude_mlids'];
  $depth = isset($variables['depth']) ? $variables['depth'] : 1;

  $output = '';

  foreach (array_keys($links) as $key) {
    if (in_array(str_replace('menu-', '', $key), $exclude_mlids)) {
      unset($links[$key]);
    }
  }

  $num_links = count($links);

  if ($num_links > 0) {
    $leaf_count = 0;
    $branch_count = 0;

    $i = 1;

    foreach ($links as $key => $link) {

      $class = array($key);

      // Add superfish-style classes
      $cls = ($depth == 1) ? 'col-sm-2 col-xs-12 ' : '';
      $class[] = $cls. ' depth-' . $depth;
      if (isset($link['children']) && is_array($link['children'])) {
        $class[] = 'total-children-' . count($link['children']);

        // The following is a bit of a hack, but the only way to make it non-
        // hacky would seem to involve removing all recursion in this function
        $child_leaf_count = 0;
        $child_branch_count = 0;
        foreach ($link['children'] as $child) {
          if (isset($child['children']) && is_array($child['children'])) {
            $child_branch_count++;
          }
          else {
            $child_leaf_count++;
          }
        }
        $class[] = 'parent-children-' . $child_branch_count;
        $class[] = 'single-children-' . $child_leaf_count;
      }
      else {
        $class[] = 'fs-no-children';
      }

      // Add first, last and active classes to the list of
      // links to help out themers.
      if ($i == 1) {
        $class[] = ' first';
      }
      if ($i == $num_links) {
        $class[] = ' last';
      }
      if (isset($link['href']) && ($link['href'] == $_GET['q'] || ($link['href'] == '<front>' && drupal_is_front_page()))
          && (empty($link['language']) || $link['language']->language == $language->language)) {
            $class[] = ' active';
          }
          $output .= '<li' . drupal_attributes(array('class' => $class)) . '>';

          if (isset($link['href'])) {
            // Pass in $link as $options, they share the same keys.
            $output .= l($link['title'], $link['href'], $link);
          }
          elseif (!empty($link['title'])) {
            // Some links are actually not links, but we wrap
            // these in <span> for adding title and class attributes
            if (empty($link['html'])) {
              $link['title'] = check_plain($link['title']);
            }
            $span_attributes = '';
            if (isset($link['attributes'])) {
              $span_attributes = drupal_attributes($link['attributes']);
            }
            $output .= '<span' . $span_attributes . '>' . $link['title'] . '</span>';
          }

          if (isset($link['children']) && is_array($link['children'])) {
            $output .= theme('tree_links', array(
                'links' => $link['children'],
                'attributes' => $attributes,
                'exclude_mlids' => $exclude_mlids,
            ));
          }

          $i++;
          $output .= "</li>\n";
    }

    // add superfish-style classes
    $attributes['class'] .= ' total-items-' . $num_links;
    $attributes['class'] .= ' parent-items-' . $branch_count;
    $attributes['class'] .= ' single-items-' . $leaf_count;

    // wrap the list items in a ul
    $output = '<ul' . drupal_attributes($attributes) . '>' . $output . '</ul>';
  }

  return $output;
}

/**
 * Preprocesses the variables for site-map.tpl.php.
 *
 * @see site-map.tpl.php
 */
function sbicap_preprocess_site_map(&$variables) {

  $message = variable_get('site_map_message', array());
  if (!empty($message)) {
    $variables['message'] = check_markup($message['value'], $message['format']);
  }

  if ((variable_get('site_map_show_rss_links', 1) != 0) && module_exists('commentrss') && variable_get('commentrss_site', COMMENTRSS_SITE_FRONT_PAGE)) {
    $variables['rss_legend'] = theme('site_map_rss_legend');
  }

  if (variable_get('site_map_show_front', 1)) {
    $variables['front_page'] = _site_map_front_page();
  }

  if (variable_get('site_map_show_titles', 1)) {
    $variables['show_titles'] = TRUE;
  }

  if (variable_get('site_map_show_blogs', 1)) {
    $variables['blogs'] = _site_map_blogs();
  }

  // Compile the books trees.
  $variables['books'] = _site_map_books();

  // Compile the menu trees.
  $variables['menus'] = CUSTOM_site_map_menus();

  if (variable_get('site_map_show_faq', 0)) {
    $variables['faq'] = _site_map_faq();
  }

  // Compile the vocabulary trees.
  $variables['taxonomys'] = _site_map_taxonomys();

  // Invoke all custom modules and integrate themed HTML into the site map.
  $additional = module_invoke_all('site_map');
  foreach ($additional as $themed_site_map_code) {
    $variables['additional'] .= $themed_site_map_code;
  }
}

/**
 * Theme function to output tablinks for classic Quicktabs style tabs.
 *
 * @ingroup themeable
 */
function sbicap_qt_quicktabs_tabset($vars) {
  $variables = array(
    'attributes' => array(
      'class' => 'quicktabs-tabs nav nav-tabs',
    ),
    'items' => array(),
  );
  foreach (element_children($vars['tabset']['tablinks']) as $key) {
    $item = array();
    if (is_array($vars['tabset']['tablinks'][$key])) {
      $tab = $vars['tabset']['tablinks'][$key];
      if ($key == $vars['tabset']['#options']['active']) {
        $item['class'] = array('active');
      }
      $item['data'] = drupal_render($tab);
      $variables['items'][] = $item;
    }
  }
  return theme('item_list', $variables);
}

function sbicap_preprocess_html(&$vars) {
  $path = drupal_get_path_alias();
  $aliases = explode('/', $path);
  //$_SESSION['wrapper'] = 'Wrapper-'.end($aliases);
  variable_set('wrapper', 'Wrapper-'.end($aliases));
  /*foreach($aliases as $alias) {
    $vars['classes_array'][] = drupal_clean_css_identifier($alias);
  }//echo '<pre>'; print_r($vars['classes_array']);exit;*/
  
}

function sbicap_preprocess_page(&$variables) {
  $path = drupal_get_path_alias();
  if ($path == 'customer-service') {    
    $variables['theme_hook_suggestions'][] = 'page__customerservice';
  } else if ($path == 'why-sbismart') {
    $variables['theme_hook_suggestions'][] = 'page__whysbismart';
  }
  else if (strpos($path, "education") !== false) {
    // Fibonacci Downtrend Calculator JS.
    drupal_add_js(drupal_get_path('module', 'sbicap_tools'). '/js/FibonacciCalculatorDowntrend.js');
    // My Networth JS.
    drupal_add_js(drupal_get_path('module', 'sbicap_tools'). '/js/MyNetworth.js');
    // Fibonacci Uptrend Calculator JS.
    drupal_add_js(drupal_get_path('module', 'sbicap_tools'). '/js/FibonacciCalculatorUptrend.js');
    // Inflation Calculator JS.
    drupal_add_js(drupal_get_path('module', 'sbicap_tools'). '/js/InflactionCalculator.js');
    
  }
  
}

/**
 * Implements hook_breadcrumb().
 * @param Object $variables
 */
function sbicap_breadcrumb($variables) {
  // Removes duplicate breadcrumb.
  $breadcrumb = array_unique($variables['breadcrumb']);

  if (!empty($breadcrumb)) {
    // Provide a navigational heading to give context for breadcrumb links to
    $output = '<div class="breadcrumb">' . implode('&nbsp;&nbsp;>&nbsp;&nbsp;', $breadcrumb) . '</div>';
    return $output;
  }
}

/** 
 * Implements hook_js_alter().
 */
function sbicap_js_alter(&$javascript) {
  global $user;
  if(in_array("Editor", $user->roles) && (isset($javascript['sites/all/modules/contrib/jquery_update/replace/jquery/1.8/jquery.js']))){
    $javascript['settings']['data'][4]['ajaxPageState']['jquery_version'] = '1.10';

    //assuming we are using the minified version 1.10
    $jquery_path = 'sites/all/modules/contrib/jquery_update/replace/jquery/1.10/jquery.js';

    //We duplicate the important information from the Drupal one
    $javascript[$jquery_path] = $javascript['sites/all/modules/contrib/jquery_update/replace/jquery/1.8/jquery.js'];
    //..and we update the information that we care about
    $javascript[$jquery_path]['version'] = '1.10';
    $javascript[$jquery_path]['data'] = $jquery_path;

    //Then we remove the Drupal core version
    unset($javascript['sites/all/modules/contrib/jquery_update/replace/jquery/1.8/jquery.js']);
  }

   if (drupal_is_front_page()) {
  	unset($javascript['sites/all/modules/custom/download/js/download.js']);
  	unset($javascript['sites/all/modules/custom/education/js/education.js']);
  	unset($javascript['sites/all/modules/custom/market/market.js']);
  	unset($javascript['sites/all/modules/custom/people/js/people.js']);
  	unset($javascript['sites/all/modules/custom/custom/global.js']);
  	unset($javascript['misc/autocomplete.js']);
  	unset($javascript['sites/all/themes/bootstrap/js/misc/autocomplete.js']);
  }
}

/**
 * Implements hook_css_alter().
 */
function sbicap_css_alter(&$css) {
	if (drupal_is_front_page()) {
		unset($css['sites/all/themes/sbicap/common/css/style.css']);
	}
}

/**
 * Implements hook_theme().
 */
function sbicap_theme() {
  return array( 'custom_call_back_form' => array(
      'render element' => 'form',
      'path' => drupal_get_path('theme', 'sbicap') . '/templates',
      'template' => 'call-back-form',
    ),
  );
}

function sbicap_preprocess_custom_call_back_form(&$variables) {
  $form = $variables['form'];

  // Create variables for individual elements.
  $variables['category'] = render($form['category']);
  $variables['subcategory'] = render($form['subcategory']);
  $variables['client_code'] = render($form['client_code']);
  $variables['registered_mobile_no'] = render($form['registered_mobile_no']);
  $variables['submit'] = render($form['submit']);
  $variables['reset'] = render($form['reset']);

  //$variables['submit'] = render($form['actions']);

  // Be sure to print the remaining rendered form items.
  $variables['children'] = drupal_render_children($form);
}

/**
 * Returns HTML for a textfield form element.
 *
 * @param array $variables
 *   An associative array containing:
 *   - element: An associative array containing the properties of the element.
 *     Properties used: #title, #value, #description, #size, #maxlength,
 *     #required, #attributes, #autocomplete_path.
 *
 * @return string
 *   The constructed HTML.
 *
 * @see theme_textfield()
 *
 * @ingroup theme_functions
 */
function sbicap_textfield($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'text';
  element_set_attributes($element, array(
    'id',
    'name',
    'value',
    'size',
    'maxlength',
  ));
  _form_set_class($element, array('form-text'));

  $output = '<input' . drupal_attributes($element['#attributes']) . ' />';

  $extra = '';
  if ($element['#autocomplete_path'] && !empty($element['#autocomplete_input'])) {
    drupal_add_library('system', 'drupal.autocomplete');
    $element['#attributes']['class'][] = 'form-autocomplete';

    $attributes = array();
    $attributes['type'] = 'hidden';
    $attributes['id'] = $element['#autocomplete_input']['#id'];
    $attributes['value'] = $element['#autocomplete_input']['#url_value'];
    $attributes['disabled'] = 'disabled';
    $attributes['class'][] = 'autocomplete';
    // If we enable this condition, bootstrap refresh icon will display in autocomplete textfield.
    // Uses icon for autocomplete "throbber".
    /*if ($icon = _bootstrap_icon('refresh')) {
      $output = '<div class="input-group">' . $output . '<span class="input-group-addon">' . $icon . '</span></div>';
    }
    // Fallback to using core's throbber.
    else {*/
      $output = '<div class="input-group">' . $output . '<span class="input-group-addon">';
      // The throbber's background image must be set here because sites may not
      // be at the root of the domain (ie: /) and this value cannot be set via
      // CSS.
      $output .= '<span class="autocomplete-throbber" style="background-image:url(' . url('misc/throbber.gif') . ')"></span>';
      $output .= '</span></div>';
    //}
    $extra = '<input' . drupal_attributes($attributes) . ' />';
  }
  return $output . $extra;
}
