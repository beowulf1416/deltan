<?php
function d1_preprocess_html(&$vars) {
  // Add conditional CSS for IE6.
  drupal_add_css(path_to_theme() . '/css/ie.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lt IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
}