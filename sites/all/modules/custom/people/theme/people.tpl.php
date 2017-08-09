<?php

/**
 * @file
 *custom template for download page
 *
 * @ingroup views_templates
 */
?>


<div class="row">
	<div class="col-xs-12">
		<!-- Board of directors container -->
		<div class="people-container">
			<div class="row">
				<div class="col-sm-12">
					<h4> BOARD OF DIRECTORS </h4>
				</div>
			</div>
			<div class="row">
				<div class="col-sm-12">
					
						<?php
						  $block = module_invoke('people', 'block_view', 'board_director');
						  print render($block['content']);
						?>
						
									
				</div>
			</div>
		</div>
		<!-- Management Team container -->
		<div class="people-container">
			<div class="row">
				<div class="col-sm-12">
					<h4> MANAGEMENT TEAM </h4>
				</div>
			</div>
			<div class="row">
				<div class="col-sm-12">
					
						
						<?php
						  $block = module_invoke('people', 'block_view', 'management_team');
						  print render($block['content']);
						?>
						
				</div>
			</div>
		</div>
	</div>
</div>