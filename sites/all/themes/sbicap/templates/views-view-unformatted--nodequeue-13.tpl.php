<?php

/**
* @file
* Default simple view template to display a list of rows.
*
* @ingroup views_templates
*/

?>

<?php if ( empty($title) ): ?>
    <?php $title = filter_xss_admin($view->get_title()); ?>
<?php endif; ?>

<div class="people-container">
    <div class="row">
        <div class="col-sm-12">
                 <h4><?php print $title ?></h4>
        </div>
    </div>
    <div class="row">
        <div class="col-sm-12">

            <?php   $rout = 1; ?>
            <?php   $count = (count($rows) >= 3)? ceil((float) count($rows)/3):1; ?>

            <?php for ($i =1 ; $i <= $count; $i++) { ?>
            <div class="people-listing">
                <div class="row">
                    <?php $step = ((count($rows)-$rout) >= 3)? (3*$i) : ($rout + (count($rows)- $rout)) ;?>
                    <?php for ($c =$rout ; $c <= $step; $c++) {?>
                    <?php $arraycont=explode('~',$rows[$c-1]);?>
                    <div class="col-sm-4 people-listing-holder">
                        <div class="people-listing-inner" style="background:rgba(200, 202, 203,0.4);min-height:160px">
                            <div class="row">
                                <div class="col-sm-4 col-xs-12">
                                    <div class="">
                                        <?php print  $arraycont[0];?>
                                    </div>
                                </div>
                                <div class="col-sm-8 col-xs-12 no-pad">
                                    <div class="people-listing-rt">
                                        <h4><?php print $arraycont[1] ?></h4>	
                                    </div>
                                </div>
                            </div>

                            <p class="people-desc"><?php print substr(strip_tags($arraycont[2]),0,60)?></p>
                            <p class="more-link">
                                <a href="javaScript:;">Know more...</a>
                            </p>
                            <span class="people-act-arw"> </span>
                        </div>
                    </div>
                    <?php } ?>

                    <div class="col-sm-12 people-description-holder">

                        <?php $num = $rout; ?>
                        <?php for ($c =$num ; $c <= $step; $c++) {?>
                        <?php $arraycont2=explode('~',$rows[$c-1]); ?>
                        <div class="people-description-container" style="display: none;">
                            <div class="row desc-tit-cont">
                                <div class="col-sm-9">
                                    <h4> <?php print $arraycont2[1];?></h4>

                                </div>
                                <div class="col-sm-3">
                                    <div class="people-desc-close">
                                        X
                                    </div>
                                </div>
                            </div>
                            <div class="row">
                                <div class="col-sm-12">
                                    <div class="people-lg-desc-cont">
                                        <div class="col-sm-2">
                                            <div class="row">
                                                <div class="col-sm-12">
                                                    <?php print $arraycont2[0]; ?>
                                                </div>
                                            </div>
                                        </div>
                                        <div class="col-sm-10">
                                            <div class="people-lg-desc-txt">
                                                <?php print $arraycont2[2]; ?>
                                            </div>
                                        </div>
                                    </div>
                                </div>
                            </div>
                        </div>
                        <?php  } ?>
                        <?php $rout = $c; ?>

                    </div>
                </div>
            </div>
            <?php	} ?>

        </div>
    </div>
</div>	

