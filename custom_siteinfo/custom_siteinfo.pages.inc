<?php

/**
 * Create json object
 * @params  $nid, the node id
 * @params $key, is the site API key id 
 */
function custom_siteinfo_create_json($nid, $key = '') {
  $output = '';
  
  if (is_numeric($nid)){
    $node = node_load($nid);
    $output =  drupal_json_encode($node);
  }
  
  return $output;
}