<?php
/**
 * @file
 * phase_2_db.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function phase_2_db_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_customer-service:node/76.
  $menu_links['main-menu_customer-service:node/76'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/76',
    'router_path' => 'node/%',
    'link_title' => 'CUSTOMER SERVICE',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_customer-service:node/76',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_education:node/76.
  $menu_links['main-menu_education:node/76'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/76',
    'router_path' => 'node/%',
    'link_title' => 'Education',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_education:node/76',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:node/76.
  $menu_links['main-menu_home:node/76'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/76',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'style' => 'background: none;text-indent: -5000px;',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'home-logo',
        'style' => 'padding: 0 10px;',
      ),
      'identifier' => 'main-menu_home:node/76',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_markets:node/76.
  $menu_links['main-menu_markets:node/76'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/76',
    'router_path' => 'node/%',
    'link_title' => 'MARKETS',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_markets:node/76',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_products--services:node/76.
  $menu_links['main-menu_products--services:node/76'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/76',
    'router_path' => 'node/%',
    'link_title' => 'PRODUCTS & SERVICES',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_products--services:node/76',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_webinar:node/50.
  $menu_links['main-menu_webinar:node/50'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/50',
    'router_path' => 'node/%',
    'link_title' => 'Webinar',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_webinar:node/50',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_education:node/76',
  );
  // Exported menu link: main-menu_why-sbi-smart:node/76.
  $menu_links['main-menu_why-sbi-smart:node/76'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/76',
    'router_path' => 'node/%',
    'link_title' => 'WHY SBI SMART?',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_why-sbi-smart:node/76',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: management_account-settings:admin/config/people/accounts.
  $menu_links['management_account-settings:admin/config/people/accounts'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/accounts',
    'router_path' => 'admin/config/people/accounts',
    'link_title' => 'Account settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure default behavior of users, including registration requirements, e-mails, fields, and user pictures.',
      ),
      'identifier' => 'management_account-settings:admin/config/people/accounts',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_actions:admin/config/system/actions.
  $menu_links['management_actions:admin/config/system/actions'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/actions',
    'router_path' => 'admin/config/system/actions',
    'link_title' => 'Actions',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage the actions defined for your site.',
      ),
      'identifier' => 'management_actions:admin/config/system/actions',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_administration:admin.
  $menu_links['management_administration:admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(
      'identifier' => 'management_administration:admin',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
  );
  // Exported menu link: management_appearance:admin/appearance.
  $menu_links['management_appearance:admin/appearance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/appearance',
    'router_path' => 'admin/appearance',
    'link_title' => 'Appearance',
    'options' => array(
      'attributes' => array(
        'title' => 'Select and configure your themes.',
      ),
      'identifier' => 'management_appearance:admin/appearance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_autofill-empty-locations:admin/config/services/la.
  $menu_links['management_autofill-empty-locations:admin/config/services/la'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/la',
    'router_path' => 'admin/config/services/la',
    'link_title' => 'Autofill empty locations',
    'options' => array(
      'attributes' => array(
        'title' => 'Find and fill all empty locations with latitude and longtitude data',
      ),
      'identifier' => 'management_autofill-empty-locations:admin/config/services/la',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );
  // Exported menu link: management_available-updates:admin/reports/updates.
  $menu_links['management_available-updates:admin/reports/updates'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/updates',
    'router_path' => 'admin/reports/updates',
    'link_title' => 'Available updates',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about available updates for your installed modules and themes.',
      ),
      'identifier' => 'management_available-updates:admin/reports/updates',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_blocks:admin/structure/block.
  $menu_links['management_blocks:admin/structure/block'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/block',
    'router_path' => 'admin/structure/block',
    'link_title' => 'Blocks',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure what block content appears in your site\'s sidebars and other regions.',
      ),
      'identifier' => 'management_blocks:admin/structure/block',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_call--trade:admin/manage/call-trade.
  $menu_links['management_call--trade:admin/manage/call-trade'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/manage/call-trade',
    'router_path' => 'admin/manage/call-trade',
    'link_title' => 'Call & Trade',
    'options' => array(
      'attributes' => array(
        'title' => 'Call & Trade Page',
      ),
      'identifier' => 'management_call--trade:admin/manage/call-trade',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_captcha:admin/config/people/captcha.
  $menu_links['management_captcha:admin/config/people/captcha'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/captcha',
    'router_path' => 'admin/config/people/captcha',
    'link_title' => 'CAPTCHA',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer how and where CAPTCHAs are used.',
      ),
      'identifier' => 'management_captcha:admin/config/people/captcha',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_ckeditor:admin/config/content/ckeditor.
  $menu_links['management_ckeditor:admin/config/content/ckeditor'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/ckeditor',
    'router_path' => 'admin/config/content/ckeditor',
    'link_title' => 'CKEditor',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the rich text editor.',
      ),
      'identifier' => 'management_ckeditor:admin/config/content/ckeditor',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_clean-urls:admin/config/search/clean-urls.
  $menu_links['management_clean-urls:admin/config/search/clean-urls'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/clean-urls',
    'router_path' => 'admin/config/search/clean-urls',
    'link_title' => 'Clean URLs',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable clean URLs for your site.',
      ),
      'identifier' => 'management_clean-urls:admin/config/search/clean-urls',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_comments:admin/content/comment.
  $menu_links['management_comments:admin/content/comment'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Comments',
    'options' => array(
      'attributes' => array(
        'title' => 'List and edit site comments and the comment approval queue.',
      ),
      'identifier' => 'management_comments:admin/content/comment',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Exported menu link: management_configuration:admin/config.
  $menu_links['management_configuration:admin/config'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config',
    'router_path' => 'admin/config',
    'link_title' => 'Configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer settings.',
      ),
      'identifier' => 'management_configuration:admin/config',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_content-authoring:admin/config/content.
  $menu_links['management_content-authoring:admin/config/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content',
    'router_path' => 'admin/config/content',
    'link_title' => 'Content authoring',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings related to formatting and authoring content.',
      ),
      'identifier' => 'management_content-authoring:admin/config/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_content-types:admin/structure/types.
  $menu_links['management_content-types:admin/structure/types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types',
    'router_path' => 'admin/structure/types',
    'link_title' => 'Content types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage content types, including default status, front page promotion, comment settings, etc.',
      ),
      'identifier' => 'management_content-types:admin/structure/types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_content:admin/content.
  $menu_links['management_content:admin/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer content and comments.',
      ),
      'identifier' => 'management_content:admin/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_cron:admin/config/system/cron.
  $menu_links['management_cron:admin/config/system/cron'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/cron',
    'router_path' => 'admin/config/system/cron',
    'link_title' => 'Cron',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage automatic site maintenance tasks.',
      ),
      'identifier' => 'management_cron:admin/config/system/cron',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_custom-breadcrumbs-settings:admin/config/user-interface/custom-breadcrumbs.
  $menu_links['management_custom-breadcrumbs-settings:admin/config/user-interface/custom-breadcrumbs'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/custom-breadcrumbs',
    'router_path' => 'admin/config/user-interface/custom-breadcrumbs',
    'link_title' => 'Custom breadcrumbs settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage sitewide configuration settings to customize the breadcrumb trail.',
      ),
      'identifier' => 'management_custom-breadcrumbs-settings:admin/config/user-interface/custom-breadcrumbs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_custom-breadcrumbs:admin/structure/custom_breadcrumbs.
  $menu_links['management_custom-breadcrumbs:admin/structure/custom_breadcrumbs'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/custom_breadcrumbs',
    'router_path' => 'admin/structure/custom_breadcrumbs',
    'link_title' => 'Custom breadcrumbs',
    'options' => array(
      'attributes' => array(
        'title' => 'Customize the breadcrumb trail for pages on your site.',
      ),
      'identifier' => 'management_custom-breadcrumbs:admin/structure/custom_breadcrumbs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_dashboard:admin/dashboard.
  $menu_links['management_dashboard:admin/dashboard'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/dashboard',
    'router_path' => 'admin/dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => 'View and customize your dashboard.',
      ),
      'identifier' => 'management_dashboard:admin/dashboard',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_date-and-time:admin/config/regional/date-time.
  $menu_links['management_date-and-time:admin/config/regional/date-time'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/date-time',
    'router_path' => 'admin/config/regional/date-time',
    'link_title' => 'Date and time',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure display formats for date and time.',
      ),
      'identifier' => 'management_date-and-time:admin/config/regional/date-time',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_date-api:admin/config/date.
  $menu_links['management_date-api:admin/config/date'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date',
    'router_path' => 'admin/config/date',
    'link_title' => 'Date API',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for modules the use the Date API.',
      ),
      'identifier' => 'management_date-api:admin/config/date',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_date-popup:admin/config/date/date_popup.
  $menu_links['management_date-popup:admin/config/date/date_popup'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date/date_popup',
    'router_path' => 'admin/config/date/date_popup',
    'link_title' => 'Date Popup',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the Date Popup settings.',
      ),
      'identifier' => 'management_date-popup:admin/config/date/date_popup',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_date-api:admin/config/date',
  );
  // Exported menu link: management_date-tools:admin/config/date/tools.
  $menu_links['management_date-tools:admin/config/date/tools'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date/tools',
    'router_path' => 'admin/config/date/tools',
    'link_title' => 'Date Tools',
    'options' => array(
      'attributes' => array(
        'title' => 'Date Wizard and other tools to manage and create dates and calendars. ',
      ),
      'identifier' => 'management_date-tools:admin/config/date/tools',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_date-api:admin/config/date',
  );
  // Exported menu link: management_development:admin/config/development.
  $menu_links['management_development:admin/config/development'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development',
    'router_path' => 'admin/config/development',
    'link_title' => 'Development',
    'options' => array(
      'attributes' => array(
        'title' => 'Development tools.',
      ),
      'identifier' => 'management_development:admin/config/development',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_features:admin/structure/features.
  $menu_links['management_features:admin/structure/features'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/features',
    'router_path' => 'admin/structure/features',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage features.',
      ),
      'identifier' => 'management_features:admin/structure/features',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_field-dependencies:admin/structure/dependencies.
  $menu_links['management_field-dependencies:admin/structure/dependencies'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/dependencies',
    'router_path' => 'admin/structure/dependencies',
    'link_title' => 'Field dependencies',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer field dependencies for the site.',
      ),
      'identifier' => 'management_field-dependencies:admin/structure/dependencies',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_field-list:admin/reports/fields.
  $menu_links['management_field-list:admin/reports/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/fields',
    'router_path' => 'admin/reports/fields',
    'link_title' => 'Field list',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of fields on all entity types.',
      ),
      'identifier' => 'management_field-list:admin/reports/fields',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_field-validation:admin/structure/field_validation.
  $menu_links['management_field-validation:admin/structure/field_validation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/field_validation',
    'router_path' => 'admin/structure/field_validation',
    'link_title' => 'Field Validation',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer Field Validation rules.',
      ),
      'identifier' => 'management_field-validation:admin/structure/field_validation',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_file-system:admin/config/media/file-system.
  $menu_links['management_file-system:admin/config/media/file-system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/file-system',
    'router_path' => 'admin/config/media/file-system',
    'link_title' => 'File system',
    'options' => array(
      'attributes' => array(
        'title' => 'Tell Drupal where to store uploaded files and how they are accessed.',
      ),
      'identifier' => 'management_file-system:admin/config/media/file-system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_file-types:admin/config/media/file-types.
  $menu_links['management_file-types:admin/config/media/file-types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/file-types',
    'router_path' => 'admin/config/media/file-types',
    'link_title' => 'File types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage files used on your site.',
      ),
      'identifier' => 'management_file-types:admin/config/media/file-types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_footer-menu:admin/structure/menu/manage/menu-footer-bottom-menu.
  $menu_links['management_footer-menu:admin/structure/menu/manage/menu-footer-bottom-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-footer-bottom-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Footer menu',
    'options' => array(
      'identifier' => 'management_footer-menu:admin/structure/menu/manage/menu-footer-bottom-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_get-directions:admin/config/services/getdirections.
  $menu_links['management_get-directions:admin/config/services/getdirections'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/getdirections',
    'router_path' => 'admin/config/services/getdirections',
    'link_title' => 'Get directions',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Get directions',
      ),
      'identifier' => 'management_get-directions:admin/config/services/getdirections',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );
  // Exported menu link: management_gmap-location:admin/config/services/gmap_location.
  $menu_links['management_gmap-location:admin/config/services/gmap_location'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/gmap_location',
    'router_path' => 'admin/config/services/gmap_location',
    'link_title' => 'GMap Location',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure GMap Location settings.',
      ),
      'identifier' => 'management_gmap-location:admin/config/services/gmap_location',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );
  // Exported menu link: management_gmap:admin/config/services/gmap.
  $menu_links['management_gmap:admin/config/services/gmap'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/gmap',
    'router_path' => 'admin/config/services/gmap',
    'link_title' => 'GMap',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure GMap settings',
      ),
      'identifier' => 'management_gmap:admin/config/services/gmap',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );
  // Exported menu link: management_help:admin/help.
  $menu_links['management_help:admin/help'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/help',
    'router_path' => 'admin/help',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => 'Reference for usage, configuration, and modules.',
      ),
      'identifier' => 'management_help:admin/help',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_hierarchical-select:admin/config/content/hierarchical_select.
  $menu_links['management_hierarchical-select:admin/config/content/hierarchical_select'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/hierarchical_select',
    'router_path' => 'admin/config/content/hierarchical_select',
    'link_title' => 'Hierarchical Select',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure site-wide settings for the Hierarchical Select form element.',
      ),
      'identifier' => 'management_hierarchical-select:admin/config/content/hierarchical_select',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_image-styles:admin/config/media/image-styles.
  $menu_links['management_image-styles:admin/config/media/image-styles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-styles',
    'router_path' => 'admin/config/media/image-styles',
    'link_title' => 'Image styles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure styles that can be used for resizing or adjusting images on display.',
      ),
      'identifier' => 'management_image-styles:admin/config/media/image-styles',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_image-toolkit:admin/config/media/image-toolkit.
  $menu_links['management_image-toolkit:admin/config/media/image-toolkit'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-toolkit',
    'router_path' => 'admin/config/media/image-toolkit',
    'link_title' => 'Image toolkit',
    'options' => array(
      'attributes' => array(
        'title' => 'Choose which image toolkit to use if you have installed optional toolkits.',
      ),
      'identifier' => 'management_image-toolkit:admin/config/media/image-toolkit',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_imce:admin/config/media/imce.
  $menu_links['management_imce:admin/config/media/imce'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/imce',
    'router_path' => 'admin/config/media/imce',
    'link_title' => 'IMCE',
    'options' => array(
      'attributes' => array(
        'title' => 'Control how your image/file browser works.',
      ),
      'identifier' => 'management_imce:admin/config/media/imce',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_ip-address-blocking:admin/config/people/ip-blocking.
  $menu_links['management_ip-address-blocking:admin/config/people/ip-blocking'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/ip-blocking',
    'router_path' => 'admin/config/people/ip-blocking',
    'link_title' => 'IP address blocking',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage blocked IP addresses.',
      ),
      'identifier' => 'management_ip-address-blocking:admin/config/people/ip-blocking',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_jquery-update:admin/config/development/jquery_update.
  $menu_links['management_jquery-update:admin/config/development/jquery_update'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/jquery_update',
    'router_path' => 'admin/config/development/jquery_update',
    'link_title' => 'jQuery update',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings related to the jQuery upgrade, the library path and compression.',
      ),
      'identifier' => 'management_jquery-update:admin/config/development/jquery_update',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_location:admin/config/content/location.
  $menu_links['management_location:admin/config/content/location'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/location',
    'router_path' => 'admin/config/content/location',
    'link_title' => 'Location',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for Location module',
      ),
      'identifier' => 'management_location:admin/config/content/location',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_logging-and-errors:admin/config/development/logging.
  $menu_links['management_logging-and-errors:admin/config/development/logging'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/logging',
    'router_path' => 'admin/config/development/logging',
    'link_title' => 'Logging and errors',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for logging and alerts modules. Various modules can route Drupal\'s system events to different destinations, such as syslog, database, email, etc.',
      ),
      'identifier' => 'management_logging-and-errors:admin/config/development/logging',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu.
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_maintenance-mode:admin/config/development/maintenance.
  $menu_links['management_maintenance-mode:admin/config/development/maintenance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/maintenance',
    'router_path' => 'admin/config/development/maintenance',
    'link_title' => 'Maintenance mode',
    'options' => array(
      'attributes' => array(
        'title' => 'Take the site offline for maintenance or bring it back online.',
      ),
      'identifier' => 'management_maintenance-mode:admin/config/development/maintenance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_management:admin/structure/menu/manage/management.
  $menu_links['management_management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(
      'identifier' => 'management_management:admin/structure/menu/manage/management',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_media-browser-settings:admin/config/media/browser.
  $menu_links['management_media-browser-settings:admin/config/media/browser'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/browser',
    'router_path' => 'admin/config/media/browser',
    'link_title' => 'Media browser settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the behavior and display of the media browser.',
      ),
      'identifier' => 'management_media-browser-settings:admin/config/media/browser',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_media:admin/config/media.
  $menu_links['management_media:admin/config/media'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media',
    'router_path' => 'admin/config/media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Media tools.',
      ),
      'identifier' => 'management_media:admin/config/media',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_media:admin/content/media.
  $menu_links['management_media:admin/content/media'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/media',
    'router_path' => 'admin/content/media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage files used on your site.',
      ),
      'identifier' => 'management_media:admin/content/media',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Exported menu link: management_menus:admin/structure/menu.
  $menu_links['management_menus:admin/structure/menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Add new menus to your site, edit existing menus, and rename and reorganize menu links.',
      ),
      'identifier' => 'management_menus:admin/structure/menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_migrate:admin/content/migrate.
  $menu_links['management_migrate:admin/content/migrate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/migrate',
    'router_path' => 'admin/content/migrate',
    'link_title' => 'Migrate',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage importing of data into your Drupal site',
      ),
      'identifier' => 'management_migrate:admin/content/migrate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Exported menu link: management_modules:admin/modules.
  $menu_links['management_modules:admin/modules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/modules',
    'router_path' => 'admin/modules',
    'link_title' => 'Modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Extend site functionality.',
      ),
      'identifier' => 'management_modules:admin/modules',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_navigation:admin/structure/menu/manage/navigation.
  $menu_links['management_navigation:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(
      'identifier' => 'management_navigation:admin/structure/menu/manage/navigation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_on-the-web-settings:admin/config/services/on_the_web.
  $menu_links['management_on-the-web-settings:admin/config/services/on_the_web'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/on_the_web',
    'router_path' => 'admin/config/services/on_the_web',
    'link_title' => 'On The Web Settings',
    'options' => array(
      'identifier' => 'management_on-the-web-settings:admin/config/services/on_the_web',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );
  // Exported menu link: management_people:admin/config/people.
  $menu_links['management_people:admin/config/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people',
    'router_path' => 'admin/config/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure user accounts.',
      ),
      'identifier' => 'management_people:admin/config/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_people:admin/people.
  $menu_links['management_people:admin/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage user accounts, roles, and permissions.',
      ),
      'identifier' => 'management_people:admin/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_performance:admin/config/development/performance.
  $menu_links['management_performance:admin/config/development/performance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/performance',
    'router_path' => 'admin/config/development/performance',
    'link_title' => 'Performance',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable page caching for anonymous users and set CSS and JS bandwidth optimization options.',
      ),
      'identifier' => 'management_performance:admin/config/development/performance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_quicktabs:admin/structure/quicktabs.
  $menu_links['management_quicktabs:admin/structure/quicktabs'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/quicktabs',
    'router_path' => 'admin/structure/quicktabs',
    'link_title' => 'Quicktabs',
    'options' => array(
      'attributes' => array(
        'title' => 'Create blocks of tabbed content.',
      ),
      'identifier' => 'management_quicktabs:admin/structure/quicktabs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_rebuild-type-information-for-media:admin/config/media/rebuild_types.
  $menu_links['management_rebuild-type-information-for-media:admin/config/media/rebuild_types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/rebuild_types',
    'router_path' => 'admin/config/media/rebuild_types',
    'link_title' => 'Rebuild type information for media',
    'options' => array(
      'attributes' => array(
        'title' => 'In case there are files in file_managed w/o a type, this function rebuilds them',
      ),
      'identifier' => 'management_rebuild-type-information-for-media:admin/config/media/rebuild_types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_recent-log-messages:admin/reports/dblog.
  $menu_links['management_recent-log-messages:admin/reports/dblog'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/dblog',
    'router_path' => 'admin/reports/dblog',
    'link_title' => 'Recent log messages',
    'options' => array(
      'attributes' => array(
        'title' => 'View events that have recently been logged.',
      ),
      'identifier' => 'management_recent-log-messages:admin/reports/dblog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_regional-and-language:admin/config/regional.
  $menu_links['management_regional-and-language:admin/config/regional'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional',
    'router_path' => 'admin/config/regional',
    'link_title' => 'Regional and language',
    'options' => array(
      'attributes' => array(
        'title' => 'Regional settings, localization and translation.',
      ),
      'identifier' => 'management_regional-and-language:admin/config/regional',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_regional-settings:admin/config/regional/settings.
  $menu_links['management_regional-settings:admin/config/regional/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/settings',
    'router_path' => 'admin/config/regional/settings',
    'link_title' => 'Regional settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for the site\'s default time zone and country.',
      ),
      'identifier' => 'management_regional-settings:admin/config/regional/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_reports:admin/reports.
  $menu_links['management_reports:admin/reports'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports',
    'router_path' => 'admin/reports',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'View reports, updates, and errors.',
      ),
      'identifier' => 'management_reports:admin/reports',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_rss-publishing:admin/config/services/rss-publishing.
  $menu_links['management_rss-publishing:admin/config/services/rss-publishing'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/rss-publishing',
    'router_path' => 'admin/config/services/rss-publishing',
    'link_title' => 'RSS publishing',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the site description, the number of items per feed and whether feeds should be titles/teasers/full-text.',
      ),
      'identifier' => 'management_rss-publishing:admin/config/services/rss-publishing',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );
  // Exported menu link: management_scheduler:admin/config/content/scheduler.
  $menu_links['management_scheduler:admin/config/content/scheduler'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/scheduler',
    'router_path' => 'admin/config/content/scheduler',
    'link_title' => 'Scheduler',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings for scheduled publishing and unpublishing, run the lightweight cron and check your servers clock time.',
      ),
      'identifier' => 'management_scheduler:admin/config/content/scheduler',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_search-and-metadata:admin/config/search.
  $menu_links['management_search-and-metadata:admin/config/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search',
    'router_path' => 'admin/config/search',
    'link_title' => 'Search and metadata',
    'options' => array(
      'attributes' => array(
        'title' => 'Local site search, metadata and SEO.',
      ),
      'identifier' => 'management_search-and-metadata:admin/config/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_search-settings:admin/config/search/settings.
  $menu_links['management_search-settings:admin/config/search/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/settings',
    'router_path' => 'admin/config/search/settings',
    'link_title' => 'Search settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure relevance settings for search and other indexing options.',
      ),
      'identifier' => 'management_search-settings:admin/config/search/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_shortcuts:admin/config/user-interface/shortcut.
  $menu_links['management_shortcuts:admin/config/user-interface/shortcut'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/shortcut',
    'router_path' => 'admin/config/user-interface/shortcut',
    'link_title' => 'Shortcuts',
    'options' => array(
      'attributes' => array(
        'title' => 'Add and modify shortcut sets.',
      ),
      'identifier' => 'management_shortcuts:admin/config/user-interface/shortcut',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_site-information:admin/config/system/site-information.
  $menu_links['management_site-information:admin/config/system/site-information'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site information',
    'options' => array(
      'attributes' => array(
        'title' => 'Change site name, e-mail address, slogan, default front page, and number of posts per page, error pages.',
      ),
      'identifier' => 'management_site-information:admin/config/system/site-information',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_site-map:admin/config/search/sitemap.
  $menu_links['management_site-map:admin/config/search/sitemap'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/sitemap',
    'router_path' => 'admin/config/search/sitemap',
    'link_title' => 'Site map',
    'options' => array(
      'attributes' => array(
        'title' => 'Control what should be displayed on the site map.',
      ),
      'identifier' => 'management_site-map:admin/config/search/sitemap',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_status-report:admin/reports/status.
  $menu_links['management_status-report:admin/reports/status'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/status',
    'router_path' => 'admin/reports/status',
    'link_title' => 'Status report',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about your site\'s operation and any detected problems.',
      ),
      'identifier' => 'management_status-report:admin/reports/status',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -60,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_structure:admin/structure.
  $menu_links['management_structure:admin/structure'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure',
    'router_path' => 'admin/structure',
    'link_title' => 'Structure',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer blocks, content types, menus, etc.',
      ),
      'identifier' => 'management_structure:admin/structure',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_system:admin/config/system.
  $menu_links['management_system:admin/config/system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system',
    'router_path' => 'admin/config/system',
    'link_title' => 'System',
    'options' => array(
      'attributes' => array(
        'title' => 'General system related configuration.',
      ),
      'identifier' => 'management_system:admin/config/system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_taxonomy:admin/structure/taxonomy.
  $menu_links['management_taxonomy:admin/structure/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Taxonomy',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage tagging, categorization, and classification of your content.',
      ),
      'identifier' => 'management_taxonomy:admin/structure/taxonomy',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_text-formats:admin/config/content/formats.
  $menu_links['management_text-formats:admin/config/content/formats'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/formats',
    'router_path' => 'admin/config/content/formats',
    'link_title' => 'Text formats',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how content input by users is filtered, including allowed HTML tags. Also allows enabling of module-provided filters.',
      ),
      'identifier' => 'management_text-formats:admin/config/content/formats',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_top-access-denied-errors:admin/reports/access-denied.
  $menu_links['management_top-access-denied-errors:admin/reports/access-denied'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/access-denied',
    'router_path' => 'admin/reports/access-denied',
    'link_title' => 'Top \'access denied\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'access denied\' errors (403s).',
      ),
      'identifier' => 'management_top-access-denied-errors:admin/reports/access-denied',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_top-menu:admin/structure/menu/manage/menu-topnav.
  $menu_links['management_top-menu:admin/structure/menu/manage/menu-topnav'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-topnav',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Top menu',
    'options' => array(
      'identifier' => 'management_top-menu:admin/structure/menu/manage/menu-topnav',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_top-page-not-found-errors:admin/reports/page-not-found.
  $menu_links['management_top-page-not-found-errors:admin/reports/page-not-found'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/page-not-found',
    'router_path' => 'admin/reports/page-not-found',
    'link_title' => 'Top \'page not found\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'page not found\' errors (404s).',
      ),
      'identifier' => 'management_top-page-not-found-errors:admin/reports/page-not-found',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_top-search-phrases:admin/reports/search.
  $menu_links['management_top-search-phrases:admin/reports/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/search',
    'router_path' => 'admin/reports/search',
    'link_title' => 'Top search phrases',
    'options' => array(
      'attributes' => array(
        'title' => 'View most popular search phrases.',
      ),
      'identifier' => 'management_top-search-phrases:admin/reports/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_universally-unique-identifiers:admin/config/system/uuid.
  $menu_links['management_universally-unique-identifiers:admin/config/system/uuid'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/uuid',
    'router_path' => 'admin/config/system/uuid',
    'link_title' => 'Universally unique identifiers',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure universally unique identifiers.',
      ),
      'identifier' => 'management_universally-unique-identifiers:admin/config/system/uuid',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_url-aliases:admin/config/search/path.
  $menu_links['management_url-aliases:admin/config/search/path'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/path',
    'router_path' => 'admin/config/search/path',
    'link_title' => 'URL aliases',
    'options' => array(
      'attributes' => array(
        'title' => 'Change your site\'s URL paths by aliasing them.',
      ),
      'identifier' => 'management_url-aliases:admin/config/search/path',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_user-interface:admin/config/user-interface.
  $menu_links['management_user-interface:admin/config/user-interface'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface',
    'router_path' => 'admin/config/user-interface',
    'link_title' => 'User interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools that enhance the user interface.',
      ),
      'identifier' => 'management_user-interface:admin/config/user-interface',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu.
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_views-plugins:admin/reports/views-plugins.
  $menu_links['management_views-plugins:admin/reports/views-plugins'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/views-plugins',
    'router_path' => 'admin/reports/views-plugins',
    'link_title' => 'Views plugins',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of plugins used in all views.',
      ),
      'identifier' => 'management_views-plugins:admin/reports/views-plugins',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_views:admin/structure/views.
  $menu_links['management_views:admin/structure/views'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/views',
    'router_path' => 'admin/structure/views',
    'link_title' => 'Views',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage customized lists of content.',
      ),
      'identifier' => 'management_views:admin/structure/views',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_web-services:admin/config/services.
  $menu_links['management_web-services:admin/config/services'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services',
    'router_path' => 'admin/config/services',
    'link_title' => 'Web services',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools related to web services.',
      ),
      'identifier' => 'management_web-services:admin/config/services',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_webform-settings:admin/config/content/webform.
  $menu_links['management_webform-settings:admin/config/content/webform'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/webform',
    'router_path' => 'admin/config/content/webform',
    'link_title' => 'Webform settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Global configuration of webform functionality.',
      ),
      'identifier' => 'management_webform-settings:admin/config/content/webform',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_workflow:admin/config/workflow.
  $menu_links['management_workflow:admin/config/workflow'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow',
    'router_path' => 'admin/config/workflow',
    'link_title' => 'Workflow',
    'options' => array(
      'attributes' => array(
        'title' => 'Content workflow, editorial workflow tools.',
      ),
      'identifier' => 'management_workflow:admin/config/workflow',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_wysiwyg-profiles:admin/config/content/wysiwyg.
  $menu_links['management_wysiwyg-profiles:admin/config/content/wysiwyg'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/wysiwyg',
    'router_path' => 'admin/config/content/wysiwyg',
    'link_title' => 'Wysiwyg profiles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure client-side editors.',
      ),
      'identifier' => 'management_wysiwyg-profiles:admin/config/content/wysiwyg',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_youtube-settings:admin/config/media/youtube.
  $menu_links['management_youtube-settings:admin/config/media/youtube'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/youtube',
    'router_path' => 'admin/config/media/youtube',
    'link_title' => 'YouTube settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure sitewide settings for embedded YouTube video fields.',
      ),
      'identifier' => 'management_youtube-settings:admin/config/media/youtube',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: menu-footer-bottom-menu_-disclaimer:http://localhost/sbismart.
  $menu_links['menu-footer-bottom-menu_-disclaimer:http://localhost/sbismart'] = array(
    'menu_name' => 'menu-footer-bottom-menu',
    'link_path' => 'http://localhost/sbismart',
    'router_path' => '',
    'link_title' => ' Disclaimer',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => 'border-right: 1px solid; line-height: 16px;padding-right: 20px;',
      ),
      'identifier' => 'menu-footer-bottom-menu_-disclaimer:http://localhost/sbismart',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-bottom-menu_privacy-policy:http://localhost/sbismart.
  $menu_links['menu-footer-bottom-menu_privacy-policy:http://localhost/sbismart'] = array(
    'menu_name' => 'menu-footer-bottom-menu',
    'link_path' => 'http://localhost/sbismart',
    'router_path' => '',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-bottom-menu_privacy-policy:http://localhost/sbismart',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-bottom-menu_security-tips:http://localhost/sbismart.
  $menu_links['menu-footer-bottom-menu_security-tips:http://localhost/sbismart'] = array(
    'menu_name' => 'menu-footer-bottom-menu',
    'link_path' => 'http://localhost/sbismart',
    'router_path' => '',
    'link_title' => 'Security tips',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => 'border-right: 1px solid; line-height: 16px;padding-right: 20px;',
      ),
      'identifier' => 'menu-footer-bottom-menu_security-tips:http://localhost/sbismart',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-bottom-menu_sitemap:http://192.168.147.56/sbismart/sitemap.
  $menu_links['menu-footer-bottom-menu_sitemap:http://192.168.147.56/sbismart/sitemap'] = array(
    'menu_name' => 'menu-footer-bottom-menu',
    'link_path' => 'http://192.168.147.56/sbismart/sitemap',
    'router_path' => '',
    'link_title' => 'Sitemap',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => 'border-right: 1px solid; line-height: 16px;padding-right: 20px;',
      ),
      'identifier' => 'menu-footer-bottom-menu_sitemap:http://192.168.147.56/sbismart/sitemap',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-topnav_careers:node/54.
  $menu_links['menu-topnav_careers:node/54'] = array(
    'menu_name' => 'menu-topnav',
    'link_path' => 'node/54',
    'router_path' => 'node/%',
    'link_title' => 'Careers',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon careers',
        'style' => '',
      ),
      'identifier' => 'menu-topnav_careers:node/54',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-topnav_feedback:http://localhost/sbismart.
  $menu_links['menu-topnav_feedback:http://localhost/sbismart'] = array(
    'menu_name' => 'menu-topnav',
    'link_path' => 'http://localhost/sbismart',
    'router_path' => '',
    'link_title' => 'Feedback',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon feedback',
        'style' => '',
      ),
      'identifier' => 'menu-topnav_feedback:http://localhost/sbismart',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-topnav_procurement:http://localhost/sbismart.
  $menu_links['menu-topnav_procurement:http://localhost/sbismart'] = array(
    'menu_name' => 'menu-topnav',
    'link_path' => 'http://localhost/sbismart',
    'router_path' => '',
    'link_title' => 'Procurement',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon procurement',
        'style' => '',
      ),
      'identifier' => 'menu-topnav_procurement:http://localhost/sbismart',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-topnav_regulatory-corner:node/60.
  $menu_links['menu-topnav_regulatory-corner:node/60'] = array(
    'menu_name' => 'menu-topnav',
    'link_path' => 'node/60',
    'router_path' => 'node/%',
    'link_title' => 'Regulatory Corner',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon regulatory',
        'style' => '',
      ),
      'identifier' => 'menu-topnav_regulatory-corner:node/60',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-topnav_web-mail:http://localhost/sbismart.
  $menu_links['menu-topnav_web-mail:http://localhost/sbismart'] = array(
    'menu_name' => 'menu-topnav',
    'link_path' => 'http://localhost/sbismart',
    'router_path' => '',
    'link_title' => 'Web Mail',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon webmail',
        'style' => '',
      ),
      'identifier' => 'menu-topnav_web-mail:http://localhost/sbismart',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: navigation_:sitemap.
  $menu_links['navigation_:sitemap'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'sitemap',
    'router_path' => 'sitemap',
    'link_title' => '',
    'options' => array(
      'attributes' => array(
        'title' => 'Display a site map with RSS feeds.',
      ),
      'identifier' => 'navigation_:sitemap',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_add-content:node/add.
  $menu_links['navigation_add-content:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'identifier' => 'navigation_add-content:node/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_article:node/add/article.
  $menu_links['navigation_article:node/add/article'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.',
      ),
      'identifier' => 'navigation_article:node/add/article',
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
  // Exported menu link: navigation_basic-page:node/add/page.
  $menu_links['navigation_basic-page:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      ),
      'identifier' => 'navigation_basic-page:node/add/page',
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
  // Exported menu link: navigation_beer:node/add/migrate-example-beer.
  $menu_links['navigation_beer:node/add/migrate-example-beer'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/migrate-example-beer',
    'router_path' => 'node/add/migrate-example-beer',
    'link_title' => 'Beer',
    'options' => array(
      'attributes' => array(
        'title' => 'Beer is what we drink.',
      ),
      'identifier' => 'navigation_beer:node/add/migrate-example-beer',
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
  // Exported menu link: navigation_build-a-gmap-macro:map/macro.
  $menu_links['navigation_build-a-gmap-macro:map/macro'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'map/macro',
    'router_path' => 'map/macro',
    'link_title' => 'Build a GMap macro',
    'options' => array(
      'identifier' => 'navigation_build-a-gmap-macro:map/macro',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_career-pages:node/add/career-page.
  $menu_links['navigation_career-pages:node/add/career-page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/career-page',
    'router_path' => 'node/add/career-page',
    'link_title' => 'Career Pages',
    'options' => array(
      'attributes' => array(
        'title' => 'Content for career pages showing in tab',
      ),
      'identifier' => 'navigation_career-pages:node/add/career-page',
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
  // Exported menu link: navigation_chaos-tools-ajax-demo:ctools_ajax_sample.
  $menu_links['navigation_chaos-tools-ajax-demo:ctools_ajax_sample'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'ctools_ajax_sample',
    'router_path' => 'ctools_ajax_sample',
    'link_title' => 'Chaos Tools AJAX Demo',
    'options' => array(
      'identifier' => 'navigation_chaos-tools-ajax-demo:ctools_ajax_sample',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_compose-tips:filter/tips.
  $menu_links['navigation_compose-tips:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(
      'identifier' => 'navigation_compose-tips:filter/tips',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
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
  // Exported menu link: navigation_download:node/add/download.
  $menu_links['navigation_download:node/add/download'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/download',
    'router_path' => 'node/add/download',
    'link_title' => 'Download',
    'options' => array(
      'attributes' => array(
        'title' => 'Download contains the content type for PDF download ',
      ),
      'identifier' => 'navigation_download:node/add/download',
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
  // Exported menu link: navigation_edutainment:node/add/edutainment.
  $menu_links['navigation_edutainment:node/add/edutainment'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/edutainment',
    'router_path' => 'node/add/edutainment',
    'link_title' => 'Edutainment',
    'options' => array(
      'attributes' => array(
        'title' => 'Edutainment page content',
      ),
      'identifier' => 'navigation_edutainment:node/add/edutainment',
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
  // Exported menu link: navigation_expert-talk:node/add/expert-talk.
  $menu_links['navigation_expert-talk:node/add/expert-talk'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/expert-talk',
    'router_path' => 'node/add/expert-talk',
    'link_title' => 'Expert Talk',
    'options' => array(
      'attributes' => array(
        'title' => 'Content for expert talk topic',
      ),
      'identifier' => 'navigation_expert-talk:node/add/expert-talk',
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
  // Exported menu link: navigation_faq:node/add/faq.
  $menu_links['navigation_faq:node/add/faq'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/faq',
    'router_path' => 'node/add/faq',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => 'Content for FAQs',
      ),
      'identifier' => 'navigation_faq:node/add/faq',
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
  // Exported menu link: navigation_get-city:get/city.
  $menu_links['navigation_get-city:get/city'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'get/city',
    'router_path' => 'get/city',
    'link_title' => 'Get City',
    'options' => array(
      'identifier' => 'navigation_get-city:get/city',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_get-directions:getdirections.
  $menu_links['navigation_get-directions:getdirections'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'getdirections',
    'router_path' => 'getdirections',
    'link_title' => 'Get directions',
    'options' => array(
      'attributes' => array(
        'title' => 'Get directions on a map',
      ),
      'identifier' => 'navigation_get-directions:getdirections',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_information:call-trade/getinfo.
  $menu_links['navigation_information:call-trade/getinfo'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'call-trade/getinfo',
    'router_path' => 'call-trade/getinfo',
    'link_title' => 'Information',
    'options' => array(
      'identifier' => 'navigation_information:call-trade/getinfo',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_live-news:node/add/live-news.
  $menu_links['navigation_live-news:node/add/live-news'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/live-news',
    'router_path' => 'node/add/live-news',
    'link_title' => 'Live News',
    'options' => array(
      'attributes' => array(
        'title' => 'Live News content type',
      ),
      'identifier' => 'navigation_live-news:node/add/live-news',
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
  // Exported menu link: navigation_loan-and-product:node/add/loan-and-product.
  $menu_links['navigation_loan-and-product:node/add/loan-and-product'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/loan-and-product',
    'router_path' => 'node/add/loan-and-product',
    'link_title' => 'Loan and Product',
    'options' => array(
      'attributes' => array(
        'title' => 'Contains the content of Loan and product',
      ),
      'identifier' => 'navigation_loan-and-product:node/add/loan-and-product',
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
  // Exported menu link: navigation_main-banner:node/add/main-banner.
  $menu_links['navigation_main-banner:node/add/main-banner'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/main-banner',
    'router_path' => 'node/add/main-banner',
    'link_title' => 'Main Banner',
    'options' => array(
      'attributes' => array(
        'title' => 'Main Banner content type',
      ),
      'identifier' => 'navigation_main-banner:node/add/main-banner',
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
  // Exported menu link: navigation_new-branch:node/add/new-branch.
  $menu_links['navigation_new-branch:node/add/new-branch'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/new-branch',
    'router_path' => 'node/add/new-branch',
    'link_title' => 'New branch',
    'options' => array(
      'identifier' => 'navigation_new-branch:node/add/new-branch',
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
  // Exported menu link: navigation_node-locations:map/node.
  $menu_links['navigation_node-locations:map/node'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'map/node',
    'router_path' => 'map/node',
    'link_title' => 'Node locations',
    'options' => array(
      'identifier' => 'navigation_node-locations:map/node',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_page-banner:node/add/page-banner.
  $menu_links['navigation_page-banner:node/add/page-banner'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page-banner',
    'router_path' => 'node/add/page-banner',
    'link_title' => 'Page Banner',
    'options' => array(
      'attributes' => array(
        'title' => 'Contains the banner image for the pages',
      ),
      'identifier' => 'navigation_page-banner:node/add/page-banner',
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
  // Exported menu link: navigation_product-and-service:node/add/product-and-service.
  $menu_links['navigation_product-and-service:node/add/product-and-service'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/product-and-service',
    'router_path' => 'node/add/product-and-service',
    'link_title' => 'Product and Service',
    'options' => array(
      'attributes' => array(
        'title' => 'Content for Product and Service',
      ),
      'identifier' => 'navigation_product-and-service:node/add/product-and-service',
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
  // Exported menu link: navigation_regularity-corner:node/add/regularity-corner.
  $menu_links['navigation_regularity-corner:node/add/regularity-corner'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/regularity-corner',
    'router_path' => 'node/add/regularity-corner',
    'link_title' => 'Regularity Corner',
    'options' => array(
      'attributes' => array(
        'title' => 'Content for Regularity Corner',
      ),
      'identifier' => 'navigation_regularity-corner:node/add/regularity-corner',
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
  // Exported menu link: navigation_right-carousel:node/add/right-carousel.
  $menu_links['navigation_right-carousel:node/add/right-carousel'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/right-carousel',
    'router_path' => 'node/add/right-carousel',
    'link_title' => 'Right Carousel',
    'options' => array(
      'attributes' => array(
        'title' => 'Right Carousel content type',
      ),
      'identifier' => 'navigation_right-carousel:node/add/right-carousel',
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
  // Exported menu link: navigation_search:search.
  $menu_links['navigation_search:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'navigation_search:search',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_smart-insights:node/add/smart-insights.
  $menu_links['navigation_smart-insights:node/add/smart-insights'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/smart-insights',
    'router_path' => 'node/add/smart-insights',
    'link_title' => 'Smart Insights',
    'options' => array(
      'identifier' => 'navigation_smart-insights:node/add/smart-insights',
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
  // Exported menu link: navigation_software:node/add/software.
  $menu_links['navigation_software:node/add/software'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/software',
    'router_path' => 'node/add/software',
    'link_title' => 'Software',
    'options' => array(
      'attributes' => array(
        'title' => 'Content type for download the softwares',
      ),
      'identifier' => 'navigation_software:node/add/software',
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
  // Exported menu link: navigation_successful-jumping:ctools_ajax_sample/jumped.
  $menu_links['navigation_successful-jumping:ctools_ajax_sample/jumped'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'ctools_ajax_sample/jumped',
    'router_path' => 'ctools_ajax_sample/jumped',
    'link_title' => 'Successful Jumping',
    'options' => array(
      'identifier' => 'navigation_successful-jumping:ctools_ajax_sample/jumped',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_chaos-tools-ajax-demo:ctools_ajax_sample',
  );
  // Exported menu link: navigation_tools:node/add/tools.
  $menu_links['navigation_tools:node/add/tools'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/tools',
    'router_path' => 'node/add/tools',
    'link_title' => 'Tools',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools content type for the calculater',
      ),
      'identifier' => 'navigation_tools:node/add/tools',
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
  // Exported menu link: navigation_user-locations:map/user.
  $menu_links['navigation_user-locations:map/user'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'map/user',
    'router_path' => 'map/user',
    'link_title' => 'User locations',
    'options' => array(
      'identifier' => 'navigation_user-locations:map/user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_webform:node/add/webform.
  $menu_links['navigation_webform:node/add/webform'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
      ),
      'identifier' => 'navigation_webform:node/add/webform',
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
  // Exported menu link: navigation_webinars:node/add/webinars.
  $menu_links['navigation_webinars:node/add/webinars'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/webinars',
    'router_path' => 'node/add/webinars',
    'link_title' => 'Webinars',
    'options' => array(
      'identifier' => 'navigation_webinars:node/add/webinars',
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
  // Exported menu link: navigation_whats-new:node/add/what-s-new.
  $menu_links['navigation_whats-new:node/add/what-s-new'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/what-s-new',
    'router_path' => 'node/add/what-s-new',
    'link_title' => 'What\'s new',
    'options' => array(
      'attributes' => array(
        'title' => 'What\'s new content type',
      ),
      'identifier' => 'navigation_whats-new:node/add/what-s-new',
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
  // Exported menu link: navigation_wine-producer:node/add/migrate-example-producer.
  $menu_links['navigation_wine-producer:node/add/migrate-example-producer'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/migrate-example-producer',
    'router_path' => 'node/add/migrate-example-producer',
    'link_title' => 'Wine Producer',
    'options' => array(
      'attributes' => array(
        'title' => 'Wineries, vineyards, and large producers',
      ),
      'identifier' => 'navigation_wine-producer:node/add/migrate-example-producer',
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
  // Exported menu link: navigation_wine:node/add/migrate-example-wine.
  $menu_links['navigation_wine:node/add/migrate-example-wine'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/migrate-example-wine',
    'router_path' => 'node/add/migrate-example-wine',
    'link_title' => 'Wine',
    'options' => array(
      'attributes' => array(
        'title' => 'Wine is what we drink.',
      ),
      'identifier' => 'navigation_wine:node/add/migrate-example-wine',
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
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t(' Disclaimer');
  t('Account settings');
  t('Actions');
  t('Add content');
  t('Administration');
  t('Appearance');
  t('Article');
  t('Autofill empty locations');
  t('Available updates');
  t('Basic page');
  t('Beer');
  t('Blocks');
  t('Branches');
  t('Build a GMap macro');
  t('CAPTCHA');
  t('CKEditor');
  t('CUSTOMER SERVICE');
  t('Call & Trade');
  t('Career Pages');
  t('Careers');
  t('Chaos Tools AJAX Demo');
  t('Clean URLs');
  t('Comments');
  t('Compose tips');
  t('Configuration');
  t('Content');
  t('Content authoring');
  t('Content types');
  t('Cron');
  t('Custom breadcrumbs');
  t('Custom breadcrumbs settings');
  t('Dashboard');
  t('Date API');
  t('Date Popup');
  t('Date Tools');
  t('Date and time');
  t('Demo');
  t('Development');
  t('Download');
  t('Education');
  t('Edutainment');
  t('Expert Talk');
  t('FAQ');
  t('Features');
  t('Feedback');
  t('Field Validation');
  t('Field dependencies');
  t('Field list');
  t('File system');
  t('File types');
  t('Footer menu');
  t('GMap');
  t('GMap Location');
  t('Get City');
  t('Get directions');
  t('Help');
  t('Hierarchical Select');
  t('Home');
  t('IMCE');
  t('IP address blocking');
  t('Image styles');
  t('Image toolkit');
  t('Information');
  t('Live News');
  t('Loan and Product');
  t('Location');
  t('Log out');
  t('Logging and errors');
  t('MARKETS');
  t('Main Banner');
  t('Main menu');
  t('Maintenance mode');
  t('Management');
  t('Media');
  t('Media browser settings');
  t('Menus');
  t('Migrate');
  t('Modules');
  t('Navigation');
  t('New branch');
  t('Node locations');
  t('On The Web Settings');
  t('PRODUCTS & SERVICES');
  t('Page Banner');
  t('People');
  t('Performance');
  t('Privacy Policy');
  t('Procurement');
  t('Product and Service');
  t('Quicktabs');
  t('RSS publishing');
  t('Rebuild type information for media');
  t('Recent log messages');
  t('Regional and language');
  t('Regional settings');
  t('Regularity Corner');
  t('Regulatory Corner');
  t('Reports');
  t('Right Carousel');
  t('Scheduler');
  t('Search');
  t('Search and metadata');
  t('Search settings');
  t('Security tips');
  t('Shortcuts');
  t('Site information');
  t('Site map');
  t('Sitemap');
  t('Smart Insights');
  t('Software');
  t('Status report');
  t('Structure');
  t('Successful Jumping');
  t('System');
  t('Taxonomy');
  t('Text formats');
  t('Tools');
  t('Top \'access denied\' errors');
  t('Top \'page not found\' errors');
  t('Top menu');
  t('Top search phrases');
  t('URL aliases');
  t('Universally unique identifiers');
  t('User account');
  t('User interface');
  t('User locations');
  t('User menu');
  t('Views');
  t('Views plugins');
  t('WHY SBI SMART?');
  t('Web Mail');
  t('Web services');
  t('Webform');
  t('Webform settings');
  t('Webinar');
  t('Webinars');
  t('What\'s new');
  t('Wine');
  t('Wine Producer');
  t('Workflow');
  t('Wysiwyg profiles');
  t('YouTube settings');
  t('jQuery update');

  return $menu_links;
}
