<?php
/**
 * @file
 * phase_3_db.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function phase_3_db_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access call and trade'.
  $permissions['access call and trade'] = array(
    'name' => 'access call and trade',
    'roles' => array(),
    'module' => 'custom',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access gmap getdirections'.
  $permissions['access gmap getdirections'] = array(
    'name' => 'access gmap getdirections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'getdirections',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site map'.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'site_map',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'access user getdirections'.
  $permissions['access user getdirections'] = array(
    'name' => 'access user getdirections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'getdirections',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access webform share functionality'.
  $permissions['access webform share functionality'] = array(
    'name' => 'access webform share functionality',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform_share',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer custom breadcrumbs'.
  $permissions['administer custom breadcrumbs'] = array(
    'name' => 'administer custom breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'custom_breadcrumbs',
  );

  // Exported permission: 'administer date tools'.
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'date_tools',
  );

  // Exported permission: 'administer dependencies'.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer media'.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer quicktabs'.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quicktabs',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer youtube'.
  $permissions['administer youtube'] = array(
    'name' => 'administer youtube',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'youtube',
  );

  // Exported permission: 'advanced migration information'.
  $permissions['advanced migration information'] = array(
    'name' => 'advanced migration information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'migrate',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create branches content'.
  $permissions['create branches content'] = array(
    'name' => 'create branches content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create career_page content'.
  $permissions['create career_page content'] = array(
    'name' => 'create career_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create demo content'.
  $permissions['create demo content'] = array(
    'name' => 'create demo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create download content'.
  $permissions['create download content'] = array(
    'name' => 'create download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create edutainment content'.
  $permissions['create edutainment content'] = array(
    'name' => 'create edutainment content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create expert_talk content'.
  $permissions['create expert_talk content'] = array(
    'name' => 'create expert_talk content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create faq content'.
  $permissions['create faq content'] = array(
    'name' => 'create faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create gmap macro'.
  $permissions['create gmap macro'] = array(
    'name' => 'create gmap macro',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gmap_macro_builder',
  );

  // Exported permission: 'create live_news content'.
  $permissions['create live_news content'] = array(
    'name' => 'create live_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create loan_and_product content'.
  $permissions['create loan_and_product content'] = array(
    'name' => 'create loan_and_product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create main_banner content'.
  $permissions['create main_banner content'] = array(
    'name' => 'create main_banner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create migrate_example_beer content'.
  $permissions['create migrate_example_beer content'] = array(
    'name' => 'create migrate_example_beer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create migrate_example_producer content'.
  $permissions['create migrate_example_producer content'] = array(
    'name' => 'create migrate_example_producer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create migrate_example_wine content'.
  $permissions['create migrate_example_wine content'] = array(
    'name' => 'create migrate_example_wine content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create new_branch content'.
  $permissions['create new_branch content'] = array(
    'name' => 'create new_branch content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page_banner content'.
  $permissions['create page_banner content'] = array(
    'name' => 'create page_banner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create product_and_service content'.
  $permissions['create product_and_service content'] = array(
    'name' => 'create product_and_service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create regularity_corner content'.
  $permissions['create regularity_corner content'] = array(
    'name' => 'create regularity_corner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create right_carousel content'.
  $permissions['create right_carousel content'] = array(
    'name' => 'create right_carousel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create smart_insights content'.
  $permissions['create smart_insights content'] = array(
    'name' => 'create smart_insights content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create software content'.
  $permissions['create software content'] = array(
    'name' => 'create software content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create tools content'.
  $permissions['create tools content'] = array(
    'name' => 'create tools content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create webinars content'.
  $permissions['create webinars content'] = array(
    'name' => 'create webinars content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create what_s_new content'.
  $permissions['create what_s_new content'] = array(
    'name' => 'create what_s_new content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any branches content'.
  $permissions['delete any branches content'] = array(
    'name' => 'delete any branches content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any career_page content'.
  $permissions['delete any career_page content'] = array(
    'name' => 'delete any career_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any demo content'.
  $permissions['delete any demo content'] = array(
    'name' => 'delete any demo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any download content'.
  $permissions['delete any download content'] = array(
    'name' => 'delete any download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any edutainment content'.
  $permissions['delete any edutainment content'] = array(
    'name' => 'delete any edutainment content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any expert_talk content'.
  $permissions['delete any expert_talk content'] = array(
    'name' => 'delete any expert_talk content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any faq content'.
  $permissions['delete any faq content'] = array(
    'name' => 'delete any faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any live_news content'.
  $permissions['delete any live_news content'] = array(
    'name' => 'delete any live_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any loan_and_product content'.
  $permissions['delete any loan_and_product content'] = array(
    'name' => 'delete any loan_and_product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any main_banner content'.
  $permissions['delete any main_banner content'] = array(
    'name' => 'delete any main_banner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any migrate_example_beer content'.
  $permissions['delete any migrate_example_beer content'] = array(
    'name' => 'delete any migrate_example_beer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any migrate_example_producer content'.
  $permissions['delete any migrate_example_producer content'] = array(
    'name' => 'delete any migrate_example_producer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any migrate_example_wine content'.
  $permissions['delete any migrate_example_wine content'] = array(
    'name' => 'delete any migrate_example_wine content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any new_branch content'.
  $permissions['delete any new_branch content'] = array(
    'name' => 'delete any new_branch content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page_banner content'.
  $permissions['delete any page_banner content'] = array(
    'name' => 'delete any page_banner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any product_and_service content'.
  $permissions['delete any product_and_service content'] = array(
    'name' => 'delete any product_and_service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any regularity_corner content'.
  $permissions['delete any regularity_corner content'] = array(
    'name' => 'delete any regularity_corner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any right_carousel content'.
  $permissions['delete any right_carousel content'] = array(
    'name' => 'delete any right_carousel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any smart_insights content'.
  $permissions['delete any smart_insights content'] = array(
    'name' => 'delete any smart_insights content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any software content'.
  $permissions['delete any software content'] = array(
    'name' => 'delete any software content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any tools content'.
  $permissions['delete any tools content'] = array(
    'name' => 'delete any tools content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any webinars content'.
  $permissions['delete any webinars content'] = array(
    'name' => 'delete any webinars content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any what_s_new content'.
  $permissions['delete any what_s_new content'] = array(
    'name' => 'delete any what_s_new content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own branches content'.
  $permissions['delete own branches content'] = array(
    'name' => 'delete own branches content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own career_page content'.
  $permissions['delete own career_page content'] = array(
    'name' => 'delete own career_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own demo content'.
  $permissions['delete own demo content'] = array(
    'name' => 'delete own demo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own download content'.
  $permissions['delete own download content'] = array(
    'name' => 'delete own download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own edutainment content'.
  $permissions['delete own edutainment content'] = array(
    'name' => 'delete own edutainment content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own expert_talk content'.
  $permissions['delete own expert_talk content'] = array(
    'name' => 'delete own expert_talk content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own faq content'.
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own live_news content'.
  $permissions['delete own live_news content'] = array(
    'name' => 'delete own live_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own loan_and_product content'.
  $permissions['delete own loan_and_product content'] = array(
    'name' => 'delete own loan_and_product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own main_banner content'.
  $permissions['delete own main_banner content'] = array(
    'name' => 'delete own main_banner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own migrate_example_beer content'.
  $permissions['delete own migrate_example_beer content'] = array(
    'name' => 'delete own migrate_example_beer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own migrate_example_producer content'.
  $permissions['delete own migrate_example_producer content'] = array(
    'name' => 'delete own migrate_example_producer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own migrate_example_wine content'.
  $permissions['delete own migrate_example_wine content'] = array(
    'name' => 'delete own migrate_example_wine content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own new_branch content'.
  $permissions['delete own new_branch content'] = array(
    'name' => 'delete own new_branch content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page_banner content'.
  $permissions['delete own page_banner content'] = array(
    'name' => 'delete own page_banner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own product_and_service content'.
  $permissions['delete own product_and_service content'] = array(
    'name' => 'delete own product_and_service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own regularity_corner content'.
  $permissions['delete own regularity_corner content'] = array(
    'name' => 'delete own regularity_corner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own right_carousel content'.
  $permissions['delete own right_carousel content'] = array(
    'name' => 'delete own right_carousel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own smart_insights content'.
  $permissions['delete own smart_insights content'] = array(
    'name' => 'delete own smart_insights content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own software content'.
  $permissions['delete own software content'] = array(
    'name' => 'delete own software content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own tools content'.
  $permissions['delete own tools content'] = array(
    'name' => 'delete own tools content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete own webinars content'.
  $permissions['delete own webinars content'] = array(
    'name' => 'delete own webinars content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own what_s_new content'.
  $permissions['delete own what_s_new content'] = array(
    'name' => 'delete own what_s_new content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in customer_segment'.
  $permissions['delete terms in customer_segment'] = array(
    'name' => 'delete terms in customer_segment',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in faq_category'.
  $permissions['delete terms in faq_category'] = array(
    'name' => 'delete terms in faq_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in migrate_example_beer_styles'.
  $permissions['delete terms in migrate_example_beer_styles'] = array(
    'name' => 'delete terms in migrate_example_beer_styles',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in migrate_example_wine_best_with'.
  $permissions['delete terms in migrate_example_wine_best_with'] = array(
    'name' => 'delete terms in migrate_example_wine_best_with',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in migrate_example_wine_regions'.
  $permissions['delete terms in migrate_example_wine_regions'] = array(
    'name' => 'delete terms in migrate_example_wine_regions',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in migrate_example_wine_varieties'.
  $permissions['delete terms in migrate_example_wine_varieties'] = array(
    'name' => 'delete terms in migrate_example_wine_varieties',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in root'.
  $permissions['delete terms in root'] = array(
    'name' => 'delete terms in root',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in smart_insights_category'.
  $permissions['delete terms in smart_insights_category'] = array(
    'name' => 'delete terms in smart_insights_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in state_city'.
  $permissions['delete terms in state_city'] = array(
    'name' => 'delete terms in state_city',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any branches content'.
  $permissions['edit any branches content'] = array(
    'name' => 'edit any branches content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any career_page content'.
  $permissions['edit any career_page content'] = array(
    'name' => 'edit any career_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any demo content'.
  $permissions['edit any demo content'] = array(
    'name' => 'edit any demo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any download content'.
  $permissions['edit any download content'] = array(
    'name' => 'edit any download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any edutainment content'.
  $permissions['edit any edutainment content'] = array(
    'name' => 'edit any edutainment content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any expert_talk content'.
  $permissions['edit any expert_talk content'] = array(
    'name' => 'edit any expert_talk content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any faq content'.
  $permissions['edit any faq content'] = array(
    'name' => 'edit any faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any live_news content'.
  $permissions['edit any live_news content'] = array(
    'name' => 'edit any live_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any loan_and_product content'.
  $permissions['edit any loan_and_product content'] = array(
    'name' => 'edit any loan_and_product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any main_banner content'.
  $permissions['edit any main_banner content'] = array(
    'name' => 'edit any main_banner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any migrate_example_beer content'.
  $permissions['edit any migrate_example_beer content'] = array(
    'name' => 'edit any migrate_example_beer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any migrate_example_producer content'.
  $permissions['edit any migrate_example_producer content'] = array(
    'name' => 'edit any migrate_example_producer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any migrate_example_wine content'.
  $permissions['edit any migrate_example_wine content'] = array(
    'name' => 'edit any migrate_example_wine content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any new_branch content'.
  $permissions['edit any new_branch content'] = array(
    'name' => 'edit any new_branch content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page_banner content'.
  $permissions['edit any page_banner content'] = array(
    'name' => 'edit any page_banner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any product_and_service content'.
  $permissions['edit any product_and_service content'] = array(
    'name' => 'edit any product_and_service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any regularity_corner content'.
  $permissions['edit any regularity_corner content'] = array(
    'name' => 'edit any regularity_corner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any right_carousel content'.
  $permissions['edit any right_carousel content'] = array(
    'name' => 'edit any right_carousel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any smart_insights content'.
  $permissions['edit any smart_insights content'] = array(
    'name' => 'edit any smart_insights content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any software content'.
  $permissions['edit any software content'] = array(
    'name' => 'edit any software content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any tools content'.
  $permissions['edit any tools content'] = array(
    'name' => 'edit any tools content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any webinars content'.
  $permissions['edit any webinars content'] = array(
    'name' => 'edit any webinars content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any what_s_new content'.
  $permissions['edit any what_s_new content'] = array(
    'name' => 'edit any what_s_new content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit media'.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own branches content'.
  $permissions['edit own branches content'] = array(
    'name' => 'edit own branches content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own career_page content'.
  $permissions['edit own career_page content'] = array(
    'name' => 'edit own career_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own demo content'.
  $permissions['edit own demo content'] = array(
    'name' => 'edit own demo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own download content'.
  $permissions['edit own download content'] = array(
    'name' => 'edit own download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own edutainment content'.
  $permissions['edit own edutainment content'] = array(
    'name' => 'edit own edutainment content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own expert_talk content'.
  $permissions['edit own expert_talk content'] = array(
    'name' => 'edit own expert_talk content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own faq content'.
  $permissions['edit own faq content'] = array(
    'name' => 'edit own faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own live_news content'.
  $permissions['edit own live_news content'] = array(
    'name' => 'edit own live_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own loan_and_product content'.
  $permissions['edit own loan_and_product content'] = array(
    'name' => 'edit own loan_and_product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own main_banner content'.
  $permissions['edit own main_banner content'] = array(
    'name' => 'edit own main_banner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own migrate_example_beer content'.
  $permissions['edit own migrate_example_beer content'] = array(
    'name' => 'edit own migrate_example_beer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own migrate_example_producer content'.
  $permissions['edit own migrate_example_producer content'] = array(
    'name' => 'edit own migrate_example_producer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own migrate_example_wine content'.
  $permissions['edit own migrate_example_wine content'] = array(
    'name' => 'edit own migrate_example_wine content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own new_branch content'.
  $permissions['edit own new_branch content'] = array(
    'name' => 'edit own new_branch content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page_banner content'.
  $permissions['edit own page_banner content'] = array(
    'name' => 'edit own page_banner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own product_and_service content'.
  $permissions['edit own product_and_service content'] = array(
    'name' => 'edit own product_and_service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own regularity_corner content'.
  $permissions['edit own regularity_corner content'] = array(
    'name' => 'edit own regularity_corner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own right_carousel content'.
  $permissions['edit own right_carousel content'] = array(
    'name' => 'edit own right_carousel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own smart_insights content'.
  $permissions['edit own smart_insights content'] = array(
    'name' => 'edit own smart_insights content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own software content'.
  $permissions['edit own software content'] = array(
    'name' => 'edit own software content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own tools content'.
  $permissions['edit own tools content'] = array(
    'name' => 'edit own tools content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit own webinars content'.
  $permissions['edit own webinars content'] = array(
    'name' => 'edit own webinars content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own what_s_new content'.
  $permissions['edit own what_s_new content'] = array(
    'name' => 'edit own what_s_new content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in customer_segment'.
  $permissions['edit terms in customer_segment'] = array(
    'name' => 'edit terms in customer_segment',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in faq_category'.
  $permissions['edit terms in faq_category'] = array(
    'name' => 'edit terms in faq_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in migrate_example_beer_styles'.
  $permissions['edit terms in migrate_example_beer_styles'] = array(
    'name' => 'edit terms in migrate_example_beer_styles',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in migrate_example_wine_best_with'.
  $permissions['edit terms in migrate_example_wine_best_with'] = array(
    'name' => 'edit terms in migrate_example_wine_best_with',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in migrate_example_wine_regions'.
  $permissions['edit terms in migrate_example_wine_regions'] = array(
    'name' => 'edit terms in migrate_example_wine_regions',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in migrate_example_wine_varieties'.
  $permissions['edit terms in migrate_example_wine_varieties'] = array(
    'name' => 'edit terms in migrate_example_wine_varieties',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in root'.
  $permissions['edit terms in root'] = array(
    'name' => 'edit terms in root',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in smart_insights_category'.
  $permissions['edit terms in smart_insights_category'] = array(
    'name' => 'edit terms in smart_insights_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in state_city'.
  $permissions['edit terms in state_city'] = array(
    'name' => 'edit terms in state_city',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'migration information'.
  $permissions['migration information'] = array(
    'name' => 'migration information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'migrate',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'submit latitude/longitude'.
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use php in custom breadcrumbs'.
  $permissions['use php in custom breadcrumbs'] = array(
    'name' => 'use php in custom breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'custom_breadcrumbs',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format migrate_example'.
  $permissions['use text format migrate_example'] = array(
    'name' => 'use text format migrate_example',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'view date repeats'.
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'date_repeat_field',
  );

  // Exported permission: 'view location directory'.
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view media'.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view node location table'.
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view node map'.
  $permissions['view node map'] = array(
    'name' => 'view node map',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view scheduled content'.
  $permissions['view scheduled content'] = array(
    'name' => 'view scheduled content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view user location details'.
  $permissions['view user location details'] = array(
    'name' => 'view user location details',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: 'view user location table'.
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view user map'.
  $permissions['view user map'] = array(
    'name' => 'view user map',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gmap_location',
  );

  return $permissions;
}
