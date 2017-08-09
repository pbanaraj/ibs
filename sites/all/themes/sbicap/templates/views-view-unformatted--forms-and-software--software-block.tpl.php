<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<div class="row">
	<div class="col-sm-12">
		<p class="invest-sub-tit">
			<?php print t('SOFTWARES');?>
		</p>
	</div>
</div>
<div class="row">
	<div class="col-sm-12">
		<div class="invest-frm-container">
			<div class="row">
			<?php foreach ($rows as $id => $row): ?>
<?php print $row;?>
			<?php endforeach;?>
				
			</div>
		</div>
	</div>
</div>
