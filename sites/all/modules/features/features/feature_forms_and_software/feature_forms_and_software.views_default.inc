<?php
/**
 * @file
 * feature_forms_and_software.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_forms_and_software_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'forms_and_software';
  $view->description = 'Forms and Software block For download page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Forms and Software';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Forms and Software';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'abcd';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forms_and_software' => 'forms_and_software',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_value']['id'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_value']['field'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['value'] = array(
    'forms' => 'forms',
  );

  /* Display: Forms */
  $handler = $view->new_display('block', 'Forms', 'form_block');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<img class="loading" src="sites/all/themes/sbicap/common/images/loading-small.gif" style="display:none;">';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="row">
<div class="col-sm-12"><a class="dwn-more-link" href="javaScript:;">More &gt;&gt;</a></div>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Result Not Found';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'download_forms' => 'download_forms',
    'board_of_director' => 0,
    'management_team' => 0,
    'sbi_notifications' => 0,
    'why_sbismart' => 0,
    'education_tools' => 0,
    'education_video_demos' => 0,
    'education_document_demos' => 0,
    'product_and_service' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: PDF File */
  $handler->display->display_options['fields']['field_pdf_file']['id'] = 'field_pdf_file';
  $handler->display->display_options['fields']['field_pdf_file']['table'] = 'field_data_field_pdf_file';
  $handler->display->display_options['fields']['field_pdf_file']['field'] = 'field_pdf_file';
  $handler->display->display_options['fields']['field_pdf_file']['label'] = '';
  $handler->display->display_options['fields']['field_pdf_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pdf_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf_file']['click_sort_column'] = 'fid';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$file = $data->_field_data[\'nid\'][\'entity\']; 
?>

<div class="col-sm-6 invest-frm-container-holder">
	<div class="invest-frm-container-in">
		<div class="row">
			<div class="col-lg-9 col-md-9 col-sm-8">
				<div class="invest-frm-lft">
				<?php if(isset($file->field_pdf_file[LANGUAGE_NONE][0][\'uri\'])){?>
					<?php echo $file->title;?>				
				<?php }else{?>
					<a href="<?php echo file_create_url($file->field_link[LANGUAGE_NONE][0][\'value\']);  ?>"><?php echo $file->title;?></a>
				<?php } ?>
				</div>
			</div>
			<div class="col-lg-3 col-md-9 col-sm-4">
				<div class="invest-frm-rt" id="<?php print $file->nid;?>">
				<?php if(isset($file->field_pdf_file[LANGUAGE_NONE][0][\'uri\'])){?>
					<a href="<?php echo file_create_url($file->field_pdf_file[LANGUAGE_NONE][0][\'uri\']);  ?>"><img src="/sites/all/themes/sbicap/common/images/common-download-icon.png" class="img-responsive" ></a>
				<?php }else{?>
					<a href="<?php echo file_create_url($file->field_link[LANGUAGE_NONE][0][\'value\']);  ?>"><img src="/sites/all/themes/sbicap/common/images/common-download-icon.png" class="img-responsive" ></a>
				<?php } ?>
				</div>
			</div>
		</div>
	</div>
</div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forms_and_software' => 'forms_and_software',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_value']['id'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_value']['field'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['value'] = array(
    'forms' => 'forms',
  );

  /* Display: Software */
  $handler = $view->new_display('block', 'Software', 'software_block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Software Link */
  $handler->display->display_options['fields']['field_software_link']['id'] = 'field_software_link';
  $handler->display->display_options['fields']['field_software_link']['table'] = 'field_data_field_software_link';
  $handler->display->display_options['fields']['field_software_link']['field'] = 'field_software_link';
  $handler->display->display_options['fields']['field_software_link']['label'] = '';
  $handler->display->display_options['fields']['field_software_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_software_link']['element_label_colon'] = FALSE;
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php if(isset($data->field_field_short_description[0][\'raw\'][\'value\'])){ ?>
	<div class="col-sm-12 invest-frm-container-holder">
		<div class="digital-contact-mode">
			<div class="row">
				<div class="col-sm-12">
					<div clas="digital-contact-mode-in">
						<h4 class="digital-tit"><?php echo $row->title;?></h4>
						<span class="digital-toggle-arw"> </span>
					</div>
				</div>
			</div>
		</div>
		<div class="row">
			<div class="col-sm-12">
				<div class="digital-contact-mode-desc" style="display: none;">
					<div>
						<?php echo $data->field_field_short_description[0][\'raw\'][\'value\'];?>
					</div>
					
					<div class="digital-mode-dwn-cnt">
						<a id="<?php print $data->nid;?>" href="<?php echo $data->field_field_software_link[0][\'raw\'][\'value\'];?>"><img alt="Sbi Home Loan" class="img-responsive" src="/sites/all/themes/sbicap/common/images/common-download-icon.png"></a>
					</div>
				</div>
			</div>
		</div>
	</div>
<?php }else{?>
<div class="col-sm-12 invest-frm-container-holder">
	<div class="invest-frm-container-in">
		<div class="row">
			<div class="col-lg-9 col-md-9 col-sm-8">
				<div class="invest-frm-lft">
					<?php echo $row->title;?>
				</div>
			</div>
			<div class="col-lg-3 col-md-9 col-sm-4">
				<div class="invest-frm-rt">
					<a id="<?php print $data->nid;?>" href="<?php echo $data->field_field_software_link[0][\'raw\'][\'value\'];?>"><img alt="Sbi Home Loan" class="img-responsive" src="/sites/all/themes/sbicap/common/images/common-download-icon.png"></a>
				</div>
			</div>
		</div>
	</div>
</div>
<?php } ?>
';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forms_and_software' => 'forms_and_software',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_value']['id'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_value']['field'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['value'] = array(
    'software' => 'software',
  );

  /* Display: Margin Files */
  $handler = $view->new_display('block', 'Margin Files', 'margin_file_block');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="row other-dwn-container">
<div class="col-sm-12">
<p class="invest-sub-tit">OTHERS</p>

<div class="row">
<div class="col-sm-5">
<div class="invest-frm-container others-section">
<div class="row">
<div class="col-sm-12 invest-frm-container-holder">
<div class="invest-frm-container-in">
<div class="row">
<div class="col-lg-8 col-md-8 col-sm-8">
<div class="invest-frm-lft"><a href="https://rbi.org.in/scripts/BS_FiiUSer.aspx">NRI Banned List</a></div>
</div>

<div class="col-lg-4 col-md-9 col-sm-12">
<div class="invest-frm-rt"><img alt="Sbi Home Loan" class="img-responsive" src="/sites/all/themes/sbicap/common/images/common-download-icon.png" /></div>
</div>
</div>
</div>
</div>
</div>
</div>
</div>
</div>
</div>
</div>

<div class="row">
<div class="col-sm-12">
<div class="dwn-important-info">
<div class="row">
<div class="col-sm-12">
<h4 class="imp-info-tit">IMPORTANT INFORMATION</h4>
</div>
</div>

<div class="row">
<div class="col-sm-12">
<ul>
	<li>Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry&#39;s standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book</li>
	<li>Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry&#39;s standard dummy text ever since the 1500s</li>
</ul>
</div>
</div>
</div>
</div>
</div>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: CSV File */
  $handler->display->display_options['fields']['field_csv_file']['id'] = 'field_csv_file';
  $handler->display->display_options['fields']['field_csv_file']['table'] = 'field_data_field_csv_file';
  $handler->display->display_options['fields']['field_csv_file']['field'] = 'field_csv_file';
  $handler->display->display_options['fields']['field_csv_file']['label'] = '';
  $handler->display->display_options['fields']['field_csv_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_csv_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_csv_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_csv_file']['type'] = 'file_url_plain';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$file = $data->_field_data[\'nid\'][\'entity\'];
?>
<div class="col-sm-4 invest-frm-container-holder">
	<div class="invest-frm-container-in">
		<div class="row">
			<div class="col-lg-8 col-md-8 col-sm-8">
				<div class="invest-frm-lft">
					<?php print $file->title;?>
				</div>
			</div>
			<div class="col-lg-4 col-md-9 col-sm-12">
				<div class="invest-frm-rt">
					<a href="<?php echo file_create_url($file->field_csv_file[LANGUAGE_NONE][0][\'uri\']);  ?>"><img src="/sites/all/themes/sbicap/common/images/common-download-icon.png" class="img-responsive"></a>
				</div>
			</div>
		</div>
	</div>
</div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'margin_files' => 'margin_files',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $export['forms_and_software'] = $view;

  return $export;
}
