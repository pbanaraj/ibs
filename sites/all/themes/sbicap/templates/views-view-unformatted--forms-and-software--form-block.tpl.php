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
<p class="invest-sub-tit">
	<?php print t('FORMS'); ?>
</p>
<div class="invest-frm-container first">
	<div class="row">
<?php foreach ($rows as $id => $row): ?>
	<?php if(($id+1) % 2 != 0):?>
			</div>
		</div>
		<div class="invest-frm-container" <?php print ($id > 7)?'style="display:none;"':'';?>>
			<div class="row">
	<?php endif;?>
	<?php print $row;?>
<?php endforeach; ?>
	</div>
</div>
