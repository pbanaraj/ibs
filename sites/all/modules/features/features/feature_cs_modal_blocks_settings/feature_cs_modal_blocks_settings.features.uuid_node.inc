<?php
/**
 * @file
 * feature_cs_modal_blocks_settings.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function feature_cs_modal_blocks_settings_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Customer Service',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0e058df9-c2ea-a374-7d77-d13f65804e40',
  'type' => 'page',
  'language' => 'und',
  'created' => 1459850793,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '20a939da-c130-33c4-1d06-7ef3c4c0777b',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="row hidden-xs">
<div class="col-lg-4 col-md-4 col-sm-4 col-xs-12">
<div class="getStart">getting started</div>
</div>

<div class="col-lg-4 col-md-4 col-sm-4 col-xs-12">
<div class="contactUs">contact us</div>
</div>

<div class="col-lg-4 col-md-4 col-sm-4 col-xs-12">
<div class="quickAccess">quick access</div>
</div>
</div>

<div class="row">
<div class="col-lg-12 col-md-12 col-sm-12 col-xs-12">
<div>
<hr /></div>
</div>
</div>

<div class="row">
<div class="col-lg-4 col-md-4 col-sm-4 col-xs-12">
<div class="getStart hidden-lg hidden-md hidden-sm">getting started</div>

<ul class="containerlists">
	<li>Registered / Open a trading account</li>
	<li><a class="use-ajax ctools-modal-ctools-custom-form-style" href="/modal_display/form/nojs/account_opening_status_form/<?php echo urlencode(\'Account Opening Status Tracker\');?>" title="Account Opening Status">Account Opening Status</a></li>
	<li><a class="use-ajax ctools-modal-ctools-custom-form-style" href="/modal_display/form/nojs/lead_status_tracker_form/<?php echo urlencode(\'Lead Status Tracker\');?>" title="Lead Status Tracker">Lead Status Tracker</a></li>
	<li><a class="use-ajax ctools-modal-ctools-custom-form-style" href="/modal_display/form/nojs/internet_banking_service_tracker_form/<?php echo urlencode(\'Internet Banking Service Tracker\');?>" title="INB Service Tracker">INB Service Tracker</a></li>
</ul>
</div>

<div class="col-lg-4 col-md-4 col-sm-4 col-xs-12">
<div class="contactUs hidden-lg hidden-md hidden-sm divSpace">contact us</div>

<ul class="containerlists">
	<li>E-mail Us</li>
	<li>Call Us</li>
	<li>Locate Us</li>
</ul>
</div>

<div class="col-lg-4 col-md-4 col-sm-4 col-xs-12">
<div class="quickAccess hidden-lg hidden-md hidden-sm divSpace">quick access</div>

<ul class="containerlists">
	<li>Tools</li>
	<li>Interest Rates / Charges</li>
	<li>Call / Trade contact numbers</li>
	<li>Feedback</li>
</ul>
</div>
</div>
',
        'summary' => '',
        'format' => 'php_code',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'date' => '2016-04-05 15:36:33 +0530',
);
  return $nodes;
}
