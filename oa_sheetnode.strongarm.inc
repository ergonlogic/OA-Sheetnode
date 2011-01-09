<?php

/**
 * Implementation of hook_strongarm().
 */
function oa_sheetnode_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sheetnode_fiddle';
  $strongarm->value = '0';

  $export['sheetnode_fiddle'] = $strongarm;
  return $export;
}
