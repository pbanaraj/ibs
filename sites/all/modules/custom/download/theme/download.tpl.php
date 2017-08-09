<?php

/**
 * @file
 *custom template for download page
 *
 * @ingroup views_templates
 */
?>

<?php 
  $block = module_invoke('content_search', 'block_view', 'CONTENT_SEARCH_BLOCK');
  print $block['content'];
?>

<div class="row">
	<div class="col-sm-12">
		<div class="invest-offline-container">
			<div class="row">
				<div class="col-sm-8 dwn-lft-container form_cnt">
					<div class="download-form-container">
					<?php print views_embed_view('forms_and_software', $display_id = 'form_block'); ?>
					</div>
					<div class="additional-dwn-cnt">
						<?php print views_embed_view('forms_and_software', $display_id = 'margin_file_block'); ?>
						
					</div>
				</div>
				<div class="col-sm-4">
					<div class="invest-offline-container-rt">
						<?php print views_embed_view('forms_and_software', $display_id = 'software_block'); ?>
					</div>
				</div>
			</div>
		</div>
	</div>
</div>