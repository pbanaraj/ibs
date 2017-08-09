<div class="floatMenu">
	<div class="clearfix">
		<a href="#" title="Show" class="floatnavTrigger pull-right hide-btn">Show</a>
		<a href="#" title="Hide" class="floatnavTrigger pull-right">Hide</a>
	</div>

	<div class="clearfix right-cont-menu">
		<ul class="floatMenulist pull-right">
		<?php if ((!$is_front) && (arg(0) != 'user') && (arg(0) != 'open-account')): ?>
			<li class="acctIcon">
				<a href="#" title="Open An Account">Open An Account</a>
			</li>
		<?php endif; ?>
			<li class="callIcon">
				<a href="/contact-us" title="Contact Us">Contact Us</a>
			</li>
			<?php /* <li class="emailIcon">
				<a href="#" title="Email Us">Email Us</a>
			</li> */ ?>
			<li class="queryIcon">
				<a href="/faq" title="Top Queries/ Faq">Top Queries/ Faq</a>
			</li>
			<li class="demoIcon">
				<a href="/education/demo" title="Demo">Demo</a>
			</li>
			<li class="nriIcon">
				<a href="/nri-zone" title="NRI Zone">NRI Zone</a>
			</li>
			<li class="partIcon">
				<a href="/partner-zone" title="Partner Zone">Partner Zone</a>
			</li>
		</ul>
		<?php if (!empty($page['quick_tab'])): ?>
		<div class="open-acc-form pull-left">
			<div class="popup-open-acc-form">
				<div class="form-fld-container form-container-scroll">
		            <?php print render($page['quick_tab']); ?>
				</div>
			</div>
		</div>
		<?php endif; ?>
	</div>
</div>