<?php
/**
 * @file
 * phase_1_db_.captcha.inc
 */

/**
 * Implements hook_captcha_default_points().
 */
function phase_1_db__captcha_default_points() {
  $export = array();

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_article_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_article_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_branches_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_branches_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_career_page_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_career_page_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_demo_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_demo_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_download_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_download_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_edutainment_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_edutainment_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_expert_talk_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_expert_talk_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_faq_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_faq_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_live_news_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_live_news_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_loan_and_product_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_loan_and_product_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_main_banner_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_main_banner_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_migrate_example_beer_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_migrate_example_beer_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_migrate_example_producer_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_migrate_example_producer_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_migrate_example_wine_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_migrate_example_wine_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_new_branch_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_new_branch_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_page_banner_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_page_banner_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_page_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_page_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_product_and_service_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_product_and_service_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_regularity_corner_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_regularity_corner_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_right_carousel_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_right_carousel_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_smart_insights_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_smart_insights_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_software_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_software_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_tools_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_tools_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_webform_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_webform_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_webinars_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_webinars_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_what_s_new_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_what_s_new_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'user_login';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['user_login'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'user_login_block';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['user_login_block'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'user_pass';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['user_pass'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'user_register_form';
  $captcha->module = 'image_captcha';
  $captcha->captcha_type = 'Image';
  $export['user_register_form'] = $captcha;

  return $export;
}
