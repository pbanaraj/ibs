<div class="contact-us-lft"><?php //echo '<pre>'; print_r($form);?>
	<div class="row">
		<div class="col-sm-12">
			<h1><?php print t('CONTACT US EMAIL');?> </h1>
		</div>
		<div class="col-sm-12">
			<div class="contact-frm-section">
				<form>
					<div class="fld-container">
						<div class="radio-cont">
							<?php print render($form['exitsting_customer']);?>
						</div>
					</div>
					<div class="fld-container">
						<div class="">
							<?php print render($form['category']);?>
						</div>
					</div>
					<div class="fld-container">
						<div class="">
							<?php print render($form['subcategory']);?>
						</div>
					</div>
					<div class="fld-container">
						<div class="">
							<?php print render($form['query_type']);?>
						</div>
					</div>
					<div class="fld-container">
						<div class="">
							<?php print render($form['some_text']);?>
						</div>
					</div>
					<div class="fld-container">
						<div class="">
							<?php print render($form['client_code']);?>
						</div>
					</div>
					<div class="fld-container">
						<div class="">
							<?php print render($form['name']);?>
						</div>
					</div>
					<div class="fld-container">
						<div class="">
							<?php print render($form['pan_number']);?>
						</div>
					</div>
					<div class="fld-container">
						<div class="">
							<?php print render($form['application_no']);?>
						</div>
					</div>
					<div class="fld-container">
						<div class="">
							<?php print render($form['contact_number']);?>
						</div>
					</div>
					<div class="fld-container">
						<div class="">
							<?php print render($form['date_of_birth']);?>
						</div>
					</div>
					<div class="fld-container">
						<div class="">
							<?php print render($form['email']);?>
						</div>
					</div>
					<div class="fld-container">
						<div class="">
							<?php print render($form['description']);?>
						</div>
					</div>
					<div class="fld-container">
					<img class="loading loading_new" src="sites/all/themes/sbicap/common/images/loading-small.gif" style="display:none;">
						<div class="text-right">
							
							<input type="reset" class="txt-btn reset" name="" value="RESET">
							<?php print render($form['submit']);?>
						</div>
					</div>
				</form>
			</div>
		</div>
	</div>
</div>