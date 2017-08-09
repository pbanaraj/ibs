<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup templates
 */
?>


    <div class="wrapper">
        <!--Header Starts -->
        <header>
            <div class="row main-row">
                <div class="col-lg-4 col-md-4 col-sm-2 col-xs-6">
                    <?php if ($logo): ?>
			        <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
			          <!-- <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /> -->
			        </a>
			        <?php endif; ?>
                </div>
                <div class="col-lg-8 col-md-8 col-sm-10 col-xs-6 sitMargin">
                    <label for="show-menu" class="show-menu">Top Menu</label>
                    <div class="showLargeOnly">
                        <?php if (!empty($page['topnav'])): ?>
				            <?php print render($page['topnav']); ?>
				          <?php endif; ?>
                    </div>
                </div>
                <div class="col-lg-12 col-md-12 col-sm-12 col-xs-12 showSmallOnly">
                    <?php  if (!empty($page['topnav'])): ?>
			            <?php print render($page['topnav']); ?>
			          <?php endif; ?>
                </div>
                <div class="col-lg-12 col-md-12 col-sm-12 col-xs-12">
                    <div class="searchDrop pull-right">
                        
                        <?php  //if (!empty($page['topsearch'])): ?>
				            <?php print render($page['topsearch']); ?>
				          <?php //endif; ?>
                        
                    </div>
                </div>
            </div>
            
            <?php include('quick-panel.tpl.php');?>
            
        </header>
        <!--Header Ends -->

        <div class="container">
            <div id="wrapper">
                <div class="row">
                    <div class="col-lg-12 col-md-12 col-sm-12 col-xs-12">
                        <!-- Section navigation for page -->
                        <nav class="navbar navbar-inverse" id="floatScroll">
                            <div class="navbar-header">
                            
                                <?php include('responsive_nav_link.tpl.php');?>
								  
                                <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
							        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#myNavbar">
	                                    <span class="icon-bar"></span>
	                                    <span class="icon-bar"></span>
	                                    <span class="icon-bar"></span>
	                                </button>
							   <?php endif; ?>
                            </div>
                            <div class="collapse navbar-collapse" id="myNavbar">
                                <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
							          <?php if (!empty($primary_nav)): ?>
							            <?php print render($primary_nav); ?>
							          <?php endif; ?>
							          <?php /*if (!empty($secondary_nav)): ?>
							            <?php print render($secondary_nav); ?>
							          <?php endif;*/ ?>
							          <?php if (!empty($page['navigation'])): ?>
							            <?php print render($page['navigation']); ?>
							          <?php endif; ?>
							    <?php endif; ?>
                            </div>
                        </nav>
                        
                    </div>
                </div>
                <div class="row">
                  <?php if (!empty($page['notifications'])): ?>
                    <div class="row notification-container">
                      <?php print render($page['notifications']); ?>
                    </div>
                  <?php endif;?>
                    <div class="col-lg-12 col-md-12 col-sm-12 col-xs-12">
                    <?php $path = drupal_get_path_alias();
					$aliases = explode('/', $path);?>
                    <div class="branchesWrapper pageWrapper <?php print 'Wrapper-'.end($aliases);//print variable_get('wrapper');//print $_SESSION['wrapper'];?>">
	                        <header role="banner" id="page-header">
						    <?php if (!empty($site_slogan)): ?>
						      <p class="lead"><?php print $site_slogan; ?></p>
						    <?php endif; ?>
						
						    <?php //print render($page['header']); ?>
						  </header> <!-- /#page-header -->
						
						  <div class="row">
						  <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
							<?php if (!empty($tabs)): ?>
						        <?php print render($tabs); ?>
						      <?php endif; ?>
						      <?php print render($title_prefix); ?>
						      <?php if (!empty($title)): ?>
						        <div class="col-lg-11 col-md-11 col-sm-11 col-xs-10 ralewayBold pageHeadng"><?php print $title; ?></div>
						        <?php if (!empty($education_tooltip)) :?>
						          <div class="col-lg-1 col-md-1 col-sm-1 col-xs-2 education-tooltip">
						            <div class="help pull-right" data-toggle="tooltip" data-placement="left" title="<?php print render($education_tooltip);?>"></div>
								  </div>
								<?php endif;?>
						      <?php endif; ?>
						      <?php print render($title_suffix); ?>
							<?php print render($page['header']); ?>
							
						    <?php if (!empty($page['sidebar_first'])): ?>
						      <aside class="col-sm-3" role="complementary">
						        <?php print render($page['sidebar_first']); ?>
						      </aside>  <!-- /#sidebar-first -->
						    <?php endif; ?>
						
						    <section<?php print $content_column_class; ?>>
						      <?php if (!empty($page['highlighted'])): ?>
						        <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
						      <?php endif; ?>
						      <a id="main-content"></a>
						      <?php //print render($title_prefix); ?>
						      <?php /*if (!empty($title)): ?>
						        <div class="col-lg-11 col-md-11 col-sm-11 col-xs-10 ralewayBold pageHeadng"><?php print $title; ?></div>
						      <?php endif;*/ ?>
						      <?php //print render($title_suffix); ?>
						      <?php print $messages; ?>
						      <?php /*if (!empty($tabs)): ?>
						        <?php print render($tabs); ?>
						      <?php endif;*/ ?>
						      <?php if (!empty($page['help'])): ?>
						        <?php print render($page['help']); ?>
						      <?php endif; ?>
						      <?php if (!empty($action_links)): ?>
						        <ul class="action-links"><?php print render($action_links); ?></ul>
						      <?php endif; ?>
						      <?php if (!empty($page['content_top'])): ?>
						        <?php print render($page['content_top']); ?>
						      <?php endif; ?>
						      <?php print render($page['content']); ?>
						      <?php if (!empty($page['content_bottom'])): ?>
						        <?php print render($page['content_bottom']); ?>
						      <?php endif; ?>
						    </section>
						
						    <?php if (!empty($page['sidebar_second'])): ?>
						      <aside class="col-sm-3" role="complementary">
						        <?php print render($page['sidebar_second']); ?>
						      </aside>  <!-- /#sidebar-second -->
						    <?php endif; ?>
						
						  </div>
					  </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
 
    <!--Footer Starts -->

    <footer>
        <div class="footer-inner">
            <div class="row main-row">
                <div class="col-md-10 col-sm-12 col-xs-12">
                    <div class="row">
                        
                        <?php if (!empty($page['footer_top_left'])): ?>
				            <?php print render($page['footer_top_left']); ?>
				          <?php endif; ?>
                    </div>
                </div>
                <div class="col-md-2 col-xs-12 padRightNone">
                	<?php if (!empty($page['footer_top_right'])): ?>
			            <?php print render($page['footer_top_right']); ?>
			          <?php endif; ?>
                </div>
                <span class="clearfix"></span>
                <div class="divider"></div>
                <div class="row main-row">
                    <div class="col-lg-12 col-md-12 col-sm-12 col-xs-12">
						<?php if (!empty($page['footer'])): ?>
			            <?php print render($page['footer']); ?>
			          <?php endif; ?>

                    </div>
                    <div class="col-lg-12 col-md-12 col-sm-12 col-xs-12">
                        <?php if (!empty($page['footer_bottom'])): ?>
			            <?php print render($page['footer_bottom']); ?>
			          <?php endif; ?>
                    </div>
                </div>
            </div>
        </div>
    </footer>
    
