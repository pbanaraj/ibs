<div class="row other-dwn-container">
	<div class="col-sm-12">
		<p class="invest-sub-tit">
			<?php print t('MARGIN FILES'); ?>
		</p>
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
	</div>
</div>