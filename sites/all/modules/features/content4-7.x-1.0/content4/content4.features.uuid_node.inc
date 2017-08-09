<?php
/**
 * @file
 * content4.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function content4_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Marriage Savings Calculator',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a7add7a5-6063-4a51-8bef-b4bc12d77613',
  'type' => 'tools',
  'language' => 'und',
  'created' => 1363870587,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0545baf5-4c17-43e9-9fdf-1230bf966d0a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<?php global $base_url; ?>
<p style="text-align: left"><embed width="487" height="729" type="application/x-shockwave-flash" play="true" loop="true" menu="true" src="<?php echo $base_url ?>/sites/default/files/tools/marriage.swf" pluginspage="http://www.macromedia.com/go/getflashplayer"></embed>&nbsp;</p>',
        'summary' => '',
        'format' => 'php_code',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-03-21 18:26:27 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Series 2: Investing in Equities',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f7c96e5b-0a26-4a30-8d27-db9f197e8222',
  'type' => 'smart_insights',
  'language' => 'und',
  'created' => 1455190917,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '236ec26b-340a-4f4e-aa73-efd481fa9dda',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>&nbsp;</p>

<div>Investing in Equities&nbsp;is a good and profitable investment proposition if you can make some good and timely investments. The key for profitable stock market investment is choosing the stocks that are most likely to appreciate in the near future. For making this selection you need to have good understanding of the market dynamics and have a strict vigil on the ups and down of the stock market. There are different ways to invest in the stock market. The key is to choose the right method of investing in the stocks depending on your portfolio and your objective and of course your ability to take risk.</div>

<div>&nbsp;</div>

<div>Here we are presenting a brief overview of Delivery trading so that you can choose the feature which will fits your requirement.</div>

<div>&nbsp;</div>

<div>Delivery trading is the most common type of trading done in India. It is commonly used by investors, whereby they pay the full price of a stock (equity) with no margin given, and the shares of the stock are deposited into their demat account. Delivery trading is associated with investors because unlike day-traders, who look to enter and exit trades within the same day, investors look to hold their positions for a longer term.</div>

<div>&nbsp;</div>

<div>The biggest advantage of delivery based trading is that you are not bound with time for selling the stock. You can hold the stocks for as long as you want. So, you can always hold a stock until you are getting a significant profit from the investment. Therefore, with delivery based trading you can always take your time to take a decision and reduce the risk of losses.</div>

<div>&nbsp;</div>

<div>When you are making a long term investment with delivery based trading, you can also benefit from other things like dividends, split of stocks, bonus shares and so on. These are benefits that the companies offer to their share holders from time to time and you can make significant profit from these offers if you are holding the stocks for long periods.</div>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p> </p>
<p>Investing in Equities is a good and profitable investment proposition if you can make some good and timely investments. The key for profitable stock market investment is choosing the stocks that are most likely to appreciate in the near future. For making this selection you need to have good understanding of the market dynamics and have a strict vigil on the ups and down of the stock market. There are different ways to invest in the stock market. The key is to choose the right method of investing in the stocks depending on your portfolio and your objective and of course your ability to take risk.</p>
<p> </p>
<p>Here we are presenting a brief overview of Delivery trading so that you can choose the feature which will fits your requirement.</p>
<p> </p>
<p>Delivery trading is the most common type of trading done in India. It is commonly used by investors, whereby they pay the full price of a stock (equity) with no margin given, and the shares of the stock are deposited into their demat account. Delivery trading is associated with investors because unlike day-traders, who look to enter and exit trades within the same day, investors look to hold their positions for a longer term.</p>
<p> </p>
<p>The biggest advantage of delivery based trading is that you are not bound with time for selling the stock. You can hold the stocks for as long as you want. So, you can always hold a stock until you are getting a significant profit from the investment. Therefore, with delivery based trading you can always take your time to take a decision and reduce the risk of losses.</p>
<p> </p>
<p>When you are making a long term investment with delivery based trading, you can also benefit from other things like dividends, split of stocks, bonus shares and so on. These are benefits that the companies offer to their share holders from time to time and you can make significant profit from these offers if you are holding the stocks for long periods.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_smart_insights_category' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-02-11 17:11:57 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Feedback',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'ad90d5b6-4116-4e4f-a380-941b0d02b95d',
  'type' => 'webform',
  'language' => 'und',
  'created' => 1386937671,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '23ac2171-6e88-4352-9e37-38e042e2370e',
  'revision_uid' => 1,
  'field_body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'webform' => array(
    'nid' => 15,
    'next_serial' => 1,
    'confirmation' => '<p>We appreciate your time and valuable inputs. It will definitely help us enhance your experience with us.</p>
',
    'confirmation_format' => 'filtered_html',
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => 'filtered_html',
    'preview_excluded_components' => array(),
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      1 => array(
        'nid' => 15,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'section',
        'name' => 'Section',
        'type' => 'select',
        'value' => 'overall',
        'extra' => array(
          'items' => 'overall|Overall
specific|Specific',
          'multiple' => 0,
          'title_display' => 'none',
          'private' => 0,
          'aslist' => 0,
          'optrand' => 0,
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_values' => '',
          'empty_option' => '',
          'description_above' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 8,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 15,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'specific_section',
        'name' => 'specific section',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'customer_service|Customer Service
education|Education
market_watch|Market Watch
charts|Charts
markets_analysis_tool|Market Analysis Tool',
          'multiple' => 1,
          'title_display' => 'none',
          'private' => 0,
          'aslist' => 0,
          'optrand' => 0,
          'webform_conditional_field_value' => 'specific',
          'webform_conditional_cid' => 8,
          'webform_conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'empty_option' => '',
          'description_above' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 9,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 15,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'presentation',
        'name' => 'Presentation',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
        ),
        'required' => 0,
        'weight' => 10,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 15,
        'cid' => 4,
        'pid' => 3,
        'form_key' => 'locate_links',
        'name' => 'Easy to locate various links & buttons required.',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => '5|<img src="/sites/all/themes/sbicapportal/images/wow.png" title="5" alt="5" />
4|<img src="/sites/all/themes/sbicapportal/images/verygood.png" title="4" alt="4" />
3|<img src="/sites/all/themes/sbicapportal/images/good.png" title="3" alt="3" />
2|<img src="/sites/all/themes/sbicapportal/images/bad.png" title="2" alt="2" />
1|<img src="/sites/all/themes/sbicapportal/images/verybad.png" title="1" alt="1" />',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 0,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'empty_option' => '',
          'description_above' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 10,
        'page_num' => 1,
      ),
      8 => array(
        'nid' => 15,
        'cid' => 8,
        'pid' => 3,
        'form_key' => 'improve_navigation',
        'name' => 'Let us know how we can improve',
        'type' => 'textarea',
        'value' => 'Let us know how we can improve...',
        'extra' => array(
          'title_display' => 'none',
          'private' => 0,
          'resizable' => 0,
          'disabled' => 0,
          'webform_conditional_field_value' => '1
2
3',
          'webform_conditional_cid' => 11,
          'webform_conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 11,
        'page_num' => 1,
      ),
      6 => array(
        'nid' => 15,
        'cid' => 6,
        'pid' => 0,
        'form_key' => 'navigation',
        'name' => 'Navigation',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
        ),
        'required' => 0,
        'weight' => 11,
        'page_num' => 1,
      ),
      7 => array(
        'nid' => 15,
        'cid' => 7,
        'pid' => 6,
        'form_key' => 'navigation_rating',
        'name' => 'Easy to understand how to use various buttons & links and go get all related links in one place',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => '5|<img src="/sites/all/themes/sbicapportal/images/wow.png" title="5" alt="5" />
4|<img src="/sites/all/themes/sbicapportal/images/verygood.png" title="4" alt="4" />
3|<img src="/sites/all/themes/sbicapportal/images/good.png" title="3" alt="3" />
2|<img src="/sites/all/themes/sbicapportal/images/bad.png" title="2" alt="2" />
1|<img src="/sites/all/themes/sbicapportal/images/verybad.png" title="1" alt="1" />',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 0,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'empty_option' => '',
          'description_above' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 2,
        'page_num' => 1,
      ),
      11 => array(
        'nid' => 15,
        'cid' => 11,
        'pid' => 6,
        'form_key' => 'improve_content',
        'name' => 'Let us know how we can improve',
        'type' => 'textarea',
        'value' => 'Let us know how we can improve...',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 0,
          'disabled' => 0,
          'webform_conditional_field_value' => '1
2
3',
          'webform_conditional_cid' => 14,
          'webform_conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 3,
        'page_num' => 1,
      ),
      9 => array(
        'nid' => 15,
        'cid' => 9,
        'pid' => 0,
        'form_key' => 'content',
        'name' => 'Content',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
        ),
        'required' => 0,
        'weight' => 12,
        'page_num' => 1,
      ),
      10 => array(
        'nid' => 15,
        'cid' => 10,
        'pid' => 9,
        'form_key' => 'content_rating',
        'name' => 'Content easy to read & understand and rich enough to provide help in making investment decision',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => '5|<img src="/sites/all/themes/sbicapportal/images/wow.png" title="5" alt="5" />
4|<img src="/sites/all/themes/sbicapportal/images/verygood.png" title="4" alt="4" />
3|<img src="/sites/all/themes/sbicapportal/images/good.png" title="3" alt="3" />
2|<img src="/sites/all/themes/sbicapportal/images/bad.png" title="2" alt="2" />
1|<img src="/sites/all/themes/sbicapportal/images/verybad.png" title="1" alt="1" />',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 0,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'empty_option' => '',
          'description_above' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 1,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 15,
        'cid' => 5,
        'pid' => 9,
        'form_key' => 'improve_presentation1',
        'name' => 'Let us know how we can improve',
        'type' => 'textarea',
        'value' => 'Let us know how we can improve...',
        'extra' => array(
          'title_display' => 'none',
          'private' => 0,
          'resizable' => 0,
          'disabled' => 0,
          'webform_conditional_field_value' => '1
2
3',
          'webform_conditional_cid' => 2,
          'webform_conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 2,
        'page_num' => 1,
      ),
      12 => array(
        'nid' => 15,
        'cid' => 12,
        'pid' => 0,
        'form_key' => 'overall',
        'name' => 'Overall',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
        ),
        'required' => 0,
        'weight' => 13,
        'page_num' => 1,
      ),
      13 => array(
        'nid' => 15,
        'cid' => 13,
        'pid' => 12,
        'form_key' => 'like_the_most',
        'name' => 'What did you like the most about this site',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'cols' => 30,
          'rows' => 5,
          'resizable' => 0,
          'disabled' => 0,
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 12,
        'page_num' => 1,
      ),
      14 => array(
        'nid' => 15,
        'cid' => 14,
        'pid' => 12,
        'form_key' => 'dislike_the_most',
        'name' => 'What did you dislike the most about this site',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'cols' => 30,
          'rows' => 5,
          'resizable' => 0,
          'disabled' => 0,
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 13,
        'page_num' => 1,
      ),
      15 => array(
        'nid' => 15,
        'cid' => 15,
        'pid' => 12,
        'form_key' => 'recommend_us',
        'name' => 'How likely are you to recommend us to people you know?                                                            ',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => '5|<img src="/sites/all/themes/sbicapportal/images/wow.png" title="5" alt="5" />
4|<img src="/sites/all/themes/sbicapportal/images/verygood.png" title="4" alt="4" />
3|<img src="/sites/all/themes/sbicapportal/images/good.png" title="3" alt="3" />
2|<img src="/sites/all/themes/sbicapportal/images/bad.png" title="2" alt="2" />
1|<img src="/sites/all/themes/sbicapportal/images/verybad.png" title="1" alt="1" />',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 0,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'empty_option' => '',
          'description_above' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 14,
        'page_num' => 1,
      ),
      16 => array(
        'nid' => 15,
        'cid' => 16,
        'pid' => 12,
        'form_key' => 'comment_overall_experience',
        'name' => 'What is your overall experience including what we can improve on',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'cols' => 60,
          'rows' => 5,
          'resizable' => 0,
          'disabled' => 0,
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 15,
        'page_num' => 1,
      ),
      17 => array(
        'nid' => 15,
        'cid' => 17,
        'pid' => 0,
        'form_key' => 'client_code',
        'name' => 'Client Code (optional)',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 14,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-12-13 17:57:51 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Webinar Feedback',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b56bbfe5-dc04-457d-810c-a77a2925c29d',
  'type' => 'webform',
  'language' => 'und',
  'created' => 1424335343,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '26ef80f2-3883-4168-9787-3690b2643aba',
  'revision_uid' => 1,
  'field_body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'webform' => array(
    'nid' => 17,
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      1 => array(
        'nid' => 17,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'name',
        'name' => 'Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => 65,
          'disabled' => 0,
          'unique' => 0,
          'maxlength' => 150,
          'conditional_operator' => '=',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 0,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 17,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'client_code',
        'name' => 'Client Code',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => 65,
          'disabled' => 0,
          'unique' => 0,
          'maxlength' => 10,
          'conditional_operator' => '=',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 1,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 17,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'contact_no',
        'name' => 'Contact No',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => 65,
          'disabled' => 0,
          'unique' => 0,
          'maxlength' => 10,
          'conditional_operator' => '=',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 2,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 17,
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'email_id',
        'name' => 'Email Id',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => 65,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'multiple' => 0,
          'format' => 'short',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 3,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 17,
        'cid' => 5,
        'pid' => 0,
        'form_key' => 'session_help',
        'name' => 'Do you think this session helps you to trade on www.sbismart.com more easily',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'Yes|Yes
No|No',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 0,
          'optrand' => 0,
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_values' => '',
          'empty_option' => '',
          'description_above' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 4,
        'page_num' => 1,
      ),
      6 => array(
        'nid' => 17,
        'cid' => 6,
        'pid' => 0,
        'form_key' => 'upcoming_topic',
        'name' => 'Which topic would you prefer to know more in the upcoming learning sessions',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => 65,
          'disabled' => 0,
          'unique' => 0,
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 5,
        'page_num' => 1,
      ),
      7 => array(
        'nid' => 17,
        'cid' => 7,
        'pid' => 0,
        'form_key' => 'rating',
        'name' => 'Kindly rate the Seminar on below stated parameters',
        'type' => 'grid',
        'value' => '',
        'extra' => array(
          'options' => '',
          'questions' => '',
          'optrand' => 0,
          'qrand' => 0,
          'title_display' => 0,
          'custom_option_keys' => 0,
          'custom_question_keys' => 0,
          'description' => '',
          'private' => FALSE,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'unique' => 0,
          'sticky' => TRUE,
          'description_above' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 7,
        'page_num' => 1,
      ),
      8 => array(
        'nid' => 17,
        'cid' => 8,
        'pid' => 0,
        'form_key' => 'suggestions',
        'name' => 'Any further suggestions',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 8,
        'page_num' => 1,
      ),
      9 => array(
        'nid' => 17,
        'cid' => 9,
        'pid' => 0,
        'form_key' => 'references',
        'name' => 'Would you like to recommend any of your friends for a similar session',
        'type' => 'table_element',
        'value' => '',
        'extra' => array(
          'rows' => '1|1
2|2
3|3
4|4
5|5',
          'title_display' => 'before',
          'description_above' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'private' => 0,
          'description' => '',
          'custom_row_keys' => 0,
          'switch_layout' => 0,
        ),
        'required' => 0,
        'weight' => 10,
        'page_num' => 1,
      ),
      12 => array(
        'nid' => 17,
        'cid' => 12,
        'pid' => 9,
        'form_key' => 'c_name',
        'name' => 'Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => 30,
          'maxlength' => 60,
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 11,
        'page_num' => 1,
      ),
      13 => array(
        'nid' => 17,
        'cid' => 13,
        'pid' => 9,
        'form_key' => 'contact_details',
        'name' => 'Contact Details',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => 30,
          'maxlength' => 10,
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 12,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-02-19 14:12:23 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Carosal image 1',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3e42c7d1-d17d-44eb-8b4c-2c090c326633',
  'type' => 'right_carousel',
  'language' => 'und',
  'created' => 1455083033,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2bf85b03-2d43-4adf-9cb8-012cf986284d',
  'revision_uid' => 1,
  'field_right_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'SBISmart Edutainment.jpg',
        'uri' => 'public://right_carosal/SBISmart Edutainment.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 58006,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '9d3514a4-985c-4509-9dd3-0a5ce6f4dd10',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 180,
          'height' => 180,
        ),
        'alt' => '',
        'title' => '',
        'width' => 180,
        'height' => 180,
        'uuid_features_file_data' => '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UkdCQwAAAAMAAAAAUmQgIGRvdWJAb+AAAAAAAAAAAABHcm4gZG91YkBv4AAAAAAAAAAAAEJsICBkb3ViQG/gAAAAAAAAAAAAQnJkVFVudEYjUmx0AAAAAAAAAAAAAAAAQmxkIFVudEYjUmx0AAAAAAAAAAAAAAAAUnNsdFVudEYjUHhsQFIAAAAAAAAAAAAKdmVjdG9yRGF0YWJvb2wBAAAAAFBnUHNlbnVtAAAAAFBnUHMAAAAAUGdQQwAAAABMZWZ0VW50RiNSbHQAAAAAAAAAAAAAAABUb3AgVW50RiNSbHQAAAAAAAAAAAAAAABTY2wgVW50RiNQcmNAWQAAAAAAAAAAABBjcm9wV2hlblByaW50aW5nYm9vbAAAAAAOY3JvcFJlY3RCb3R0b21sb25nAAAAAAAAAAxjcm9wUmVjdExlZnRsb25nAAAAAAAAAA1jcm9wUmVjdFJpZ2h0bG9uZwAAAAAAAAALY3JvcFJlY3RUb3Bsb25nAAAAAAA4QklNA+0AAAAAABAASAAAAAEAAgBIAAAAAQACOEJJTQQmAAAAAAAOAAAAAAAAAAAAAD+AAAA4QklNBA0AAAAAAAQAAAB4OEJJTQQZAAAAAAAEAAAAHjhCSU0D8wAAAAAACQAAAAAAAAAAAQA4QklNJxAAAAAAAAoAAQAAAAAAAAACOEJJTQP1AAAAAABIAC9mZgABAGxmZgAGAAAAAAABAC9mZgABAKGZmgAGAAAAAAABADIAAAABAFoAAAAGAAAAAAABADUAAAABAC0AAAAGAAAAAAABOEJJTQP4AAAAAABwAAD/////////////////////////////A+gAAAAA/////////////////////////////wPoAAAAAP////////////////////////////8D6AAAAAD/////////////////////////////A+gAADhCSU0ECAAAAAAAEAAAAAEAAAJAAAACQAAAAAA4QklNBB4AAAAAAAQAAAAAOEJJTQQaAAAAAANjAAAABgAAAAAAAAAAAAAAtAAAALQAAAAXAFMAQgBJAFMAbQBhAHIAdAAgAEUAZAB1AHQAYQBpAG4AbQBlAG4AdAAgAHYAMwAAAAEAAAAAAAAAAAAAAAAAAAAAAAAAAQAAAAAAAAAAAAAAtAAAALQAAAAAAAAAAAAAAAAA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VGh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8APD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNS4zLWMwMTEgNjYuMTQ1NjYxLCAyMDEyLzAyLzA2LTE0OjU2OjI3ICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOmRjPSJodHRwOi8vcHVybC5vcmcvZGMvZWxlbWVudHMvMS4xLyIgeG1sbnM6eG1wTU09Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9tbS8iIHhtbG5zOnN0RXZ0PSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VFdmVudCMiIHhtbG5zOnN0UmVmPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VSZWYjIiB4bWxuczpwaG90b3Nob3A9Imh0dHA6Ly9ucy5hZG9iZS5jb20vcGhvdG9zaG9wLzEuMC8iIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoV2luZG93cykiIHhtcDpDcmVhdGVEYXRlPSIyMDE1LTA2LTA4VDEzOjA3OjIwKzA1OjMwIiB4bXA6TWV0YWRhdGFEYXRlPSIyMDE1LTA2LTEwVDEwOjU1OjMwKzA1OjMwIiB4bXA6TW9kaWZ5RGF0ZT0iMjAxNS0wNi0xMFQxMDo1NTozMCswNTozMCIgZGM6Zm9ybWF0PSJpbWFnZS9qcGVnIiB4bXBNTTpJbnN0YW5jZUlEPSJ4bXAuaWlkOjcwNDYyNkEyMzAwRkU1MTE5OTg5OTA5NUFBRjgxODE3IiB4bXBNTTpEb2N1bWVudElEPSJ4bXAuZGlkOkZCQzI5OTMxQUQwREU1MTE4RDE1RTQ4MDZGNDk0QjE3IiB4bXBNTTpPcmlnaW5hbERvY3VtZW50SUQ9InhtcC5kaWQ6RkJDMjk5MzFBRDBERTUxMThEMTVFNDgwNkY0OTRCMTciIHBob3Rvc2hvcDpMZWdhY3lJUFRDRGlnZXN0PSJDRENGRkE3REE4QzdCRTA5MDU3MDc2QUVBRjA1QzM0RSIgcGhvdG9zaG9wOkNvbG9yTW9kZT0iMyIgcGhvdG9zaG9wOklDQ1Byb2ZpbGU9InNSR0IgSUVDNjE5NjYtMi4xIj4gPHhtcE1NOkhpc3Rvcnk+IDxyZGY6U2VxPiA8cmRmOmxpIHN0RXZ0OmFjdGlvbj0iY3JlYXRlZCIgc3RFdnQ6aW5zdGFuY2VJRD0ieG1wLmlpZDpGQkMyOTkzMUFEMERFNTExOEQxNUU0ODA2RjQ5NEIxNyIgc3RFdnQ6d2hlbj0iMjAxNS0wNi0wOFQxMzowNzoyMCswNTozMCIgc3RFdnQ6c29mdHdhcmVBZ2VudD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoV2luZG93cykiLz4gPHJkZjpsaSBzdEV2dDphY3Rpb249InNhdmVkIiBzdEV2dDppbnN0YW5jZUlEPSJ4bXAuaWlkOkZFQzI5OTMxQUQwREU1MTE4RDE1RTQ4MDZGNDk0QjE3IiBzdEV2dDp3aGVuPSIyMDE1LTA2LTA4VDEzOjU4OjAyKzA1OjMwIiBzdEV2dDpzb2Z0d2FyZUFnZW50PSJBZG9iZSBQaG90b3Nob3AgQ1M2IChXaW5kb3dzKSIgc3RFdnQ6Y2hhbmdlZD0iLyIvPiA8cmRmOmxpIHN0RXZ0OmFjdGlvbj0ic2F2ZWQiIHN0RXZ0Omluc3RhbmNlSUQ9InhtcC5paWQ6NkQ0NjI2QTIzMDBGRTUxMTk5ODk5MDk1QUFGODE4MTciIHN0RXZ0OndoZW49IjIwMTUtMDYtMTBUMTA6NTU6MDMrMDU6MzAiIHN0RXZ0OnNvZnR3YXJlQWdlbnQ9IkFkb2JlIFBob3Rvc2hvcCBDUzYgKFdpbmRvd3MpIiBzdEV2dDpjaGFuZ2VkPSIvIi8+IDxyZGY6bGkgc3RFdnQ6YWN0aW9uPSJjb252ZXJ0ZWQiIHN0RXZ0OnBhcmFtZXRlcnM9ImZyb20gYXBwbGljYXRpb24vdm5kLmFkb2JlLnBob3Rvc2hvcCB0byBpbWFnZS9qcGVnIi8+IDxyZGY6bGkgc3RFdnQ6YWN0aW9uPSJkZXJpdmVkIiBzdEV2dDpwYXJhbWV0ZXJzPSJjb252ZXJ0ZWQgZnJvbSBhcHBsaWNhdGlvbi92bmQuYWRvYmUucGhvdG9zaG9wIHRvIGltYWdlL2pwZWciLz4gPHJkZjpsaSBzdEV2dDphY3Rpb249InNhdmVkIiBzdEV2dDppbnN0YW5jZUlEPSJ4bXAuaWlkOjZFNDYyNkEyMzAwRkU1MTE5OTg5OTA5NUFBRjgxODE3IiBzdEV2dDp3aGVuPSIyMDE1LTA2LTEwVDEwOjU1OjAzKzA1OjMwIiBzdEV2dDpzb2Z0d2FyZUFnZW50PSJBZG9iZSBQaG90b3Nob3AgQ1M2IChXaW5kb3dzKSIgc3RFdnQ6Y2hhbmdlZD0iLyIvPiA8cmRmOmxpIHN0RXZ0OmFjdGlvbj0ic2F2ZWQiIHN0RXZ0Omluc3RhbmNlSUQ9InhtcC5paWQ6NzA0NjI2QTIzMDBGRTUxMTk5ODk5MDk1QUFGODE4MTciIHN0RXZ0OndoZW49IjIwMTUtMDYtMTBUMTA6NTU6MzArMDU6MzAiIHN0RXZ0OnNvZnR3YXJlQWdlbnQ9IkFkb2JlIFBob3Rvc2hvcCBDUzYgKFdpbmRvd3MpIiBzdEV2dDpjaGFuZ2VkPSIvIi8+IDwvcmRmOlNlcT4gPC94bXBNTTpIaXN0b3J5PiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo2RDQ2MjZBMjMwMEZFNTExOTk4OTkwOTVBQUY4MTgxNyIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpGQkMyOTkzMUFEMERFNTExOEQxNUU0ODA2RjQ5NEIxNyIgc3RSZWY6b3JpZ2luYWxEb2N1bWVudElEPSJ4bXAuZGlkOkZCQzI5OTMxQUQwREU1MTE4RDE1RTQ4MDZGNDk0QjE3Ii8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAg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yOcp8vLXxZTLPBjqzK1dHhYoKCekeaioaMvL55obGWMKGJOn3XunGb4u7uj+MtD8moctjanAVWflxtTtqOGYZihwkecrdqjc8s+swSY87npFoygUMrSqxNvfuvdGcwfwt6WzOT6t68j7M7MTs3uDpfF9vbXyy7L29N1rjKTJ7cyWXSn3LWUu4KvOY6ngrMJUwySmMRoNF3ubn3XumTbG1PijN8bt59zUHTG+915jr3cW0NoZ/Gbn7ZqMdHU1m6KHxSbhp6jaO36WGGhpssdEETRgS8amH6G917quP37r3Xvfuvde9+691737r3Xvfuvde9+691737r3Xvfuvde9+691737r3Xvfuvde9+691737r3Xvfuvdf/9EeVtqGskLcaiFDEC/JC61DkD8XF/6+/de6t07A6r6uyHWm826P6P617Z6vx3W1Pldo9lbB389V33tndFJiqSsrdzdp7YymUStnxsOUNUKzFU+NIigC2CLYRe63Q+nRmuzcZtreWX7G6npsj1Nkh2Z8a13T0z0TS9d4nbm5aDeFRtimzFLvbHdhUuzMbhoDRVGJyFWlI2RqHfTcCGNdK+610EFRm99Vm8+oc/tHr6j7QxncHwD2/iex9n0W5V2hubLYnasske6m2bnqXx5KfdUJemSCjpkqaiddaGLTGske+r/9A9L/AKiwNVsfcnXG6MBnO2do43e3Rnf20dm9S94VUS7s60rtr1e3Nw0dZg3EGKqqja9dlsRA9MamKJ42WKzt5VC66p004XtfoPE4CTG4DdW19vbY+U2yfkL2fvHG5fOUGMptlbr3Rsbae1Y9l1DnJRrTTvuaizUdGhaE+NykSm6sPde6QOG78+NGyMP0r0duuryG5MJm/jxjusOyd17X3pj63rvax7Emkzm6myGJxOLrquv3Pt7c6JJ91FPHJRRtdSGMyt7r3SA/2dfGdeRfFbam0+xKzdewdh4WbYneu26PbdVHh90bWxua/g1LOlHunC05yseQ2dUSyw06sPGyiORkY6h7r3RWYu7evNvbF+WXVu3cHnqnaPdG6dqZfrSV4KPF/wB1qTaG88puCiXK49cpXxwiTFVMNLogaUsIwWZbBffuvdFJ9+691737r3Xvfuvde9+6912qliFUFmYhVVQSWJIAAAFySffuvdKXcOy947RWgfde09zbYTKwGoxbbhwWUwq5KmUh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',
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'value' => 'http://localhost/sbismart',
        'format' => NULL,
        'safe_value' => 'http://localhost/sbismart',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-02-10 11:13:53 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Return on Savings Calculator',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '00d65f96-bc73-4e7e-b500-7afce14c7639',
  'type' => 'tools',
  'language' => 'und',
  'created' => 1353390091,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3268e83e-5e23-4eca-95b4-76d606ed2ad5',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<?php global $base_url; ?>
<script language="javascript">AC_FL_RunContent = 0;</script>
<script src="<?php echo $base_url;?>/sites/default/files/tools/AC_RunActiveContent.js" language="javascript">
</script> <script language="javascript">
	if (AC_FL_RunContent == 0) {
		alert("This page requires AC_RunActiveContent.js.");
	} else {
		AC_FL_RunContent(
			\'codebase\', \'http://download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=9,0,0,0\',
			\'width\', \'495\',
			\'height\', \'689\',
			\'src\', \'return_savings\',
			\'quality\', \'high\',
			\'pluginspage\', \'http://www.macromedia.com/go/getflashplayer\',
			\'align\', \'middle\',
			\'play\', \'true\',
			\'loop\', \'true\',
			\'scale\', \'showall\',
			\'wmode\', \'window\',
			\'devicefont\', \'false\',
			\'id\', \'return_savings\',
			\'bgcolor\', \'#ffffff\',
			\'name\', \'return_savings\',
			\'menu\', \'true\',
			\'allowFullScreen\', \'false\',
			\'allowScriptAccess\',\'sameDomain\',
			\'movie\', \'<?php echo $base_url;?>/sites/default/files/tools/return_savings\',
			\'salign\', \'\'
			); //end AC code
	}
swfobject.embedSWF("<?php echo $base_url;?>/sites/default/files/tools/return_savings.swf", "myContent", "300", "120", "9.0.0");
</script>
<div id="myContent"></div>',
        'summary' => '',
        'format' => 'php_code',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2012-11-20 11:11:31 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Centerscheme Form',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0a5bdf83-2f48-4d5b-b8b3-be5e4b8f786e',
  'type' => 'webform',
  'language' => 'und',
  'created' => 1445322742,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '332a5629-0488-46c4-a248-82c5202e53a6',
  'revision_uid' => 1,
  'field_body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'webform' => array(
    'nid' => 18,
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      1 => array(
        'nid' => 18,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'info_msg',
        'name' => 'info_msg',
        'type' => 'markup',
        'value' => '<h6 class="info-msg">Dear Visitor! The scheme is available to registered users only!</h6><div class="msg_title">Please leave your details here if you wish to subscribe for the scheme!</div>',
        'extra' => array(
          'conditional_operator' => '=',
          'format' => 5,
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
          'display_on' => 'form',
        ),
        'required' => 0,
        'weight' => 0,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 18,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'scheme_form',
        'name' => 'scheme_form',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'private' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'conditional_operator' => '=',
          'description' => '',
          'conditional_component' => '',
          'conditional_values' => '',
          'description_above' => FALSE,
        ),
        'required' => 0,
        'weight' => 1,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-10-20 12:02:22 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Retirement Savings Calculator',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd66d9f9d-befc-499e-917e-51655195eb3f',
  'type' => 'tools',
  'language' => 'und',
  'created' => 1363870681,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3d7ba268-7391-4e97-8191-ca758778d0b4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<?php global $base_url; ?>
<p style="text-align: left"><embed width="487" height="729" type="application/x-shockwave-flash" play="true" loop="true" menu="true" src="<?php echo $base_url ?>/sites/default/files/tools/retirement.swf" pluginspage="http://www.macromedia.com/go/getflashplayer"></embed>&nbsp;</p>
',
        'summary' => '',
        'format' => 'php_code',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-03-21 18:28:01 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Notice',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'de20d4fb-a8b9-2374-4522-aa4c63509b9c',
  'type' => 'regularity_corner',
  'language' => 'und',
  'created' => 1459504037,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '61dc7ce4-6b12-bc24-9dd6-51be3036bd65',
  'revision_uid' => 1,
  'field_upload_file' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Securities Transaction Tax.pdf',
        'uri' => 'public://regulation/Securities Transaction Tax.pdf',
        'filemime' => 'application/pdf',
        'filesize' => 48985,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'default',
        'uuid' => '00004d1f-9f9f-9e44-0522-7ece1d37adf2',
        'rdf_mapping' => array(),
        'display' => 1,
        'description' => 'Securities Transaction Tax',
        'uuid_features_file_data' => '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ZNXi2gN8/g/goOXhCmVuZHN0cmVhbQplbmRvYmoKMjkgMCBvYmoKMTMxMTIKZW5kb2JqCjEzIDAgb2JqCjw8L0Jhc2VGb250L1NXSFVXSStUaW1lcy1Cb2xkL0ZvbnREZXNjcmlwdG9yIDEyIDAgUi9UeXBlL0ZvbnQKL0ZpcnN0Q2hhciAzMi9MYXN0Q2hhciAxMjAvV2lkdGhzWwoyNTAgMCAwIDAgMCAwIDAgMCAwIDAgMCAwIDAgMCAyNTAgMAo1MDAgNTAwIDUwMCAwIDAgMCAwIDUwMCAwIDAgMzMzIDAgMCAwIDAgMAowIDcyMiAwIDcyMiA3MjIgNjY3IDYxMSA3NzggNzc4IDM4OSAwIDc3OCA2NjcgOTQ0IDcyMiA3NzgKNjExIDAgNzIyIDU1NiA2NjcgNzIyIDAgMCA3MjIgMCAwIDAgMCAwIDAgMAowIDUwMCA1NTYgNDQ0IDU1NiA0NDQgMzMzIDUwMCA1NTYgMjc4IDAgNTU2IDI3OCA4MzMgNTU2IDUwMAo1NTYgMCA0NDQgMzg5IDMzMyA1NTYgMCA3MjIgNTAwXQovRW5jb2RpbmcvV2luQW5zaUVuY29kaW5nL1N1YnR5cGUvVHlwZTE+PgplbmRvYmoKMTUgMCBvYmoKPDwvQmFzZUZvbnQvUFFMTU1OK1RpbWVzLVJvbWFuL0ZvbnREZXNjcmlwdG9yIDE0IDAgUi9UeXBlL0ZvbnQKL0ZpcnN0Q2hhciAzMi9MYXN0Q2hhciAxNTAvV2lkdGhzWwoyNTAgMCAwIDAgMCAwIDc3OCAwIDMzMyAzMzMgMCAwIDI1MCAzMzMgMjUwIDI3OAo1MDAgNTAwIDUwMCA1MDAgNTAwIDUwMCA1MDAgNTAwIDUwMCA1MDAgMjc4IDI3OCAwIDAgMCAwCjkyMSA3MjIgNjY3IDY2NyA3MjIgNjExIDU1NiAwIDAgMzMzIDM4OSAwIDAgODg5IDcyMiAwCjU1NiAwIDY2NyA1NTYgNjExIDAgNzIyIDAgNzIyIDcyMiAwIDAgMCAwIDAgMAowIDQ0NCA1MDAgNDQ0IDUwMCA0NDQgMzMzIDUwMCA1MDAgMjc4IDI3OCA1MDAgMjc4IDc3OCA1MDAgNTAwCjUwMCA1MDAgMzMzIDM4OSAyNzggNTAwIDUwMCA3MjIgNTAwIDUwMCA0NDQgMCAwIDAgMCAwCjAgMCAwIDAgMCAwIDAgMCAwIDAgMCAwIDAgMCAwIDAKMCAwIDAgMCAwIDAgNTAwXQovRW5jb2RpbmcvV2luQW5zaUVuY29kaW5nL1N1YnR5cGUvVHlwZTE+PgplbmRvYmoKMzAgMCBvYmoKPDwvRmlsdGVyL0ZsYXRlRGVjb2RlL0xlbmd0aCAzMSAwIFI+PnN0cmVhbQp4nF2SQW6DMBBF95yCG2TGJiaRotmkmyxaVWovQIypWAQQIYvevvNnmi66+EhP2Hie+bvz5eUyjVu9e1/n/FG2ehinfi33+bHmUl/L1zhVHOp+zNsv2TPfuqXanV+75fN7KbUuKEPFviLPfbkvXS5rN32V6kQkp2GQqkz9v1cx+Y7r8FzK4qF9EMUgHkp7YBQPpRbYiIdSA9yLh0IBJvFQIGArHmoG4EE8lBLwKB5KR2AnHkoReBUPxQ6YxUONTdWLh9oDsIiHkuEgHkqsyHoXiCKGZHVl98WQrK7svhmormy+Lc5ldWXzDfZWXdl8G9wVqyubb2uoruy+V6C6svm2mJnVlc23gSCrK7svLofVlc039UB1ZfNtbUh1ZRMMEGSVYxNssFgv26J7MUZQOQsxDgoqF0ww4pcFlQsmGPHloHLBBCOGDCoXzCiytedZExQJ/UP93rpbqfNjXcu0WUmtlKjjOJW/Hi/zgl21pvoBmEu+aQplbmRzdHJlYW0KZW5kb2JqCjMxIDAgb2JqCjM3MQplbmRvYmoKOSAwIG9iago8PC9CYXNlRm9udC9MUERKUlYrVFQxNUN0MDAvRm9udERlc2NyaXB0b3IgOCAwIFIvVG9Vbmljb2RlIDMwIDAgUi9UeXBlL0ZvbnQKL0ZpcnN0Q2hhciAxL0xhc3RDaGFyIDM4L1dpZHRoc1sgNTQzIDQ5OCA0NzEgNTI1IDI1MiAyMjYgNjYyIDMwNSAyMjkgNDIzIDI2OCA0ODggNDMzIDUyNSA0NzkKNTI1IDUxNyAyMjkgMzk1IDI1MCA1NDQgMzQ5IDUyMCA1MjUgNTMzIDUyNyA3OTkgNTI1IDMwMyAzMDMgODU1CjUyNSA0OTggNTA3IDUwNyA1MDcgNTA3IDUwN10KL0VuY29kaW5nIDMyIDAgUi9TdWJ0eXBlL1RydWVUeXBlPj4KZW5kb2JqCjMyIDAgb2JqCjw8L1R5cGUvRW5jb2RpbmcvQmFzZUVuY29kaW5nL1dpbkFuc2lFbmNvZGluZy9EaWZmZXJlbmNlc1sKMS9nOTAvZzI4Ni9nMzM2L2cyODIvZzg1Ni9nMy9nNzUvZzI5Ni9nMzQ5L2cyNzIvZzg1NS9nMjgvZzQ1NC9nMzQ2L2cyNTgvZzM3NC9nODcvZzM2Ny9nNDYwL2c4NTMvZzE3L2czOTYvZzYwL2c0MzcvZzE4L2czODEvZzM3My9nMzkzL2c4OTQvZzg5NS9nNjgvZzI3MS9nODg0L2cxMDA4L2cxMDA0L2cxMDA5L2cxMDA1L2cxMDA2XT4+CmVuZG9iagoxMiAwIG9iago8PC9UeXBlL0ZvbnREZXNjcmlwdG9yL0ZvbnROYW1lL1NXSFVXSStUaW1lcy1Cb2xkL0ZvbnRCQm94WzAgLTIwNiA5MjEgNjkyXS9GbGFncyA0Ci9Bc2NlbnQgNjkyCi9DYXBIZWlnaHQgNjkyCi9EZXNjZW50IC0yMDYKL0l0YWxpY0FuZ2xlIDAKL1N0ZW1WIDEzOAovTWlzc2luZ1dpZHRoIDI1MAovQ2hhclNldCgvdHdvL0wvQS9uL2MvWC9NL28vZC9OL0MvcC9lL08vRC9mL1AvRS9yL2cvc2V2ZW4vRi9zL2gvUi9HL3QvaS9TL0gvdS9jb2xvbi9UL0kvay9VL3cvbC9hL0sveC9tL2Ivc3BhY2UvcGVyaW9kL3plcm8vb25lKS9Gb250RmlsZTMgMjQgMCBSPj4KZW5kb2JqCjE0IDAgb2JqCjw8L1R5cGUvRm9udERlc2NyaXB0b3IvRm9udE5hbWUvUFFMTU1OK1RpbWVzLVJvbWFuL0ZvbnRCQm94Wy03MCAtMjE4IDg2MyA2ODhdL0ZsYWdzIDQKL0FzY2VudCA2ODgKL0NhcEhlaWdodCA2ODgKL0Rlc2NlbnQgLTIxOAovSXRhbGljQW5nbGUgMAovU3RlbVYgMTI5Ci9NaXNzaW5nV2lkdGggMjUwCi9DaGFyU2V0KC90d28vQS95L24vYy9YL3RocmVlL00vQi96L28vZC9ZL2ZvdXIvTi9DL3AvZS9hdC9maXZlL0QvcS9mL3NpeC9QL0Uvci9nL3NldmVuL0Yvcy9oL2VpZ2h0L1IvZW5kYXNoL3QvaS9uaW5lL1MvdS9qL2NvbG9uL1QvSS92L2svc2VtaWNvbG9uL0ovdy9sL2EvVi94L20vYi9wYXJlbmxlZnQvcGFyZW5yaWdodC9zcGFjZS9jb21tYS9oeXBoZW4vcGVyaW9kL3NsYXNoL3plcm8vb25lL2FtcGVyc2FuZCkvRm9udEZpbGUzIDI2IDAgUj4+CmVuZG9iago4IDAgb2JqCjw8L1R5cGUvRm9udERlc2NyaXB0b3IvRm9udE5hbWUvTFBESlJWK1RUMTVDdDAwL0ZvbnRCQm94Wy00IC0xNzggNzcwIDY5Ml0vRmxhZ3MgNAovQXNjZW50IDY5MgovQ2FwSGVpZ2h0IDY5MgovRGVzY2VudCAtMTc4Ci9JdGFsaWNBbmdsZSAwCi9TdGVtViAxMTUKL01pc3NpbmdXaWR0aCA1MDYKL0ZvbnRGaWxlMiAyOCAwIFI+PgplbmRvYmoKMiAwIG9iago8PC9Qcm9kdWNlcihHUEwgR2hvc3RzY3JpcHQgOC4xNSkKL0NyZWF0aW9uRGF0ZShEOjIwMTIwNjEyMTcyMTEyKQovTW9kRGF0ZShEOjIwMTIwNjEyMTcyMTEyKQovVGl0bGUoRkFUQVgyMDk5MCkKL0NyZWF0b3IoUFNjcmlwdDUuZGxsIFZlcnNpb24gNS4yLjIpCi9BdXRob3IocHZlaWdhcyk+PmVuZG9iagp4cmVmCjAgMzMKMDAwMDAwMDAwMCA2NTUzNSBmIAowMDAwMDA5NDY0IDAwMDAwIG4gCjAwMDAwNDgwMjEgMDAwMDAgbiAKMDAwMDAwOTM4OSAwMDAwMCBuIAowMDAwMDA5MDQzIDAwMDAwIG4gCjAwMDAwMDAwMTUgMDAwMDAgbiAKMDAwMDAwNTc3NCAwMDAwMCBuIAowMDAwMDA5NTEyIDAwMDAwIG4gCjAwMDAwNDc4MTkgMDAwMDAgbiAKMDAwMDA0NjQ2NyAwMDAwMCBuIAowMDAwMDEzNTQ2IDAwMDAwIG4gCjAwMDAwMDk2MjYgMDAwMDAgbiAKMDAwMDA0NzA0NSAwMDAwMCBuIAowMDAwMDQ1MDUyIDAwMDAwIG4gCjAwMDAwNDczNzcgMDAwMDAgbiAKMDAwMDA0NTQ4MCAwMDAwMCBuIAowMDAwMDA5NTUzIDAwMDAwIG4gCjAwMDAwMDk1ODMgMDAwMDAgbiAKMDAwMDAyMDEwNyAwMDAwMCBuIAowMDAwMDA5MjI3IDAwMDAwIG4gCjAwMDAwMDU3OTQgMDAwMDAgbiAKMDAwMDAwOTAyMiAwMDAwMCBuIAowMDAwMDIwMTU5IDAwMDAwIG4gCjAwMDAwMjAxODkgMDAwMDAgbiAKMDAwMDAyMDI0MSAwMDAwMCBuIAowMDAwMDI1MDcyIDAwMDAwIG4gCjAwMDAwMjUwOTMgMDAwMDAgbiAKMDAwMDAzMTgxMiAwMDAwMCBuIAowMDAwMDMxODMzIDAwMDAwIG4gCjAwMDAwNDUwMzAgMDAwMDAgbiAKMDAwMDA0NjAwNSAwMDAwMCBuIAowMDAwMDQ2NDQ3IDAwMDAwIG4gCjAwMDAwNDY3ODAgMDAwMDAgbiAKdHJhaWxlcgo8PCAvU2l6ZSAzMyAvUm9vdCAxIDAgUiAvSW5mbyAyIDAgUgovSUQgWyjZ8u1Rpk05ipuKiWa0pF2PKSjZ8u1Rpk05ipuKiWa0pF2PKV0KPj4Kc3RhcnR4cmVmCjQ4MjAzCiUlRU9GCg==',
      ),
    ),
  ),
  'field_tab' => array(
    'und' => array(
      0 => array(
        'value' => 'notice',
      ),
    ),
  ),
  'field_select_category' => array(),
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Download Ref.No.: NSE/FATAX/20990</p>

<p>Circular Ref.No.: 1/2012</p>

<p>Date : June 12, 2012</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Download Ref.No.: NSE/FATAX/20990</p>
<p>Circular Ref.No.: 1/2012</p>
<p>Date : June 12, 2012</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_order' => array(
    'und' => array(
      0 => array(
        'value' => 3,
        'format' => NULL,
        'safe_value' => 3,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-04-01 15:17:17 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Human Life Value Calculator',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '72bde2b5-b45c-4d9a-9c40-390039fbcf40',
  'type' => 'tools',
  'language' => 'und',
  'created' => 1363703861,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6865b355-271c-4f49-a9a3-86546e1e47b9',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<?php
global $base_url;
?>
<script language="javascript">AC_FL_RunContent = 0;</script>
<script src="<?php echo $base_url;?>/sites/default/files/tools/AC_RunActiveContent.js" language="javascript">
</script> <script language="javascript">
	if (AC_FL_RunContent == 0) {
		alert("This page requires AC_RunActiveContent.js.");
	} else {
		AC_FL_RunContent(
			\'codebase\', \'http://download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=9,0,0,0\',
			\'width\', \'495\',
			\'height\', \'689\',
			\'src\', \'human_life\',
			\'quality\', \'high\',
			\'pluginspage\', \'http://www.macromedia.com/go/getflashplayer\',
			\'align\', \'middle\',
			\'play\', \'true\',
			\'loop\', \'true\',
			\'scale\', \'showall\',
			\'wmode\', \'window\',
			\'devicefont\', \'false\',
			\'id\', \'human_life\',
			\'bgcolor\', \'#ffffff\',
			\'name\', \'human_life\',
			\'menu\', \'true\',
			\'allowFullScreen\', \'false\',
			\'allowScriptAccess\',\'sameDomain\',
			\'movie\', \'<?php echo $base_url;?>/sites/default/files/tools/human_life\',
			\'salign\', \'\'
			); //end AC code
	}
swfobject.embedSWF("<?php echo $base_url;?>/sites/default/files/tools/human_life.swf", "myContent", "300", "120", "9.0.0");
</script>
<div id="myContent"></div>
	
',
        'summary' => '',
        'format' => 'php_code',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-03-19 20:07:41 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Policy for Dormant / Inactive Account',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e33959f5-f3b5-e3c4-79b4-fa2fbe698ccb',
  'type' => 'regularity_corner',
  'language' => 'und',
  'created' => 1459754504,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7115fdc6-02b2-04c4-39e6-60984db71dd2',
  'revision_uid' => 1,
  'field_upload_file' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'FAQs_on_Trade_Alerts_Facility_for_Investors.pdf',
        'uri' => 'public://regulation/FAQs_on_Trade_Alerts_Facility_for_Investors.pdf',
        'filemime' => 'application/pdf',
        'filesize' => 74213,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'default',
        'uuid' => 'a53798dc-e3e1-5954-cd43-58763fe67acb',
        'rdf_mapping' => array(),
        'display' => 1,
        'description' => 'FAQ’s on Trade Facility for Investors',
        'uuid_features_file_data' => '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MwozMzUgODk0IDI1MiA1MDcgNTA3IDMwNiA1MDcgNTA3IDUwNyA1MDcgNTA3IDM4NiA1MDcgNTE3IDQ3MSAzMDUKNTI1IDQzMyAzOTUgNzk5XQovRW5jb2RpbmcgNDggMCBSL1N1YnR5cGUvVHJ1ZVR5cGU+PgplbmRvYmoKNDggMCBvYmoKPDwvVHlwZS9FbmNvZGluZy9CYXNlRW5jb2RpbmcvV2luQW5zaUVuY29kaW5nL0RpZmZlcmVuY2VzWwoxL2czL2czOC9nMzgxL2czOTYvZzI1OC9nMzc0L2c0NTUvZzM5NS9nNDM3L2cyODYvZzM0OS9nNDAwL2czOTMvZzM2Ny9nMjcyL2c0MTAvZzkyMy9nODU2L2cxMDA0L2cxMDA2L2c4ODIvZzEwMTAvZzEwMDkvZzEwMTMvZzEwMTIvZzEwMDcvZzg3Ni9nMTAwNS9nODcvZzMzNi9nMjk2L2cyNzEvZzQ1NC9nNDYwL2czNzNdPj4KZW5kb2JqCjIwIDAgb2JqCjw8L0Jhc2VGb250L01XVU5JUCtTeW1ib2wvRm9udERlc2NyaXB0b3IgMTkgMCBSL1R5cGUvRm9udAovRmlyc3RDaGFyIDE4My9MYXN0Q2hhciAxODMvV2lkdGhzWyA0NjBdCi9FbmNvZGluZyA0OSAwIFIvU3VidHlwZS9UeXBlMT4+CmVuZG9iago0OSAwIG9iago8PC9UeXBlL0VuY29kaW5nL0Jhc2VFbmNvZGluZy9XaW5BbnNpRW5jb2RpbmcvRGlmZmVyZW5jZXNbCjE4My9idWxsZXRdPj4KZW5kb2JqCjUwIDAgb2JqCjw8L0ZpbHRlci9GbGF0ZURlY29kZS9MZW5ndGggNTEgMCBSPj5zdHJlYW0KeJxdjrEOwyAMRHe+wn8ApCvKki4ZWlVqf4AYEzHEIEKG/n0DTTp0OEvW3emeHMbryKGAfOSITyrgA7tMa9wyEkw0Bxa6AxewHF+7uNgk5HCz6fVOBHuAvNDfBEZHa7JI2fJMwijVG+97Qez+rKMw+TOpe6O6XeqiW/50arUu1sG7XQhwy5m4NKyGUQEC0488xVRbsEt8ALy1TZoKZW5kc3RyZWFtCmVuZG9iago1MSAwIG9iagoxNTUKZW5kb2JqCjEyIDAgb2JqCjw8L0Jhc2VGb250L01VSE9TWStUVDE1QnQwMC9Gb250RGVzY3JpcHRvciAxMSAwIFIvVG9Vbmljb2RlIDUwIDAgUi9UeXBlL0ZvbnQKL0ZpcnN0Q2hhciAxL0xhc3RDaGFyIDIvV2lkdGhzWyA1MDcgNTA3XQovRW5jb2RpbmcgNTIgMCBSL1N1YnR5cGUvVHJ1ZVR5cGU+PgplbmRvYmoKNTIgMCBvYmoKPDwvVHlwZS9FbmNvZGluZy9CYXNlRW5jb2RpbmcvV2luQW5zaUVuY29kaW5nL0RpZmZlcmVuY2VzWwoxL2cxMDA1L2cxMDA2XT4+CmVuZG9iagoyMiAwIG9iago8PC9CYXNlRm9udC9TTkRBQk4rSGVsdmV0aWNhL0ZvbnREZXNjcmlwdG9yIDIxIDAgUi9UeXBlL0ZvbnQKL0ZpcnN0Q2hhciAzMi9MYXN0Q2hhciAzMi9XaWR0aHNbCjI3OF0KL0VuY29kaW5nL1dpbkFuc2lFbmNvZGluZy9TdWJ0eXBlL1R5cGUxPj4KZW5kb2JqCjE0IDAgb2JqCjw8L0Jhc2VGb250L0ZUQVNORStUaW1lcy1Cb2xkL0ZvbnREZXNjcmlwdG9yIDEzIDAgUi9UeXBlL0ZvbnQKL0ZpcnN0Q2hhciAzMi9MYXN0Q2hhciAxMjEvV2lkdGhzWwoyNTAgMCAwIDAgMCAwIDgzMyAwIDMzMyAzMzMgMCAwIDI1MCAwIDI1MCAyNzgKNTAwIDUwMCA1MDAgNTAwIDUwMCA1MDAgNTAwIDUwMCA1MDAgNTAwIDMzMyAwIDAgMCAwIDUwMAowIDcyMiAwIDcyMiAwIDY2NyA2MTEgMCAwIDM4OSAwIDAgMCA5NDQgNzIyIDAKNjExIDc3OCAwIDU1NiA2NjcgMCA3MjIgMTAwMCAwIDAgMCAwIDAgMCAwIDAKMCA1MDAgNTU2IDQ0NCA1NTYgNDQ0IDMzMyA1MDAgNTU2IDI3OCAwIDU1NiAyNzggODMzIDU1NiA1MDAKNTU2IDAgNDQ0IDM4OSAzMzMgNTU2IDUwMCA3MjIgMCA1MDBdCi9FbmNvZGluZy9XaW5BbnNpRW5jb2RpbmcvU3VidHlwZS9UeXBlMT4+CmVuZG9iagoxNiAwIG9iago8PC9CYXNlRm9udC9TTkRBQk4rSGVsdmV0aWNhLUJvbGQvRm9udERlc2NyaXB0b3IgMTUgMCBSL1R5cGUvRm9udAovRmlyc3RDaGFyIDMyL0xhc3RDaGFyIDMyL1dpZHRoc1sKMjc4XQovRW5jb2RpbmcvV2luQW5zaUVuY29kaW5nL1N1YnR5cGUvVHlwZTE+PgplbmRvYmoKMTggMCBvYmoKPDwvQmFzZUZvbnQvUE9VQ1dPK1RpbWVzLVJvbWFuL0ZvbnREZXNjcmlwdG9yIDE3IDAgUi9UeXBlL0ZvbnQKL0ZpcnN0Q2hhciAzMi9MYXN0Q2hhciAxNDYvV2lkdGhzWwoyNTAgMCAwIDAgMCAwIDc3OCAwIDMzMyAzMzMgMCAwIDI1MCAzMzMgMjUwIDI3OAo1MDAgNTAwIDUwMCA1MDAgNTAwIDUwMCA1MDAgNTAwIDUwMCA1MDAgMjc4IDI3OCAwIDAgMCAwCjkyMSA3MjIgNjY3IDY2NyA3MjIgNjExIDU1NiAwIDcyMiAzMzMgMCAwIDYxMSA4ODkgNzIyIDcyMgo1NTYgMCA2NjcgNTU2IDYxMSAwIDAgOTQ0IDAgNzIyIDAgMCAwIDAgMCAwCjAgNDQ0IDUwMCA0NDQgNTAwIDQ0NCAzMzMgNTAwIDUwMCAyNzggMCA1MDAgMjc4IDc3OCA1MDAgNTAwCjUwMCA1MDAgMzMzIDM4OSAyNzggNTAwIDUwMCA3MjIgNTAwIDUwMCA0NDQgMCAwIDAgMCAwCjAgMCAwIDAgMCAwIDAgMCAwIDAgMCAwIDAgMCAwIDAKMCAwIDMzM10KL0VuY29kaW5nL1dpbkFuc2lFbmNvZGluZy9TdWJ0eXBlL1R5cGUxPj4KZW5kb2JqCjkgMCBvYmoKPDwvVHlwZS9Gb250RGVzY3JpcHRvci9Gb250TmFtZS9OWEJCVVArVFQxNTl0MDAvRm9udEJCb3hbMCAtMTc4IDgwOCA3MTddL0ZsYWdzIDQKL0FzY2VudCA3MTcKL0NhcEhlaWdodCA3MTcKL0Rlc2NlbnQgLTE3OAovSXRhbGljQW5nbGUgMAovU3RlbVYgMTIxCi9NaXNzaW5nV2lkdGggNTA2Ci9Gb250RmlsZTIgMzIgMCBSPj4KZW5kb2JqCjE5IDAgb2JqCjw8L1R5cGUvRm9udERlc2NyaXB0b3IvRm9udE5hbWUvTVdVTklQK1N5bWJvbC9Gb250QkJveFswIDAgNDEwIDUxOF0vRmxhZ3MgNAovQXNjZW50IDUxOAovQ2FwSGVpZ2h0IDUxOAovRGVzY2VudCAwCi9JdGFsaWNBbmdsZSAwCi9TdGVtViA2MQovTWlzc2luZ1dpZHRoIDI1MAovQ2hhclNldCgvYnVsbGV0KS9Gb250RmlsZTMgMzQgMCBSPj4KZW5kb2JqCjExIDAgb2JqCjw8L1R5cGUvRm9udERlc2NyaXB0b3IvRm9udE5hbWUvTVVIT1NZK1RUMTVCdDAwL0ZvbnRCQm94WzIwIDAgNDgxIDY0M10vRmxhZ3MgNAovQXNjZW50IDY0MwovQ2FwSGVpZ2h0IDY0MwovRGVzY2VudCAwCi9JdGFsaWNBbmdsZSAwCi9TdGVtViA3MgovTWlzc2luZ1dpZHRoIDUwNgovRm9udEZpbGUyIDM2IDAgUj4+CmVuZG9iagoyMSAwIG9iago8PC9UeXBlL0ZvbnREZXNjcmlwdG9yL0ZvbnROYW1lL1NOREFCTitIZWx2ZXRpY2EvRm9udEJCb3hbMCAwIDEwMDAgMTAwMF0vRmxhZ3MgNQovQXNjZW50IDAKL0NhcEhlaWdodCAwCi9EZXNjZW50IDAKL0l0YWxpY0FuZ2xlIDAKL1N0ZW1WIDAKL0F2Z1dpZHRoIDI3OAovTWF4V2lkdGggMjc4Ci9NaXNzaW5nV2lkdGggMjc4Ci9DaGFyU2V0KC9zcGFjZSkvRm9udEZpbGUzIDM4IDAgUj4+CmVuZG9iagoxMyAwIG9iago8PC9UeXBlL0ZvbnREZXNjcmlwdG9yL0ZvbnROYW1lL0ZUQVNORStUaW1lcy1Cb2xkL0ZvbnRCQm94Wy0yNCAtMjA2IDk4MSA2OTRdL0ZsYWdzIDQKL0FzY2VudCA2OTQKL0NhcEhlaWdodCA2OTQKL0Rlc2NlbnQgLTIwNgovSXRhbGljQW5nbGUgMAovU3RlbVYgMTQ3Ci9NaXNzaW5nV2lkdGggMjUwCi9DaGFyU2V0KC90d28vQS95L24vYy90aHJlZS9NL28vZC9xdWVzdGlvbi9mb3VyL04vQy9wL2UvZml2ZS9mL3NpeC9QL0Uvci9nL3NldmVuL1EvRi9zL2gvZWlnaHQvdC9pL25pbmUvUy91L2NvbG9uL1QvSS92L2svdy9sL2EvVi9tL2IvVy9wYXJlbmxlZnQvcGFyZW5yaWdodC9zcGFjZS9jb21tYS9wZXJpb2Qvc2xhc2gvemVyby9vbmUvYW1wZXJzYW5kKS9Gb250RmlsZTMgNDAgMCBSPj4KZW5kb2JqCjE1IDAgb2JqCjw8L1R5cGUvRm9udERlc2NyaXB0b3IvRm9udE5hbWUvU05EQUJOK0hlbHZldGljYS1Cb2xkL0ZvbnRCQm94WzAgMCAxMDAwIDEwMDBdL0ZsYWdzIDUKL0FzY2VudCAwCi9DYXBIZWlnaHQgMAovRGVzY2VudCAwCi9JdGFsaWNBbmdsZSAwCi9TdGVtViAwCi9BdmdXaWR0aCAyNzgKL01heFdpZHRoIDI3OAovTWlzc2luZ1dpZHRoIDI3OAovQ2hhclNldCgvc3BhY2UpL0ZvbnRGaWxlMyA0MiAwIFI+PgplbmRvYmoKMTcgMCBvYmoKPDwvVHlwZS9Gb250RGVzY3JpcHRvci9Gb250TmFtZS9QT1VDV08rVGltZXMtUm9tYW4vRm9udEJCb3hbLTkgLTIxOCA5MzIgNjg4XS9GbGFncyA0Ci9Bc2NlbnQgNjg4Ci9DYXBIZWlnaHQgNjg4Ci9EZXNjZW50IC0yMTgKL0l0YWxpY0FuZ2xlIDAKL1N0ZW1WIDEzOQovTWlzc2luZ1dpZHRoIDI1MAovQ2hhclNldCgvdHdvL0wvQS95L24vYy90aHJlZS9NL0Ivei9vL2QvWS9mb3VyL04vQy9wL2UvYXQvZml2ZS9PL0QvcS9mL3NpeC9QL0Uvci9nL3NldmVuL0Yvcy9oL2VpZ2h0L1IvdC9pL25pbmUvUy9IL3UvY29sb24vVC9JL3Yvay9zZW1pY29sb24vdy9sL2EveC9tL2IvVy9xdW90ZXJpZ2h0L3BhcmVubGVmdC9wYXJlbnJpZ2h0L3NwYWNlL2NvbW1hL2h5cGhlbi9wZXJpb2Qvc2xhc2gvemVyby9vbmUvYW1wZXJzYW5kKS9Gb250RmlsZTMgNDQgMCBSPj4KZW5kb2JqCjIgMCBvYmoKPDwvUHJvZHVjZXIoR1BMIEdob3N0c2NyaXB0IDguMTUpCi9DcmVhdGlvbkRhdGUoRDoyMDE1MDQwMTE2MDI0NCkKL01vZERhdGUoRDoyMDE1MDQwMTE2MDI0NCkKL1RpdGxlKE1pY3Jvc29mdCBXb3JkIC0gRkFRIG9uIFNNUyBhbmQgRW1haWwgRmFjaWxpdHkgZm9yIEludmVzdG9yc19fX0ZpbmFsIF8yX19BUlZJTkRfX19fMjZtYXIyMDE1IF9fX2ZpbmFsIHZlcnNpb24pCi9DcmVhdG9yKFBTY3JpcHQ1LmRsbCBWZXJzaW9uIDUuMi4yKQovQXV0aG9yKGFnb3lhbCk+PmVuZG9iagp4cmVmCjAgNTMKMDAwMDAwMDAwMCA2NTUzNSBmIAowMDAwMDEzNzY0IDAwMDAwIG4gCjAwMDAwNzI3NTEgMDAwMDAgbiAKMDAwMDAxMzY4OSAwMDAwMCBuIAowMDAwMDEzMzE5IDAwMDAwIG4gCjAwMDAwMDAwMTUgMDAwMDAgbiAKMDAwMDAwNjcwOSAwMDAwMCBuIAowMDAwMDEzODEyIDAwMDAwIG4gCjAwMDAwMTM5MTMgMDAwMDAgbiAKMDAwMDA3MDgxMyAwMDAwMCBuIAowMDAwMDY4MjI0IDAwMDAwIG4gCjAwMDAwNzEyMjQgMDAwMDAgbiAKMDAwMDA2OTI2OCAwMDAwMCBuIAowMDAwMDcxNjU3IDAwMDAwIG4gCjAwMDAwNjk2ODggMDAwMDAgbiAKMDAwMDA3MjA2NCAwMDAwMCBuIAowMDAwMDcwMTMzIDAwMDAwIG4gCjAwMDAwNzIzMDYgMDAwMDAgbiAKMDAwMDA3MDI5NiAwMDAwMCBuIAowMDAwMDcxMDE0IDAwMDAwIG4gCjAwMDAwNjg3ODUgMDAwMDAgbiAKMDAwMDA3MTQyMCAwMDAwMCBuIAowMDAwMDY5NTMwIDAwMDAwIG4gCjAwMDAwMTM4NTMgMDAwMDAgbiAKMDAwMDAxMzg4MyAwMDAwMCBuIAowMDAwMDM0ODY0IDAwMDAwIG4gCjAwMDAwMTM1MDMgMDAwMDAgbiAKMDAwMDAwNjcyOSAwMDAwMCBuIAowMDAwMDEzMjk4IDAwMDAwIG4gCjAwMDAwMzQ5NjIgMDAwMDAgbiAKMDAwMDAzNDk5MiAwMDAwMCBuIAowMDAwMDM1MDIyIDAwMDAwIG4gCjAwMDAwMzUxMjAgMDAwMDAgbiAKMDAwMDA0ODY0OSAwMDAwMCBuIAowMDAwMDQ4NjcxIDAwMDAwIG4gCjAwMDAwNDkxODEgMDAwMDAgbiAKMDAwMDA0OTIwMSAwMDAwMCBuIAowMDAwMDU0ODc0IDAwMDAwIG4gCjAwMDAwNTQ4OTUgMDAwMDAgbiAKMDAwMDA1NTIxOCAwMDAwMCBuIAowMDAwMDU1MjM4IDAwMDAwIG4gCjAwMDAwNjA2NDYgMDAwMDAgbiAKMDAwMDA2MDY2NyAwMDAwMCBuIAowMDAwMDYwOTk0IDAwMDAwIG4gCjAwMDAwNjEwMTQgMDAwMDAgbiAKMDAwMDA2Nzc0NyAwMDAwMCBuIAowMDAwMDY3NzY4IDAwMDAwIG4gCjAwMDAwNjgyMDQgMDAwMDAgbiAKMDAwMDA2ODUyNiAwMDAwMCBuIAowMDAwMDY4OTMzIDAwMDAwIG4gCjAwMDAwNjkwMjIgMDAwMDAgbiAKMDAwMDA2OTI0OCAwMDAwMCBuIAowMDAwMDY5NDM4IDAwMDAwIG4gCnRyYWlsZXIKPDwgL1NpemUgNTMgL1Jvb3QgMSAwIFIgL0luZm8gMiAwIFIKL0lEIFsoS2Ykf9x2RgGBkT9tV6DzoikoS2Ykf9x2RgGBkT9tV6DzoildCj4+CnN0YXJ0eHJlZgo3MzAzMQolJUVPRgo=',
      ),
    ),
  ),
  'field_tab' => array(
    'und' => array(
      0 => array(
        'value' => 'regulation',
      ),
    ),
  ),
  'field_select_category' => array(
    'und' => array(
      0 => array(
        'target_id' => 161,
      ),
    ),
  ),
  'body' => array(),
  'field_order' => array(
    'und' => array(
      0 => array(
        'value' => 7,
        'format' => NULL,
        'safe_value' => 7,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-04-04 12:51:44 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Education Savings Calculator',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3191d058-7466-46af-83e3-07fd20c43d68',
  'type' => 'tools',
  'language' => 'und',
  'created' => 1363870182,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '78ebb256-6b4b-4ece-a702-1f15a8c6ff0e',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<?php
global $base_url;
?>
<embed width="487" height="729" type="application/x-shockwave-flash" play="true" loop="true" menu="true" src="<?php echo $base_url ?>/sites/default/files/tools/education.swf" pluginspage="http://www.macromedia.com/go/getflashplayer"></embed><p>&nbsp;</p>',
        'summary' => '',
        'format' => 'php_code',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-03-21 18:19:42 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Series 1: Multiple Diversified Products to grow your Investment',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c4928f9c-169b-48b0-8459-70e7779af5cf',
  'type' => 'smart_insights',
  'language' => 'und',
  'created' => 1455190884,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '97d0ccfa-978d-4f67-893c-4609282ed9c2',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>&nbsp;</p>

<div>Learning about the components of the stock market helps investors understand the market\'s many uses.&nbsp;One of the most important uses of the stock market is to provide large companies with a way to raise capital in exchange for a portion of company ownership. The aggregate effect is that millions of investors help finance economic development as businesses expands and stock appreciates in value.</div>

<div>Arguably, understanding how each component works in this process is important.<br />
<br />
<strong>Equity</strong> ÔÇô an equity investment generally refers to the buying and holding of shares on the stock market by individuals and firms in an anticipation of income from dividends and capital gains as the value of share rises.</div>

<div>&nbsp;</div>

<div><strong>Futures</strong> - Future contracts are also&nbsp;agreements between two parties in which the buyer agrees to buy an underlying asset from the other party (the seller). The delivery of the asset occurs at a later time, but the price is determined at the time of purchase. Future contracts are highly standardized, have deep liquidity in their markets and trade on an exchange.</div>

<div>&nbsp;</div>

<div>There is no default risk because the exchange acts as counterparty, guaranteeing delivery and payment by use of a clearing house to settle gains and losses or mark to market their positions on a daily basis.</div>

<div>An investor can offset his or her future position by engaging in an opposite transaction before the stated maturity of the contract.</div>

<div>&nbsp;</div>

<div><strong>Options - </strong>Options are a type of derivative, which simply means that their value depends on the value of an underlying investment. In most cases, the underlying investment is a stock, but it can also be an <a href="http://www.investorwords.com/2426/index.html">index</a>, a&nbsp;<a href="http://www.investorwords.com/1240/currency.html">currency</a>, a&nbsp;<a href="http://www.investorwords.com/5873/commodities.html">commodity</a>, or any number of other&nbsp;<a href="http://www.investorwords.com/5954/securities.html">securities</a>.</div>

<div>&nbsp;</div>

<div>There are two types of options Call and Put.</div>

<div>Calls are similar to having a long position on stock with the assumption of rise in the stock price.</div>

<div>Puts are similar to having a short position on stock with the assumption of fall in the stock price.</div>

<div>&nbsp;</div>

<div><strong>SIP</strong> - Systematic Investment Plan enables you to build a portfolio over a longer time horizon with small investments at regular intervals reducing the risk of market volatility. You can choose between Quantity based and Amount based SIPs in Stocks, Mutual Funds, ETFs and Gold.</div>

<div>&nbsp;</div>

<div><strong>ETF</strong> - Exchange Traded Fund is a security that tracks an index, a commodity or a sector like an index fund or a sectoral fund but trades like a stock on an exchange.</div>

<div>ETFs enjoy continuous pricing; they can be bought and sold on a stock exchange throughout the trading day. Because ETFs trade like stocks, you can place orders just like with individual stocks - such as&nbsp;<a href="http://www.investopedia.com/terms/l/limitorder.asp">limit orders</a>, stop&nbsp;loss orders, market orders etc.</div>

<div>&nbsp;</div>

<div><strong>Mutual Fund</strong> - Mutual funds make it easy for you to invest in stocks and bonds. The two main advantages of investing your money in mutual funds are 1) you receive professional money management and 2) you are able to truly diversify your holdings with a small sum of money.</div>

<div>&nbsp;</div>

<div><strong>IPO (Initial Public Offer)</strong> - Initial stage of the share in the primary market. A new company gets listed on stock exchange after issue completion and goes public in the secondary market.</div>

<div>&nbsp;</div>

<div><strong>Bonds</strong> ÔÇô is a debt security in a form of Loan, the holder of the loan is the lender (creditor) and the issuer of the bond is the borrower (debtor) and the coupon is the ÔÇÿinterestÔÇÖ. Depending on the terms of the bond borrower is obliged to repay the principal at a later date termed the ÔÇÿmaturity dateÔÇÖ. Interest is usually payable at fixed intervals (semi-annual, annual, and sometimes monthly).</div>

<div>&nbsp;</div>

<div><strong>NCD (Non Convertible Debentures)</strong> - NCD (Non Convertible debenture) is essentially a debt instrument with a fixed tenure that pays a certain rate of interest monthly, quarterly, annually or at the end of the tenure. The money invested is returned either over the tenure of the investment or at the end of the tenure (referred to as bullet payment). These are certificates issued by companies to raise funds through the public issue. These instruments cannot be converted into equity shares and usually carry higher interest rates than the convertible ones.&nbsp;</div>

<div>&nbsp;</div>

<p><strong>OFS (Offer For Sale)</strong> - An offer for sale (OFS) is the way by which stakeholders of a company sell their holding. Capital market regulator SEBI (Securities and Exchange Board of India) in July 2012 allowed stock exchanges to set up a separate window ÔÇö OFS ÔÇö wherein promoters can sell their shares in listed companies.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p> </p>
<p>Learning about the components of the stock market helps investors understand the market\'s many uses. One of the most important uses of the stock market is to provide large companies with a way to raise capital in exchange for a portion of company ownership. The aggregate effect is that millions of investors help finance economic development as businesses expands and stock appreciates in value.</p>
<p>Arguably, understanding how each component works in this process is important.</p>
<p><strong>Equity</strong> ÔÇô an equity investment generally refers to the buying and holding of shares on the stock market by individuals and firms in an anticipation of income from dividends and capital gains as the value of share rises.</p>
<p> </p>
<p><strong>Futures</strong> - Future contracts are also agreements between two parties in which the buyer agrees to buy an underlying asset from the other party (the seller). The delivery of the asset occurs at a later time, but the price is determined at the time of purchase. Future contracts are highly standardized, have deep liquidity in their markets and trade on an exchange.</p>
<p> </p>
<p>There is no default risk because the exchange acts as counterparty, guaranteeing delivery and payment by use of a clearing house to settle gains and losses or mark to market their positions on a daily basis.</p>
<p>An investor can offset his or her future position by engaging in an opposite transaction before the stated maturity of the contract.</p>
<p> </p>
<p><strong>Options - </strong>Options are a type of derivative, which simply means that their value depends on the value of an underlying investment. In most cases, the underlying investment is a stock, but it can also be an <a href="http://www.investorwords.com/2426/index.html">index</a>, a <a href="http://www.investorwords.com/1240/currency.html">currency</a>, a <a href="http://www.investorwords.com/5873/commodities.html">commodity</a>, or any number of other <a href="http://www.investorwords.com/5954/securities.html">securities</a>.</p>
<p> </p>
<p>There are two types of options Call and Put.</p>
<p>Calls are similar to having a long position on stock with the assumption of rise in the stock price.</p>
<p>Puts are similar to having a short position on stock with the assumption of fall in the stock price.</p>
<p> </p>
<p><strong>SIP</strong> - Systematic Investment Plan enables you to build a portfolio over a longer time horizon with small investments at regular intervals reducing the risk of market volatility. You can choose between Quantity based and Amount based SIPs in Stocks, Mutual Funds, ETFs and Gold.</p>
<p> </p>
<p><strong>ETF</strong> - Exchange Traded Fund is a security that tracks an index, a commodity or a sector like an index fund or a sectoral fund but trades like a stock on an exchange.</p>
<p>ETFs enjoy continuous pricing; they can be bought and sold on a stock exchange throughout the trading day. Because ETFs trade like stocks, you can place orders just like with individual stocks - such as <a href="http://www.investopedia.com/terms/l/limitorder.asp">limit orders</a>, stop loss orders, market orders etc.</p>
<p> </p>
<p><strong>Mutual Fund</strong> - Mutual funds make it easy for you to invest in stocks and bonds. The two main advantages of investing your money in mutual funds are 1) you receive professional money management and 2) you are able to truly diversify your holdings with a small sum of money.</p>
<p> </p>
<p><strong>IPO (Initial Public Offer)</strong> - Initial stage of the share in the primary market. A new company gets listed on stock exchange after issue completion and goes public in the secondary market.</p>
<p> </p>
<p><strong>Bonds</strong> ÔÇô is a debt security in a form of Loan, the holder of the loan is the lender (creditor) and the issuer of the bond is the borrower (debtor) and the coupon is the ÔÇÿinterestÔÇÖ. Depending on the terms of the bond borrower is obliged to repay the principal at a later date termed the ÔÇÿmaturity dateÔÇÖ. Interest is usually payable at fixed intervals (semi-annual, annual, and sometimes monthly).</p>
<p> </p>
<p><strong>NCD (Non Convertible Debentures)</strong> - NCD (Non Convertible debenture) is essentially a debt instrument with a fixed tenure that pays a certain rate of interest monthly, quarterly, annually or at the end of the tenure. The money invested is returned either over the tenure of the investment or at the end of the tenure (referred to as bullet payment). These are certificates issued by companies to raise funds through the public issue. These instruments cannot be converted into equity shares and usually carry higher interest rates than the convertible ones. </p>
<p> </p>
<p><strong>OFS (Offer For Sale)</strong> - An offer for sale (OFS) is the way by which stakeholders of a company sell their holding. Capital market regulator SEBI (Securities and Exchange Board of India) in July 2012 allowed stock exchanges to set up a separate window ÔÇö OFS ÔÇö wherein promoters can sell their shares in listed companies.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_smart_insights_category' => array(
    'und' => array(
      0 => array(
        'tid' => 154,
        'uuid' => '2c5744ac-890d-4df9-a136-7e27496d311a',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-02-11 17:11:24 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'SIP Returns Calculator',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6581d14f-483b-420f-962e-1dbc09f4022c',
  'type' => 'tools',
  'language' => 'und',
  'created' => 1444142500,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9bf575bb-db51-4a23-ae94-998fe2614d6e',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<?php
global $base_url;
drupal_add_css(drupal_get_path(\'module\', \'sbicap_tools\') .\'/css/tools_style.css\');
drupal_add_css(drupal_get_path(\'module\', \'sbicap_tools\') .\'/css/calibri_stylesheet.css\');
drupal_add_js(drupal_get_path(\'module\', \'sbicap_tools\'). \'/SIPReturnCalculator.js\');

?>
<table cellpadding="0" cellspacing="0" border="0" width="490px" class="Bgcl BorderAll">
        <tr>
            <td align="center" class="Bgcl">
                <img src="<?php echo $base_url.\'/\'.drupal_get_path(\'module\', \'sbicap_tools\');?>/images/Top.jpg" width="487px" alt="Top" title="Top" />
            </td>
        </tr>
        <tr>
            <td class="TBPad10 Bgcl">
            </td>
        </tr>
        <tr>
            <td valign="top" class="Bgcl">
                <table cellpadding="0" cellspacing="0" border="0" width="480px" class="TRBLPad10 Bgcl">
                    <tr>
                        <td class="description_heading Bgcl">
                            SIP Returns Calculator
                        </td>
                    </tr>
                    <tr>
                        <td class="TBPad5 Bgcl">
                        </td>
                    </tr>
                    <tr>
                        <td valign="top" class="Bgcl">
                            <table cellpadding="0" cellspacing="0" border="0" width="480px" class="Bgcl">
                                <tr>
                                    <td valign="top" id="td1" onclick="javascript:ChangeTab(\'1\');" class="TabSelect">
                                        Calculate Monthly SIP Amount
                                    </td>
                                    <td valign="top" id="td2" onclick="javascript:ChangeTab(\'2\');" class="TabUnSelect Pointer">
                                        Calculate SIP Target Amount
                                    </td>
                                </tr>
                                <tr>
                                    <td colspan="2" class="Bgcl">
                                        <table cellpadding="0" cellspacing="0" border="0" width="100%" id="Tab1" style="display: inline">
                                            <tr>
                                                <td class="RPad5 Bgcl">
                                                    <div class="lightYellowColor piggiBank">
                                                        <div class="TRBPad5 Bgcl">
                                                            <table cellpadding="0" cellspacing="0" border="0" width="100%" class="Bgcl">
                                                                <tr bgcolor="#DDF2F5">
                                                                    <td class="description_text Bgcl" style="width: 180px;">
                                                                        Period&nbsp;:&nbsp;<span style="margin-left: 8px;"><a class="help_link"><img src="<?php echo $base_url.\'/\'.drupal_get_path(\'module\', \'sbicap_tools\');?>/images/calculator_que.gif" /></a></span>
                                                                        <div class="help_link_div bg_div_sip">
                                                                            Amount of years or months you need to save</div>
                                                                    </td>
                                                                    <td class="textbox" style="width: 125px;">
                                                                        <select id="years" class="textbox1" style="width: 100px;">
                                                                            <option value="Select Years" selected="selected">Select Years</option>
                                                                            <option value="0.5">6 Months</option>
                                                                            <option value="1">1 Years</option>
                                                                            <option value="2">2 Years</option>
                                                                            <option value="3">3 Years</option>
                                                                            <option value="4">4 Years</option>
                                                                            <option value="5">5 Years</option>
                                                                            <option value="6">6 Years</option>
                                                                            <option value="7">7 Years</option>
                                                                            <option value="8">8 Years</option>
                                                                            <option value="9">9 Years</option>
                                                                            <option value="10">10 Years</option>
                                                                            <option value="11">11 Years</option>
                                                                            <option value="12">12 Years</option>
                                                                            <option value="13">13 Years</option>
                                                                            <option value="14">14 Years</option>
                                                                            <option value="15">15 Years</option>
                                                                            <option value="16">16 Years</option>
                                                                            <option value="17">17 Years</option>
                                                                            <option value="18">18 Years</option>
                                                                            <option value="19">19 Years</option>
                                                                            <option value="20">20 Years</option>
                                                                            <option value="21">21 Years</option>
                                                                            <option value="22">22 Years</option>
                                                                            <option value="23">23 Years</option>
                                                                            <option value="24">24 Years</option>
                                                                            <option value="25">25 Years</option>
                                                                            <option value="26">26 Years</option>
                                                                            <option value="27">27 Years</option>
                                                                            <option value="28">28 Years</option>
                                                                            <option value="29">29 Years</option>
                                                                            <option value="30">30 Years</option>
                                                                        </select>
                                                                    </td>
                                                                </tr>
                                                                <tr>
                                                                    <td colspan="2" style="height: 10px;">
                                                                    </td>
                                                                </tr>
                                                                <tr bgcolor="#DDF2F5">
                                                                    <td class="description_text Bgcl" style="width: 180px;">
                                                                        Returns&nbsp;:&nbsp;<span style="margin-left: 5px;"><a class="help_link_1"><img src="<?php echo $base_url.\'/\'.drupal_get_path(\'module\', \'sbicap_tools\');?>/images/calculator_que.gif" /></a></span>
                                                                        <div class="help_link_div_1 bg_div_sip_1">
                                                                            The percentage selected should be as per the expected rate of return by mutual fund</div>
                                                                    </td>
                                                                    <td class="textbox" style="width: 125px;">
                                                                        <select id="returns" class="textbox1" style="width: 100px;">
                                                                            <option value="Select Returns" selected="selected">Select Returns</option>
                                                                            <option value="1">1%</option>
                                                                            <option value="2">2%</option>
                                                                            <option value="3">3%</option>
                                                                            <option value="4">4%</option>
                                                                            <option value="5">5%</option>
                                                                            <option value="6">6%</option>
                                                                            <option value="7">7%</option>
                                                                            <option value="8">8%</option>
                                                                            <option value="9">9%</option>
                                                                            <option value="10">10%</option>
                                                                            <option value="11">11%</option>
                                                                            <option value="12">12%</option>
                                                                            <option value="13">13%</option>
                                                                            <option value="14">14%</option>
                                                                            <option value="15">15%</option>
                                                                            <option value="16">16%</option>
                                                                            <option value="17">17%</option>
                                                                            <option value="18">18%</option>
                                                                            <option value="19">19%</option>
                                                                            <option value="20">20%</option>
                                                                            <option value="21">21%</option>
                                                                            <option value="22">22%</option>
                                                                            <option value="23">23%</option>
                                                                            <option value="24">24%</option>
                                                                            <option value="25">25%</option>
                                                                            <option value="26">26%</option>
                                                                            <option value="27">27%</option>
                                                                            <option value="28">28%</option>
                                                                            <option value="29">29%</option>
                                                                            <option value="30">30%</option>
                                                                            <option value="31">31%</option>
                                                                            <option value="32">32%</option>
                                                                            <option value="33">33%</option>
                                                                            <option value="34">34%</option>
                                                                            <option value="35">35%</option>
                                                                            <option value="36">36%</option>
                                                                            <option value="37">37%</option>
                                                                            <option value="38">38%</option>
                                                                            <option value="39">39%</option>
                                                                            <option value="40">40%</option>
                                                                            <option value="41">41%</option>
                                                                            <option value="42">42%</option>
                                                                            <option value="43">43%</option>
                                                                            <option value="44">44%</option>
                                                                            <option value="45">45%</option>
                                                                            <option value="46">46%</option>
                                                                            <option value="47">47%</option>
                                                                            <option value="48">48%</option>
                                                                            <option value="49">49%</option>
                                                                            <option value="50">50%</option>
                                                                            <option value="51">51%</option>
                                                                            <option value="52">52%</option>
                                                                            <option value="53">53%</option>
                                                                            <option value="54">54%</option>
                                                                            <option value="55">55%</option>
                                                                            <option value="56">56%</option>
                                                                            <option value="57">57%</option>
                                                                            <option value="58">58%</option>
                                                                            <option value="59">59%</option>
                                                                            <option value="60">60%</option>
                                                                            <option value="61">61%</option>
                                                                            <option value="62">62%</option>
                                                                            <option value="64">63%</option>
                                                                            <option value="65">65%</option>
                                                                            <option value="66">66%</option>
                                                                            <option value="67">67%</option>
                                                                            <option value="68">68%</option>
                                                                            <option value="69">69%</option>
                                                                            <option value="70">70%</option>
                                                                            <option value="71">71%</option>
                                                                            <option value="72">72%</option>
                                                                            <option value="73">73%</option>
                                                                            <option value="74">74%</option>
                                                                            <option value="75">75%</option>
                                                                            <option value="76">76%</option>
                                                                            <option value="77">77%</option>
                                                                            <option value="78">78%</option>
                                                                            <option value="79">79%</option>
                                                                            <option value="80">80%</option>
                                                                        </select>
                                                                    </td>
                                                                </tr>
                                                                <tr>
                                                                    <td colspan="2" style="height: 10px;">
                                                                    </td>
                                                                </tr>
                                                                <tr bgcolor="#DDF2F5">
                                                                    <td class="description_text Bgcl" style="width: 180px;">
                                                                        Target Amount : <span style="margin-left: 3px;"><a class="help_link_2">
                                                                            <img src="<?php echo $base_url.\'/\'.drupal_get_path(\'module\', \'sbicap_tools\');?>/images/calculator_que.gif" /></a></span>
                                                                        <div class="help_link_div_2 bg_div_sip_2">
                                                                            The value entered should be the amount you want to achieve in the coming years</div>
                                                                    </td>
                                                                    <td class="textbox" style="width: 150px;">
                                                                        <input id="amount" maxlength="15" class="textbox1" style="width: 105px;" onkeypress="return isNumberKey(event)" /><span
                                                                            class=\'rupee description_text Bgcl\' style="margin-left: 8px;">(Rs)</span>
                                                                    </td>
                                                                </tr>
                                                                <tr>
                                                                    <td colspan="2" style="height: 10px;">
                                                                    </td>
                                                                </tr>
                                                                <tr bgcolor="#DDF2F5">
                                                                    <td>
                                                                    </td>
                                                                    <td class="Bgcl" valign="top">
                                                                        <table cellpadding="0" cellspacing="0" border="0" width="100%">
                                                                            <tr>
                                                                                <td width="72px">
                                                                                    <input type="button" class="Button" value="Calculate" style="text-decoration: none"
                                                                                        onclick="javascript:return calculatem()" />
                                                                                </td>
                                                                                <td>
                                                                                    &nbsp;&nbsp;<input type="button" class="Button" value="Reset" style="text-decoration: none"
                                                                                        onclick="javascript:return reset1()" />
                                                                                </td>
                                                                            </tr>
                                                                        </table>
                                                                    </td>
                                                                </tr>
                                                                <tr>
                                                                    <td colspan="2" style="height: 10px;">
                                                                    </td>
                                                                </tr>
                                                                <tr bgcolor="#DDF2F5">
                                                                    <td class="description_text Bgcl" style="width: 150px; height: 35px;" valign="top">
                                                                        Your Monthly SIP Amount&nbsp;:&nbsp;
                                                                    </td>
                                                                    <td class="textbox TBPad5" style="width: 105px; height: 25px;">
                                                                        <span id="ans"></span>
                                                                    </td>
                                                                </tr>
                                                            </table>
                                                        </div>
                                                    </div>
                                                </td>
                                            </tr>
                                        </table>
                                        <table cellpadding="0" cellspacing="0" border="0" width="100%" id="Tab2" style="display: none">
                                            <tr>
                                                <td class="RPad5 Bgcl">
                                                    <div class="lightYellowColor piggiBank">
                                                        <div class="TRBPad5 Bgcl">
                                                            <table cellpadding="0" cellspacing="0" border="0" width="100%" class="Bgcl">
                                                                <tr bgcolor="#DDF2F5">
                                                                    <td class="description_text Bgcl" style="width: 150px;">
                                                                        Period&nbsp;:&nbsp;<span style="margin-left: 8px;"><a class="help_link_3"><img src="<?php echo $base_url.\'/\'.drupal_get_path(\'module\', \'sbicap_tools\');?>/images/calculator_que.gif" /></a></span>
                                                                        <div class="help_link_div_3 bg_div_sip_3">
                                                                            Amount of years or months you need to save</div>
                                                                    </td>
                                                                    <td class="textbox">
                                                                        <select id="tyears" class="textbox1" style="width: 100px;" tabindex="1">
                                                                            <option value="Select Years" selected="selected">Select Years</option>
                                                                            <option value="0.5">6 Months</option>
                                                                            <option value="1">1 Years</option>
                                                                            <option value="2">2 Years</option>
                                                                            <option value="3">3 Years</option>
                                                                            <option value="4">4 Years</option>
                                                                            <option value="5">5 years</option>
                                                                            <option value="6">6 years</option>
                                                                            <option value="7">7 years</option>
                                                                            <option value="8">8 years</option>
                                                                            <option value="9">9 years</option>
                                                                            <option value="10">10 years</option>
                                                                            <option value="11">11 years</option>
                                                                            <option value="12">12 years</option>
                                                                            <option value="13">13 years</option>
                                                                            <option value="14">14 years</option>
                                                                            <option value="15">15 years</option>
                                                                            <option value="16">16 years</option>
                                                                            <option value="17">17 years</option>
                                                                            <option value="18">18 years</option>
                                                                            <option value="19">19 years</option>
                                                                            <option value="20">20 years</option>
                                                                            <option value="21">21 years</option>
                                                                            <option value="22">22 years</option>
                                                                            <option value="23">23 years</option>
                                                                            <option value="24">24 years</option>
                                                                            <option value="25">25 years</option>
                                                                            <option value="26">26 years</option>
                                                                            <option value="27">27 years</option>
                                                                            <option value="28">28 years</option>
                                                                            <option value="29">29 years</option>
                                                                            <option value="30">30 years</option>
                                                                        </select>
                                                                    </td>
                                                                </tr>
                                                                <tr>
                                                                    <td colspan="2" style="height: 10px;">
                                                                    </td>
                                                                </tr>
                                                                <tr bgcolor="#DDF2F5">
                                                                    <td class="description_text Bgcl" style="width: 150px;">
                                                                        Returns&nbsp;:&nbsp;<span style="margin-left: 6px;"><a class="help_link_4"><img src="<?php echo $base_url.\'/\'.drupal_get_path(\'module\', \'sbicap_tools\');?>/images/calculator_que.gif" /></a></span>
                                                                        <div class="help_link_div_4 bg_div_sip_4">
                                                                            The percentage selected should be as per the expected rate of return by mutual fund</div>
                                                                    </td>
                                                                    <td class="textbox">
                                                                        <select id="treturns" class="textbox1" style="width: 100px;" tabindex="2">
                                                                            <option selected="selected" value="Select Returns">Select Returns</option>
                                                                            <option value="1">1%</option>
                                                                            <option value="2">2%</option>
                                                                            <option value="3">3%</option>
                                                                            <option value="4">4%</option>
                                                                            <option value="5">5%</option>
                                                                            <option value="6">6%</option>
                                                                            <option value="7">7%</option>
                                                                            <option value="8">8%</option>
                                                                            <option value="9">9%</option>
                                                                            <option value="10">10%</option>
                                                                            <option value="11">11%</option>
                                                                            <option value="12">12%</option>
                                                                            <option value="13">13%</option>
                                                                            <option value="14">14%</option>
                                                                            <option value="15">15%</option>
                                                                            <option value="16">16%</option>
                                                                            <option value="17">17%</option>
                                                                            <option value="18">18%</option>
                                                                            <option value="19">19%</option>
                                                                            <option value="20">20%</option>
                                                                            <option value="21">21%</option>
                                                                            <option value="22">22%</option>
                                                                            <option value="23">23%</option>
                                                                            <option value="24">24%</option>
                                                                            <option value="25">25%</option>
                                                                            <option value="26">26%</option>
                                                                            <option value="27">27%</option>
                                                                            <option value="28">28%</option>
                                                                            <option value="29">29%</option>
                                                                            <option value="30">30%</option>
                                                                            <option value="31">31%</option>
                                                                            <option value="32">32%</option>
                                                                            <option value="33">33%</option>
                                                                            <option value="34">34%</option>
                                                                            <option value="35">35%</option>
                                                                            <option value="36">36%</option>
                                                                            <option value="37">37%</option>
                                                                            <option value="38">38%</option>
                                                                            <option value="39">39%</option>
                                                                            <option value="40">40%</option>
                                                                            <option value="41">41%</option>
                                                                            <option value="42">42%</option>
                                                                            <option value="43">43%</option>
                                                                            <option value="44">44%</option>
                                                                            <option value="45">45%</option>
                                                                            <option value="46">46%</option>
                                                                            <option value="47">47%</option>
                                                                            <option value="48">48%</option>
                                                                            <option value="49">49%</option>
                                                                            <option value="50">50%</option>
                                                                            <option value="51">51%</option>
                                                                            <option value="52">52%</option>
                                                                            <option value="53">53%</option>
                                                                            <option value="54">54%</option>
                                                                            <option value="55">55%</option>
                                                                            <option value="56">56%</option>
                                                                            <option value="57">57%</option>
                                                                            <option value="58">58%</option>
                                                                            <option value="59">59%</option>
                                                                            <option value="60">60%</option>
                                                                            <option value="61">61%</option>
                                                                            <option value="62">62%</option>
                                                                            <option value="64">63%</option>
                                                                            <option value="65">65%</option>
                                                                            <option value="66">66%</option>
                                                                            <option value="67">67%</option>
                                                                            <option value="68">68%</option>
                                                                            <option value="69">69%</option>
                                                                            <option value="70">70%</option>
                                                                            <option value="71">71%</option>
                                                                            <option value="72">72%</option>
                                                                            <option value="73">73%</option>
                                                                            <option value="74">74%</option>
                                                                            <option value="75">75%</option>
                                                                            <option value="76">76%</option>
                                                                            <option value="77">77%</option>
                                                                            <option value="78">78%</option>
                                                                            <option value="79">79%</option>
                                                                            <option value="80">80%</option>
                                                                        </select>
                                                                    </td>
                                                                </tr>
                                                                <tr>
                                                                    <td colspan="2" style="height: 10px;">
                                                                    </td>
                                                                </tr>
                                                                <tr>
                                                                    <td colspan="2">
                                                                        <table cellpadding="0" cellspacing="0" border="0" width="100%">
                                                                            <tr bgcolor="#DDF2F5">
                                                                                <td class="description_text Bgcl" style="width: 150px;">
                                                                                    Amount : <span style="margin-left: 7px;"><a class="help_link_5">
                                                                                        <img src="<?php echo $base_url.\'/\'.drupal_get_path(\'module\', \'sbicap_tools\');?>/images/calculator_que.gif" /></a></span>
                                                                                    <div class="help_link_div_5 bg_div_sip_5">
                                                                                        The value selected should be amount you want to invest in SIP per month</div>
                                                                                </td>
                                                                                <td class="textbox" style="width: 105px;">
                                                                                    <select id="tamount" class="textbox1" style="width: 105px;" tabindex="3">
                                                                                        <option selected="selected" value="Select Your Amount">Select Your Amount</option>
                                                                                        <option value="500">500</option>
                                                                                        <option value="1000">1000</option>
                                                                                        <option value="1500">1500</option>
                                                                                        <option value="2000">2000</option>
                                                                                        <option value="2500">2500</option>
                                                                                        <option value="3000">3000</option>
                                                                                        <option value="3500">3500</option>
                                                                                        <option value="4000">4000</option>
                                                                                        <option value="4500">4500</option>
                                                                                        <option value="5000">5000</option>
                                                                                        <option value="5500">5500</option>
                                                                                        <option value="6000">6000</option>
                                                                                        <option value="6500">6500</option>
                                                                                        <option value="7000">7000</option>
                                                                                        <option value="7500">7500</option>
                                                                                        <option value="8000">8000</option>
                                                                                        <option value="8500">8500</option>
                                                                                        <option value="9000">9000</option>
                                                                                        <option value="10000">10,000</option>
                                                                                        <option value="10500">10,500</option>
                                                                                        <option value="11000">11,000</option>
                                                                                        <option value="11500">11,500</option>
                                                                                        <option value="12000">12,000</option>
                                                                                        <option value="12500">12,500</option>
                                                                                        <option value="13000">13,000</option>
                                                                                        <option value="13500">13,500</option>
                                                                                        <option value="14000">14,000</option>
                                                                                        <option value="145000">14,500</option>
                                                                                        <option value="15000">15,000</option>
                                                                                        <option value="15500">15,500</option>
                                                                                        <option value="16000">16,000</option>
                                                                                        <option value="16500">16,500</option>
                                                                                        <option value="17000">17,000</option>
                                                                                        <option value="17500">17,500</option>
                                                                                        <option value="18000">18,000</option>
                                                                                        <option value="18500">18,500</option>
                                                                                        <option value="19000">19,000</option>
                                                                                        <option value="19500">19,500</option>
                                                                                        <option value="20000">20,000</option>
                                                                                        <option value="20500">20,500</option>
                                                                                        <option value="21000">21,000</option>
                                                                                        <option value="21500">21,500</option>
                                                                                        <option value="22000">22,000</option>
                                                                                        <option value="22500">22,500</option>
                                                                                        <option value="23000">23,000</option>
                                                                                        <option value="23500">23,500</option>
                                                                                        <option value="24000">24,000</option>
                                                                                        <option value="24500">24,500</option>
                                                                                        <option value="25000">25,000</option>
                                                                                        <option value="26000">26,000</option>
                                                                                        <option value="26500">26,500</option>
                                                                                        <option value="27000">27,000</option>
                                                                                        <option value="27500">27,500</option>
                                                                                        <option value="28000">28,000</option>
                                                                                        <option value="28500">28,500</option>
                                                                                        <option value="29000">29,000</option>
                                                                                        <option value="29500">29,500</option>
                                                                                        <option value="30000">30,000</option>
                                                                                    </select>
                                                                                </td>
                                                                                <td class=\'rupee description_text Bgcl\' style="padding-left:0px;">
                                                                                   (Rs)
                                                                                </td>
                                                                            </tr>
                                                                        </table>
                                                                    </td>
                                                                </tr>
                                                                <tr>
                                                                    <td colspan="2" style="height: 10px;">
                                                                    </td>
                                                                </tr>
                                                                <tr>
                                                                    <td colspan="2">
                                                                        <table cellpadding="0" cellspacing="0" border="0" width="100%">
                                                                            <tr>
                                                                                   <td class="Bgcl" valign="top">
                                                                                   <input type="button" class="Button" value="Reset" style="text-decoration: none;float:right; margin-left:10px;" onclick="javascript:return reset2()" /> 
                                                                                      <input type="button" class="Button" value="Calculate" style="text-decoration: none; float:right; "   onclick="javascript:return calculate()" /> &nbsp;&nbsp;
                                                                                    
                                                                                   </td>
                                                                            </tr>
                                                                        </table>
                                                                    </td>
                                                                </tr>
                                                                <tr>
                                                                    <td colspan="2" style="height: 10px;">
                                                                    </td>
                                                                </tr>
                                                                <tr bgcolor="#DDF2F5">
                                                                    <td class="description_text Bgcl" style="width: 150px; height: 35px;" valign="top">
                                                                        Your Target Amount&nbsp;:&nbsp;
                                                                    </td>
                                                                    <td class="textbox" style="width: 130px; height: 25px;">
                                                                        &nbsp;<span id="tans"></span>
                                                                    </td>
                                                                </tr>
                                                            </table>
                                                        </div>
                                                    </div>
                                                </td>
                                            </tr>
                                        </table>
                                    </td>
                                </tr>
                            </table>
                        </td>
                    </tr>
                </table>
            </td>
        </tr>
    </table>',
        'summary' => '',
        'format' => 'php_code',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-10-06 20:11:40 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Asset Allocator',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5cf0773b-f4ef-424c-98ac-cd528d5db24f',
  'type' => 'tools',
  'language' => 'und',
  'created' => 1363704600,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a46e9548-99b1-44f6-a36c-5efc40794df8',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<?php global $base_url; ?>
<p style="text-align: left"><embed width="487" height="729" type="application/x-shockwave-flash" play="true" loop="true" menu="true" src="<?php echo $base_url ?>/sites/default/files/tools/asset_allocator.swf" pluginspage="http://www.macromedia.com/go/getflashplayer"></embed>&nbsp;</p>
',
        'summary' => '',
        'format' => 'php_code',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-03-19 20:20:00 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Call Back',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '080c671e-6081-41f8-ad3e-07fa1b4f9170',
  'type' => 'webform',
  'language' => 'und',
  'created' => 1452241132,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'afcf479c-5404-44eb-819b-d90a7d799f13',
  'revision_uid' => 1,
  'field_body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'webform' => array(
    'nid' => 20,
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      1 => array(
        'nid' => 20,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'name',
        'name' => 'Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 0,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 20,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'mobile',
        'name' => 'Mobile',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 1,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 20,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'pin_code',
        'name' => 'Pin Code',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 2,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 20,
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'city',
        'name' => 'City',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 3,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 20,
        'cid' => 5,
        'pid' => 0,
        'form_key' => 'email_address',
        'name' => 'Email Address',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 4,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-01-08 13:48:52 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Fibonacci Downtrend Calculator',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '17b43eed-3c1e-477f-bad6-74bcde252eb5',
  'type' => 'tools',
  'language' => 'und',
  'created' => 1442241795,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b03e27b9-ece7-4188-9ab6-041e3364c7c7',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<?php
global $base_url;
drupal_add_css(drupal_get_path(\'module\', \'sbicap_tools\') .\'/css/tools_style.css\');
drupal_add_css(drupal_get_path(\'module\', \'sbicap_tools\') .\'/css/calibri_stylesheet.css\');
drupal_add_js(drupal_get_path(\'module\', \'sbicap_tools\'). \'/js/FibonacciCalculatorDowntrend.js\');

?>
<table cellpadding="0" cellspacing="0" border="0" width="490px" class="Bgcl BorderAll">
            <tr><td align="center" class="Bgcl"><img src="<?php echo $base_url.\'/\'.drupal_get_path(\'module\', \'sbicap_tools\');?>/images/Top_Fibonacci_downtrend.jpg" width="487px" alt="Top" title="Top"/></td></tr>
            <tr><td class="TBPad10 Bgcl"></td></tr>
            <tr>
                <td valign="top" class="Bgcl">
                    <table cellpadding="0" cellspacing="0" border="0" width="480px" class="TRBLPad10 Bgcl">
                        <tr><td class="description_heading Bgcl">Fibonacci Downtrend Calculator</td></tr>
                        <tr><td class="TBPad5 Bgcl"></td></tr>
                        <tr>
                            <td valign="top" class="Bgcl">
                                <table cellpadding="0" cellspacing="0" border="0" width="100%">                                    
                                       <tr>
                                            <td>
                                                <table cellpadding="0" cellspacing="0" border="0" width="100%">
                                                    <tr><td class="TBPad5 Bgcl"></td></tr> 
                                                      <tr>
                                                        <td class="description_text Bgcl" style="width:45%;">High price : <span style="margin-left:15px;"><a class="help_link"><img src="<?php echo $base_url.\'/\'.drupal_get_path(\'module\', \'sbicap_tools\');?>/images/calculator_que.gif" /></a></span>
                                                        <div class="help_link_div bg_div">High price of the stock for which you want to calculate</div></td>
                                                        <td class="description_text Bgcl" style="width:55%;">
                                                          <input id="high" maxlength="10" class="textbox" style="width:100px;" onkeypress="javascript:return isNumberKey(event);"/>&nbsp;(<span class=\'rupee\'>Rs</span></span>)
                                                        </td>
                                                      </tr>
                                                       <tr bgcolor="#DDF2F5">
                                                              <td class="description_text Bgcl">Low price :<span style="margin-left:18px;"><a class="help_link_1"><img src="<?php echo $base_url.\'/\'.drupal_get_path(\'module\', \'sbicap_tools\');?>/images/calculator_que.gif" /></a></span>
                                                                <div class="help_link_div_1 bg_div">Low price of the stock for which you want to calculate</div></td>
                                                              <td class="description_text Bgcl">
                                                                <input id="low" maxlength="10" class="textbox" style="width:100px;" onkeypress="javascript:return isNumberKey(event);"/>&nbsp;(<span class=\'rupee\'>Rs</span></span>)
                                                              </td>
                                                      </tr>
                                                      <tr><td colspan="2" style="height:2px;"></td></tr>
                                                      <tr bgcolor="#DDF2F5"> 
                                                        <td colspan="2">
                                                            <table cellpadding="0" cellspacing="0" border="0" width="100%">
                                                                <tr>
                                                                    <td class="description_text Bgcl" style="width:45%;"></td>
                                                                    <td class="Bgcl" valign="top">
                                                                            <a href="javascript:void(0)" style="text-decoration:none;" onclick="javascript:return calculate()"><input type="button" class="Button" value="Calculate" /></a>&nbsp;&nbsp;
                                                                            <a href="javascript:void(0)" style="text-decoration:none;" onclick="javascript:return reset()"><input type="button" class="Button" value="Reset" /></a>
                                                                     </td>
                                                                  </tr>                                                
                                                            </table>
                                                        </td>                                         
                                                     </tr>                                                    
                                                </table>
                                            </td>
                                       </tr>
                                      <tr>
                                        <td id="result" style="display:none;">
                                            <table cellpadding="0" cellspacing="0" border="0" width="100%">
                                            
                                              <tr>
                                                    <td class="description_text Bgcl" style="width:45%;">138.2% Retracement Value :</td>
                                                    <td class="description_text Bgcl" style="width:55%;">
                                                            <table cellpadding="0" cellspacing="0" border="0">
                                                                <tr>
                                                                    <td class="textbox" style="width:100px;">&nbsp;<span id="ans"></span></td>
                                                                  </tr>
                                                            </table>
                                                      </td>
                                                  </tr>
                                                <tr>
                                                    <td class="description_text Bgcl" style="width:45%;">100% Retracement Value :</td>
                                                    <td class="description_text Bgcl" style="width:55%;">
                                                            <table cellpadding="0" cellspacing="0" border="0">
                                                                <tr>
                                                                    <td class="textbox" style="width:100px;">&nbsp;<span id="ans1"></span></td>
                                                                  </tr>
                                                            </table>
                                                      </td>
                                                  </tr>
                                                  
                                                     <tr>
                                                    <td class="description_text Bgcl" style="width:45%;">76.4% Retracement Value :</td>
                                                    <td class="description_text Bgcl" style="width:55%;">
                                                            <table cellpadding="0" cellspacing="0" border="0">
                                                                <tr>
                                                                    <td class="textbox" style="width:100px;">&nbsp;<span id="ans7"></span></td>
                                                                  </tr>
                                                            </table>
                                                      </td>
                                                  </tr>
                                                  <tr bgcolor="#DDF2F5">
                                                          <td class="description_text Bgcl">61.8% Retracement Value :</td>
                                                          <td class="description_text Bgcl">
                                                            <table cellpadding="0" cellspacing="0" border="0">
                                                                <tr>
                                                                    <td class="textbox" style="width:100px;" >&nbsp;<span id="ans2"></span></td>
                                                                </tr>
                                                            </table>
                                                    </td>
                                                  </tr>
                                                  <tr>
                                                    <td class="description_text Bgcl">50% Retracement Value :</td>
                                                    <td class="description_text Bgcl">
                                                      <table cellpadding="0" cellspacing="0" border="0">
                                                        <tr>
                                                            <td class="textbox" style="width:100px;" >&nbsp;<span id="ans3"></span></td>
                                                        </tr>
                                                    </table>
                                                    </td>
                                                  </tr>
                                                  <tr bgcolor="#DDF2F5">
                                                          <td class="description_text Bgcl">38.2% Retracement Value :</td>
                                                          <td class="description_text Bgcl">
                                                            <table cellpadding="0" cellspacing="0" border="0">
                                                                <tr>
                                                                    <td class="textbox" style="width:100px;">&nbsp;<span id="ans4"></span></td>
                                                                </tr>
                                                            </table>
                                                    </td>
                                                  </tr>
                                                  <tr>
                                                    <td class="description_text Bgcl">23.6% Retracement Value :</td>
                                                    <td class="description_text Bgcl">
                                                        <table cellpadding="0" cellspacing="0" border="0">
                                                            <tr>
                                                                <td class="textbox" style="width:100px;" >&nbsp;<span id="ans5"></span></td>
                                                            </tr>
                                                        </table>
                                                    </td>
                                                  </tr>
                                                  <tr bgcolor="#DDF2F5">
                                                      <td class="description_text Bgcl">0% Retracement Value :</td>
                                                      <td class="description_text Bgcl">
                                                        <table cellpadding="0" cellspacing="0" border="0">
                                                            <tr>
                                                                <td class="textbox" style="width:100px;" >&nbsp;<span id="ans6"></span></td>
                                                            </tr>
                                                        </table>
                                                    </td>
                                                  </tr> 
                                            </table>
                                        </td>
                                      </tr> 
                                </table>
                            </td>
                        </tr>
                    </table>
                </td>
            </tr>            
        </table>',
        'summary' => '',
        'format' => 'php_code',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-09-14 20:13:15 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Webinar Register',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ed7bdd2d-619d-4767-b446-934e28bc557e',
  'type' => 'webform',
  'language' => 'und',
  'created' => 1415809187,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b50daa6a-8275-43e8-8b7e-ba7b2e6a3094',
  'revision_uid' => 1,
  'field_body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'webform' => array(
    'nid' => 19,
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      1 => array(
        'nid' => 19,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'topic',
        'name' => 'Topic',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'Interactive Website demo|Interactive Website demo
Basics of Futures and options|Basics of Futures & options',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_values' => '',
          'empty_option' => '',
          'description_above' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 8,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 19,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'name',
        'name' => 'Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => 40,
          'disabled' => 0,
          'unique' => 0,
          'maxlength' => 255,
          'conditional_operator' => '=',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 9,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 19,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'mobile',
        'name' => 'Mobile',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => 40,
          'disabled' => 0,
          'unique' => 0,
          'maxlength' => 10,
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 10,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 19,
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'email',
        'name' => 'Email',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => 40,
          'disabled' => 0,
          'unique' => 0,
          'maxlength' => 255,
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 11,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 19,
        'cid' => 5,
        'pid' => 0,
        'form_key' => 'client_code',
        'name' => 'Client Code',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => 40,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 12,
        'page_num' => 1,
      ),
      6 => array(
        'nid' => 19,
        'cid' => 6,
        'pid' => 0,
        'form_key' => 'pan_no',
        'name' => 'PAN No',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => 40,
          'disabled' => 0,
          'unique' => 0,
          'maxlength' => 10,
          'conditional_operator' => '=',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 13,
        'page_num' => 1,
      ),
      7 => array(
        'nid' => 19,
        'cid' => 7,
        'pid' => 0,
        'form_key' => 'language_eng',
        'name' => 'Language',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'english|English',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'webform_conditional_field_value' => 'Basics of Futures and options',
          'webform_conditional_cid' => 12,
          'webform_conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'empty_option' => '',
          'description_above' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 14,
        'page_num' => 1,
      ),
      8 => array(
        'nid' => 19,
        'cid' => 8,
        'pid' => 0,
        'form_key' => 'language',
        'name' => 'Language',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'english|English
hindi|Hindi',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'webform_conditional_field_value' => 'Interactive Website demo',
          'webform_conditional_cid' => 12,
          'webform_conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'empty_option' => '',
          'description_above' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 15,
        'page_num' => 1,
      ),
      9 => array(
        'nid' => 19,
        'cid' => 9,
        'pid' => 0,
        'form_key' => 'date_custom',
        'name' => 'Date',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'description' => 'Format: mm/dd/yyyy',
          'title_display' => 'before',
          'private' => 0,
          'width' => 10,
          'disabled' => 0,
          'unique' => 0,
          'maxlength' => 10,
          'field_prefix' => '',
          'field_suffix' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 16,
        'page_num' => 1,
      ),
      10 => array(
        'nid' => 19,
        'cid' => 10,
        'pid' => 0,
        'form_key' => 'time_slot',
        'name' => 'Time Slot',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => '11am - 12pm | 11 a.m - 12 p.m (Mon - Sat)
2pm - 3pm | 2 p.m - 3 p.m (Sat)
4pm - 5pm | 4 p.m - 5 p.m (Mon - Sat)
5pm - 6pm | 5 p.m - 6 p.m (Mon - Fri)',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'webform_conditional_field_value' => 'Interactive Website demo',
          'webform_conditional_cid' => 12,
          'webform_conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'empty_option' => '',
          'description_above' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 17,
        'page_num' => 1,
      ),
      11 => array(
        'nid' => 19,
        'cid' => 11,
        'pid' => 0,
        'form_key' => 'time_slot_derivatives',
        'name' => 'Time Slot',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => '4pm - 5pm| 4pm - 5pm (Mon or Wed)
11am - 12pm| 11am - 12pm (First Sat)',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'webform_conditional_field_value' => 'Basics of Futures and options',
          'webform_conditional_cid' => 12,
          'webform_conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'empty_option' => '',
          'description_above' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 18,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-11-12 21:49:47 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'EMI Calculator',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'eafbf493-964e-4d9e-ad1c-14de7f774075',
  'type' => 'tools',
  'language' => 'und',
  'created' => 1353386859,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'be0b1705-18b8-42ec-958a-1827979c29d0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<?php global $base_url; ?>
<p style="text-align: left"><embed width="487" height="729" type="application/x-shockwave-flash" play="true" loop="true" menu="true" src="<?php echo $base_url ?>/sites/default/files/tools/emi_calculator.swf" pluginspage="http://www.macromedia.com/go/getflashplayer"></embed>&nbsp;</p>',
        'summary' => '',
        'format' => 'php_code',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2012-11-20 10:17:39 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Product Request',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'e4a88308-28f8-4fd8-ba88-be4503b7b3c3',
  'type' => 'webform',
  'language' => 'und',
  'created' => 1402557437,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c3514152-316e-4532-bdef-4c277154bd03',
  'revision_uid' => 1,
  'field_body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'webform' => array(
    'nid' => 16,
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      1 => array(
        'nid' => 16,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'info',
        'name' => 'info',
        'type' => 'markup',
        'value' => '<p><strong>Please Fill the details below:<br></strong></p>',
        'extra' => array(
          'conditional_operator' => '=',
          'format' => 1,
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
          'display_on' => 'form',
        ),
        'required' => 0,
        'weight' => 8,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 16,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'producttype',
        'name' => 'Product Type',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'MF|MF
IPO|IPO
NCD|NCD
BONDS|BONDS
INSURANCE|INSURANCE
FD|FD
',
          'multiple' => 1,
          'title_display' => 'inline',
          'private' => 0,
          'aslist' => 0,
          'optrand' => 0,
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_values' => '',
          'empty_option' => '',
          'description_above' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 9,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 16,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'exisiting_customer',
        'name' => 'Exisiting Customer',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'Yes|Yes
No|No',
          'multiple' => 0,
          'title_display' => 'inline',
          'private' => 0,
          'aslist' => 0,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'empty_option' => '',
          'description_above' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 10,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 16,
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'client_id',
        'name' => 'Client Id',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'width' => 10,
          'disabled' => 0,
          'unique' => 0,
          'maxlength' => 8,
          'webform_conditional_field_value' => 'Yes',
          'webform_conditional_cid' => 2,
          'webform_conditional_operator' => '=',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 11,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 16,
        'cid' => 5,
        'pid' => 0,
        'form_key' => 'name',
        'name' => 'Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'width' => 50,
          'disabled' => 0,
          'unique' => 0,
          'maxlength' => 50,
          'webform_conditional_field_value' => 'No',
          'webform_conditional_cid' => 2,
          'webform_conditional_operator' => '=',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 12,
        'page_num' => 1,
      ),
      6 => array(
        'nid' => 16,
        'cid' => 6,
        'pid' => 0,
        'form_key' => 'email_id',
        'name' => 'Email Id',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'width' => 50,
          'disabled' => 0,
          'unique' => 0,
          'maxlength' => 50,
          'webform_conditional_field_value' => 'No',
          'webform_conditional_cid' => 2,
          'webform_conditional_operator' => '=',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 13,
        'page_num' => 1,
      ),
      7 => array(
        'nid' => 16,
        'cid' => 7,
        'pid' => 0,
        'form_key' => 'mobile_no',
        'name' => 'Mobile No',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'width' => 30,
          'disabled' => 0,
          'unique' => 0,
          'maxlength' => 10,
          'webform_conditional_field_value' => 'No',
          'webform_conditional_cid' => 2,
          'webform_conditional_operator' => '=',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 14,
        'page_num' => 1,
      ),
      8 => array(
        'nid' => 16,
        'cid' => 8,
        'pid' => 0,
        'form_key' => 'city',
        'name' => 'City',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'width' => 50,
          'disabled' => 0,
          'unique' => 0,
          'maxlength' => 50,
          'webform_conditional_field_value' => 'No',
          'webform_conditional_cid' => 2,
          'webform_conditional_operator' => '=',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 15,
        'page_num' => 1,
      ),
      9 => array(
        'nid' => 16,
        'cid' => 9,
        'pid' => 0,
        'form_key' => 'pincode',
        'name' => 'Pincode',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'width' => 30,
          'disabled' => 0,
          'unique' => 0,
          'maxlength' => 6,
          'webform_conditional_field_value' => 'No',
          'webform_conditional_cid' => 2,
          'webform_conditional_operator' => '=',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 16,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-06-12 12:47:17 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Dreaming of a House or Car?',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e7b04b88-e415-4ae1-ade2-dcd80e8ef12c',
  'type' => 'tools',
  'language' => 'und',
  'created' => 1363870331,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c3cb8ad3-9b93-45c9-9c0e-422a52853f39',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<?php
global $base_url;
?>
<script language="javascript">AC_FL_RunContent = 1;</script>
<script src="<?php echo $base_url;?>/sites/default/files/tools/AC_RunActiveContent.js" language="javascript">
</script> <script language="javascript">
	if (AC_FL_RunContent == 0) {
		alert("This page requires AC_RunActiveContent.js.");
	} else {
		AC_FL_RunContent(
			\'codebase\', \'http://download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=9,0,0,0\',
			\'width\', \'495\',
			\'height\', \'689\',
			\'src\', \'house_car\',
			\'quality\', \'high\',
			\'pluginspage\', \'http://www.macromedia.com/go/getflashplayer\',
			\'align\', \'middle\',
			\'play\', \'true\',
			\'loop\', \'true\',
			\'scale\', \'showall\',
			\'wmode\', \'window\',
			\'devicefont\', \'false\',
			\'id\', \'house_car\',
			\'bgcolor\', \'#ffffff\',
			\'name\', \'house_car\',
			\'menu\', \'true\',
			\'allowFullScreen\', \'false\',
			\'allowScriptAccess\',\'sameDomain\',
			\'movie\', \'<?php echo $base_url;?>/sites/default/files/tools/house_car_new\',
			\'salign\', \'\'
			); //end AC code
	}
swfobject.embedSWF("<?php echo $base_url;?>/sites/default/files/tools/house_car_new.swf", "myContent", "300", "120", "9.0.0");
</script>
<div id="myContent"></div>',
        'summary' => '',
        'format' => 'php_code',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-03-21 18:22:11 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Carosal image 2',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f41a5eb1-30ba-4f0b-b50a-966604f7fc9e',
  'type' => 'right_carousel',
  'language' => 'und',
  'created' => 1455083111,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cf71e93e-f2f7-472f-a3b2-943d021974a4',
  'revision_uid' => 1,
  'field_right_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'SBISmart Edutainment.jpg',
        'uri' => 'public://right_carosal/SBISmart Edutainment_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 58006,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '910d8938-6e5a-46f0-be5f-509709bfd822',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 180,
          'height' => 180,
        ),
        'alt' => '',
        'title' => '',
        'width' => 180,
        'height' => 180,
        'uuid_features_file_data' => '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UkdCQwAAAAMAAAAAUmQgIGRvdWJAb+AAAAAAAAAAAABHcm4gZG91YkBv4AAAAAAAAAAAAEJsICBkb3ViQG/gAAAAAAAAAAAAQnJkVFVudEYjUmx0AAAAAAAAAAAAAAAAQmxkIFVudEYjUmx0AAAAAAAAAAAAAAAAUnNsdFVudEYjUHhsQFIAAAAAAAAAAAAKdmVjdG9yRGF0YWJvb2wBAAAAAFBnUHNlbnVtAAAAAFBnUHMAAAAAUGdQQwAAAABMZWZ0VW50RiNSbHQAAAAAAAAAAAAAAABUb3AgVW50RiNSbHQAAAAAAAAAAAAAAABTY2wgVW50RiNQcmNAWQAAAAAAAAAAABBjcm9wV2hlblByaW50aW5nYm9vbAAAAAAOY3JvcFJlY3RCb3R0b21sb25nAAAAAAAAAAxjcm9wUmVjdExlZnRsb25nAAAAAAAAAA1jcm9wUmVjdFJpZ2h0bG9uZwAAAAAAAAALY3JvcFJlY3RUb3Bsb25nAAAAAAA4QklNA+0AAAAAABAASAAAAAEAAgBIAAAAAQACOEJJTQQmAAAAAAAOAAAAAAAAAAAAAD+AAAA4QklNBA0AAAAAAAQAAAB4OEJJTQQZAAAAAAAEAAAAHjhCSU0D8wAAAAAACQAAAAAAAAAAAQA4QklNJxAAAAAAAAoAAQAAAAAAAAACOEJJTQP1AAAAAABIAC9mZgABAGxmZgAGAAAAAAABAC9mZgABAKGZmgAGAAAAAAABADIAAAABAFoAAAAGAAAAAAABADUAAAABAC0AAAAGAAAAAAABOEJJTQP4AAAAAABwAAD/////////////////////////////A+gAAAAA/////////////////////////////wPoAAAAAP////////////////////////////8D6AAAAAD/////////////////////////////A+gAADhCSU0ECAAAAAAAEAAAAAEAAAJAAAACQAAAAAA4QklNBB4AAAAAAAQAAAAAOEJJTQQaAAAAAANjAAAABgAAAAAAAAAAAAAAtAAAALQAAAAXAFMAQgBJAFMAbQBhAHIAdAAgAEUAZAB1AHQAYQBpAG4AbQBlAG4AdAAgAHYAMwAAAAEAAAAAAAAAAAAAAAAAAAAAAAAAAQAAAAAAAAAAAAAAtAAAALQAAAAAAAAAAAAAAAAA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VGh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8APD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNS4zLWMwMTEgNjYuMTQ1NjYxLCAyMDEyLzAyLzA2LTE0OjU2OjI3ICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOmRjPSJodHRwOi8vcHVybC5vcmcvZGMvZWxlbWVudHMvMS4xLyIgeG1sbnM6eG1wTU09Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9tbS8iIHhtbG5zOnN0RXZ0PSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VFdmVudCMiIHhtbG5zOnN0UmVmPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VSZWYjIiB4bWxuczpwaG90b3Nob3A9Imh0dHA6Ly9ucy5hZG9iZS5jb20vcGhvdG9zaG9wLzEuMC8iIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoV2luZG93cykiIHhtcDpDcmVhdGVEYXRlPSIyMDE1LTA2LTA4VDEzOjA3OjIwKzA1OjMwIiB4bXA6TWV0YWRhdGFEYXRlPSIyMDE1LTA2LTEwVDEwOjU1OjMwKzA1OjMwIiB4bXA6TW9kaWZ5RGF0ZT0iMjAxNS0wNi0xMFQxMDo1NTozMCswNTozMCIgZGM6Zm9ybWF0PSJpbWFnZS9qcGVnIiB4bXBNTTpJbnN0YW5jZUlEPSJ4bXAuaWlkOjcwNDYyNkEyMzAwRkU1MTE5OTg5OTA5NUFBRjgxODE3IiB4bXBNTTpEb2N1bWVudElEPSJ4bXAuZGlkOkZCQzI5OTMxQUQwREU1MTE4RDE1RTQ4MDZGNDk0QjE3IiB4bXBNTTpPcmlnaW5hbERvY3VtZW50SUQ9InhtcC5kaWQ6RkJDMjk5MzFBRDBERTUxMThEMTVFNDgwNkY0OTRCMTciIHBob3Rvc2hvcDpMZWdhY3lJUFRDRGlnZXN0PSJDRENGRkE3REE4QzdCRTA5MDU3MDc2QUVBRjA1QzM0RSIgcGhvdG9zaG9wOkNvbG9yTW9kZT0iMyIgcGhvdG9zaG9wOklDQ1Byb2ZpbGU9InNSR0IgSUVDNjE5NjYtMi4xIj4gPHhtcE1NOkhpc3Rvcnk+IDxyZGY6U2VxPiA8cmRmOmxpIHN0RXZ0OmFjdGlvbj0iY3JlYXRlZCIgc3RFdnQ6aW5zdGFuY2VJRD0ieG1wLmlpZDpGQkMyOTkzMUFEMERFNTExOEQxNUU0ODA2RjQ5NEIxNyIgc3RFdnQ6d2hlbj0iMjAxNS0wNi0wOFQxMzowNzoyMCswNTozMCIgc3RFdnQ6c29mdHdhcmVBZ2VudD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoV2luZG93cykiLz4gPHJkZjpsaSBzdEV2dDphY3Rpb249InNhdmVkIiBzdEV2dDppbnN0YW5jZUlEPSJ4bXAuaWlkOkZFQzI5OTMxQUQwREU1MTE4RDE1RTQ4MDZGNDk0QjE3IiBzdEV2dDp3aGVuPSIyMDE1LTA2LTA4VDEzOjU4OjAyKzA1OjMwIiBzdEV2dDpzb2Z0d2FyZUFnZW50PSJBZG9iZSBQaG90b3Nob3AgQ1M2IChXaW5kb3dzKSIgc3RFdnQ6Y2hhbmdlZD0iLyIvPiA8cmRmOmxpIHN0RXZ0OmFjdGlvbj0ic2F2ZWQiIHN0RXZ0Omluc3RhbmNlSUQ9InhtcC5paWQ6NkQ0NjI2QTIzMDBGRTUxMTk5ODk5MDk1QUFGODE4MTciIHN0RXZ0OndoZW49IjIwMTUtMDYtMTBUMTA6NTU6MDMrMDU6MzAiIHN0RXZ0OnNvZnR3YXJlQWdlbnQ9IkFkb2JlIFBob3Rvc2hvcCBDUzYgKFdpbmRvd3MpIiBzdEV2dDpjaGFuZ2VkPSIvIi8+IDxyZGY6bGkgc3RFdnQ6YWN0aW9uPSJjb252ZXJ0ZWQiIHN0RXZ0OnBhcmFtZXRlcnM9ImZyb20gYXBwbGljYXRpb24vdm5kLmFkb2JlLnBob3Rvc2hvcCB0byBpbWFnZS9qcGVnIi8+IDxyZGY6bGkgc3RFdnQ6YWN0aW9uPSJkZXJpdmVkIiBzdEV2dDpwYXJhbWV0ZXJzPSJjb252ZXJ0ZWQgZnJvbSBhcHBsaWNhdGlvbi92bmQuYWRvYmUucGhvdG9zaG9wIHRvIGltYWdlL2pwZWciLz4gPHJkZjpsaSBzdEV2dDphY3Rpb249InNhdmVkIiBzdEV2dDppbnN0YW5jZUlEPSJ4bXAuaWlkOjZFNDYyNkEyMzAwRkU1MTE5OTg5OTA5NUFBRjgxODE3IiBzdEV2dDp3aGVuPSIyMDE1LTA2LTEwVDEwOjU1OjAzKzA1OjMwIiBzdEV2dDpzb2Z0d2FyZUFnZW50PSJBZG9iZSBQaG90b3Nob3AgQ1M2IChXaW5kb3dzKSIgc3RFdnQ6Y2hhbmdlZD0iLyIvPiA8cmRmOmxpIHN0RXZ0OmFjdGlvbj0ic2F2ZWQiIHN0RXZ0Omluc3RhbmNlSUQ9InhtcC5paWQ6NzA0NjI2QTIzMDBGRTUxMTk5ODk5MDk1QUFGODE4MTciIHN0RXZ0OndoZW49IjIwMTUtMDYtMTBUMTA6NTU6MzArMDU6MzAiIHN0RXZ0OnNvZnR3YXJlQWdlbnQ9IkFkb2JlIFBob3Rvc2hvcCBDUzYgKFdpbmRvd3MpIiBzdEV2dDpjaGFuZ2VkPSIvIi8+IDwvcmRmOlNlcT4gPC94bXBNTTpIaXN0b3J5PiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo2RDQ2MjZBMjMwMEZFNTExOTk4OTkwOTVBQUY4MTgxNyIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpGQkMyOTkzMUFEMERFNTExOEQxNUU0ODA2RjQ5NEIxNyIgc3RSZWY6b3JpZ2luYWxEb2N1bWVudElEPSJ4bXAuZGlkOkZCQzI5OTMxQUQwREU1MTE4RDE1RTQ4MDZGNDk0QjE3Ii8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAg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yOcp8vLXxZTLPBjqzK1dHhYoKCekeaioaMvL55obGWMKGJOn3XunGb4u7uj+MtD8moctjanAVWflxtTtqOGYZihwkecrdqjc8s+swSY87npFoygUMrSqxNvfuvdGcwfwt6WzOT6t68j7M7MTs3uDpfF9vbXyy7L29N1rjKTJ7cyWXSn3LWUu4KvOY6ngrMJUwySmMRoNF3ubn3XumTbG1PijN8bt59zUHTG+915jr3cW0NoZ/Gbn7ZqMdHU1m6KHxSbhp6jaO36WGGhpssdEETRgS8amH6G917quP37r3Xvfuvde9+691737r3Xvfuvde9+691737r3Xvfuvde9+691737r3Xvfuvde9+691737r3Xvfuvdf/9EeVtqGskLcaiFDEC/JC61DkD8XF/6+/de6t07A6r6uyHWm826P6P617Z6vx3W1Pldo9lbB389V33tndFJiqSsrdzdp7YymUStnxsOUNUKzFU+NIigC2CLYRe63Q+nRmuzcZtreWX7G6npsj1Nkh2Z8a13T0z0TS9d4nbm5aDeFRtimzFLvbHdhUuzMbhoDRVGJyFWlI2RqHfTcCGNdK+610EFRm99Vm8+oc/tHr6j7QxncHwD2/iex9n0W5V2hubLYnasske6m2bnqXx5KfdUJemSCjpkqaiddaGLTGske+r/9A9L/AKiwNVsfcnXG6MBnO2do43e3Rnf20dm9S94VUS7s60rtr1e3Nw0dZg3EGKqqja9dlsRA9MamKJ42WKzt5VC66p004XtfoPE4CTG4DdW19vbY+U2yfkL2fvHG5fOUGMptlbr3Rsbae1Y9l1DnJRrTTvuaizUdGhaE+NykSm6sPde6QOG78+NGyMP0r0duuryG5MJm/jxjusOyd17X3pj63rvax7Emkzm6myGJxOLrquv3Pt7c6JJ91FPHJRRtdSGMyt7r3SA/2dfGdeRfFbam0+xKzdewdh4WbYneu26PbdVHh90bWxua/g1LOlHunC05yseQ2dUSyw06sPGyiORkY6h7r3RWYu7evNvbF+WXVu3cHnqnaPdG6dqZfrSV4KPF/wB1qTaG88puCiXK49cpXxwiTFVMNLogaUsIwWZbBffuvdFJ9+691737r3Xvfuvde9+6912qliFUFmYhVVQSWJIAAAFySffuvdKXcOy947RWgfde09zbYTKwGoxbbhwWUwq5KmUh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',
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'value' => 'http://localhost/sbismart',
        'format' => NULL,
        'safe_value' => 'http://localhost/sbismart',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-02-10 11:15:11 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Risk Analyser',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '41bc4054-8cd2-43dd-88c7-81063c895b65',
  'type' => 'tools',
  'language' => 'und',
  'created' => 1353390167,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'de31af2e-37cc-4d5c-b6c3-d5281959c691',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<?php global $base_url; ?>
<p style="text-align: left"><embed width="487" height="729" type="application/x-shockwave-flash" play="true" loop="true" menu="true" src="<?php echo $base_url ?>/sites/default/files/tools/risk_analyser.swf" pluginspage="http://www.macromedia.com/go/getflashplayer"></embed>&nbsp;</p>
',
        'summary' => '',
        'format' => 'php_code',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2012-11-20 11:12:47 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Series 3: Trade more with less margin using Intraday',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '96f8cb62-1dda-434e-b3e0-aac658807cd0',
  'type' => 'smart_insights',
  'language' => 'und',
  'created' => 1455190952,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'edc7a0ea-07ed-4835-9ade-f6ac7ec7869f',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>&nbsp;</p>

<div>Intraday trading means buying and selling in the same day.&nbsp; It may be either buying first or short selling.&nbsp; Normally intraday traders book profit in small margins.&nbsp; People are making profit by repeated trades or by trading large quantities.</div>

<div>&nbsp;</div>

<div><strong>How to make profit from intraday trade:</strong> The Golden rule of intraday trade is ride with the trend. Hence the first step to make profit in intraday trade is to identify the stock. Intraday charts are the best way to identify stocks for trading intraday. Study the historical charts and find out the upward or downward moving stocks. Then see the previous days intraday chart.&nbsp; Find out the support and resistance levels. The better strategy will be buy at previous days support level and short at previous days resistance levels. Also shorting below support level and buying above resistance level are good ideas.</div>

<div>&nbsp;</div>

<div>Keeping stop loss is very important for intraday trade. Otherwise one will lose heavily. Where to keep stop loss is a very important question. Again previous days intraday charts will help. If one shorted in a stock, keep stop loss at previous days high or days high. Also if bought, keep stop loss at previous days lows, or days lows. Another thing to remember is keep trailing stop loss and revise stop loss when one is in profit. Instead of booking profit, one can keep stop loss for profit and can revise according to upward movement.&nbsp; Normally this will help a lot in intraday trade.</div>

<div>&nbsp;</div>

<div>The two things to avoid in stock market and particularly in intraday trade are panic and greedy.&nbsp; When one enters in a trade and goes in opposite direction, donÔÇÖt be panic. Wait some time, keep strict stop loss. If&nbsp;stop loss triggers, donÔÇÖt enter again.&nbsp; Wait some time and relax, watch the market trend and enter in some other stocks.&nbsp; Another thing to avoid is greediness.&nbsp; Some people will not book profit and wait for more and more profit. But such people will end up in loss only.&nbsp; In intraday trade book profit in every highs. Wait for a dip and enter again if trend sustains.</div>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p> </p>
<p>Intraday trading means buying and selling in the same day.  It may be either buying first or short selling.  Normally intraday traders book profit in small margins.  People are making profit by repeated trades or by trading large quantities.</p>
<p> </p>
<p><strong>How to make profit from intraday trade:</strong> The Golden rule of intraday trade is ride with the trend. Hence the first step to make profit in intraday trade is to identify the stock. Intraday charts are the best way to identify stocks for trading intraday. Study the historical charts and find out the upward or downward moving stocks. Then see the previous days intraday chart.  Find out the support and resistance levels. The better strategy will be buy at previous days support level and short at previous days resistance levels. Also shorting below support level and buying above resistance level are good ideas.</p>
<p> </p>
<p>Keeping stop loss is very important for intraday trade. Otherwise one will lose heavily. Where to keep stop loss is a very important question. Again previous days intraday charts will help. If one shorted in a stock, keep stop loss at previous days high or days high. Also if bought, keep stop loss at previous days lows, or days lows. Another thing to remember is keep trailing stop loss and revise stop loss when one is in profit. Instead of booking profit, one can keep stop loss for profit and can revise according to upward movement.  Normally this will help a lot in intraday trade.</p>
<p> </p>
<p>The two things to avoid in stock market and particularly in intraday trade are panic and greedy.  When one enters in a trade and goes in opposite direction, donÔÇÖt be panic. Wait some time, keep strict stop loss. If stop loss triggers, donÔÇÖt enter again.  Wait some time and relax, watch the market trend and enter in some other stocks.  Another thing to avoid is greediness.  Some people will not book profit and wait for more and more profit. But such people will end up in loss only.  In intraday trade book profit in every highs. Wait for a dip and enter again if trend sustains.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_smart_insights_category' => array(
    'und' => array(
      0 => array(
        'tid' => 154,
        'uuid' => '2c5744ac-890d-4df9-a136-7e27496d311a',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-02-11 17:12:32 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Webinar',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd82826ea-ff25-42e8-b120-cf8c1bb241e7',
  'type' => 'webinars',
  'language' => 'und',
  'created' => 1455170753,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fe389449-f360-406b-a4b8-0974217e8060',
  'revision_uid' => 1,
  'body' => array(),
  'field_webinar_date' => array(),
  'field_webinar_expert' => array(),
  'field_who_shall_benefit_wb' => array(),
  'field_video_url' => array(),
  'field_access_control_wb' => array(),
  'field_tag' => array(),
  'field_expert_talk_invitees' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-02-11 11:35:53 +0530',
);
  return $nodes;
}
