<?php

function getFaqTaxoTerms(){
  $vocabulary = taxonomy_vocabulary_machine_name_load('faq_category');
  $termObjs = taxonomy_get_tree($vocabulary->vid);
  $output = '<div class="">';
  $output .= '<div class="row">';
  $output .= '<div class="col-sm-12">';
  $output .= '<h3 class="loanPageTitle fontBold webinar-tit">FAQ</h3>';
  $output .= '</div>';
  $output .= '</div>';
  $output .= '<div class="row">';
  $output .= '<div class="col-sm-12">';
  $output .= '<div class="faq-container-rt">';
  $output .= '<div class="faq-container-rt-in what-new-list jScrollResize">';
  $count = 0;
  foreach($termObjs as $termObj){
    $active = ($count !=0)?'':'active';
    //$active = '';
    $output .= '<div class="' . $termObj->tid . ' faq-tit-cont '.$active.'" id="/faq/categry/'.$termObj->tid.'">'.$termObj->name.' <span class="faq-act-arw"> </span></div>';
    $count++;
  }
  $output .= '</div></div></div></div></div>';

  return $output;
}

function getFilterFaqs() {
  global $base_url; 
  
  
  
  $module_path = drupal_get_path('module', 'custom');
 // drupal_add_js($base_url . '/' . $module_path . '/customfaq.js', array('scope' => 'footer', 'weight' => 50));
  drupal_add_js($module_path . '/faq.js', array('scope' => 'footer', 'weight' => 5));

  $output = '';
  
  if(trim(arg(0)) == 'node'){
  	$vocabulary = taxonomy_vocabulary_machine_name_load('faq_category');
  	$termObjs = taxonomy_get_tree($vocabulary->vid);
  	$type = 'categry';
  	$param = $termObjs[0]->tid;
  }else{
  	$type = strtolower(trim(arg(1)));
  	$param = strtolower(trim(arg(2)));
  }
  $term = taxonomy_term_load($param);
  $name = ($term->name)?$term->name:'Faqs';
  if($type == 'search'){$name = 'FAQs';}
  $nodes = node_load_multiple(array(), array('type' => 'faq')); //echo '<pre>'; print_r($nodes);exit;
  $search = 0; //echo '<pre>'; print_r($nodes);exit;
  $categry = 0;
  //$output .= '<div class="col-sm-12">';
  //$output .= '<div class="row">';
  $output .= '<div class="">';
  $output .= '<div class="faq-container-lft">';
  $output .= '<div class="faq-container-lft-in">';
  $output .= '<div class="row">';
  $output .= '<div class="col-sm-12">';
  $output .= '<h3 class="loanPageTitle fontBold webinar-tit">'.$name.'</h3>';
  $output .= '</div></div>';
  $output .= '<div class="row">';
  $output .= '<div class="col-sm-12">';
  $output .= '<img class="loading" src="sites/all/themes/sbicap/common/images/loading-small.gif" style="display:none;">';
  $output .= '<div class="accordition-container">';

  foreach ($nodes as $key => $info) {
    if(($type == 'search') &&($param != '')){
      if (strstr(strtolower($info->title), $param)) {
        $output .= '<div class="faq-panel ' . $info->nid . '">';
        $output .= '<div class="faq-panel-tit">'.$info->title;
        $output .= '<div class="faq-plus-icon faq-icon">+</div>';
        $output .= '<div class="faq-minus-icon faq-icon">_</div></div>';
        $output .= '<div class="faq-panel-desc">'.$info->body['und'][0]['value'].'</div></div>';
        $search++;
      }
    }
    elseif($type == 'categry') {
      if($info->field_faq_category['und'][0]['tid'] == $param){
        $output .= '<div class="faq-panel ' . $info->nid . '">';
        $output .= '<div class="faq-panel-tit">'.$info->title;
        $output .= '<div class="faq-plus-icon faq-icon">+</div>';
        $output .= '<div class="faq-minus-icon faq-icon">_</div></div>';
        $output .= '<div class="faq-panel-desc">'.$info->body['und'][0]['value'].'</div></div>';
        $categry++;
      }
    }
    else {
      $output .= '<div class="faq-panel ' . $info->nid . '">';
      $output .= '<div class="faq-panel-tit">'.$info->title;
      $output .= '<div class="faq-plus-icon faq-icon">+</div>';
      $output .= '<div class="faq-minus-icon faq-icon">_</div></div>';
      $output .= '<div class="faq-panel-desc">'.$info->body['und'][0]['value'].'</div></div>';
    }
  }
  $output .= '</div></div></div></div></div></div>';
  if((($type == 'search') || ($type == 'categry')|| ($type == 'all')) && (trim(arg(0)) != 'node')) {
    $output .= (($search == 0) && ($type == 'search')&& ($param != ''))?"<p align='center' class='no-result'>Search result '".$param."' not found.</p>":'';
    $output .= (($categry == 0) && ($type == 'categry'))?"<p align='center' class='no-result'>FAQ not available for this category.</p>":'';
    $output .= "<script type='taxt/javascript'>jQuery('.faq-panel .faq-panel-tit').on('click',function(){
    jQuery(this).addClass('bg-dark').parent('.faq-panel').siblings('.faq-panel').children('.faq-panel-tit').removeClass('bg-dark')
    jQuery(this).siblings('.faq-panel-desc').show()
    jQuery(this).children('.faq-plus-icon.faq-icon').hide().siblings('.faq-minus-icon.faq-icon').show()
    /*jQuery(this).parent('.faq-panel').siblings('.faq-panel').children('.faq-panel-desc').hide().children('faq-panel-tit').find('.faq-minus-icon').hide().siblings('.faq-plus-icon').show()*/

      jQuery(this).parent('.faq-panel').siblings('.faq-panel').children('.faq-panel-desc').hide(function(){
        jQuery(this).siblings('.faq-panel-tit').find('.faq-minus-icon').hide().siblings('.faq-plus-icon').show()
      })
  })</script>";
    echo $output;
  }
  else{
    return $output;
  }
}
