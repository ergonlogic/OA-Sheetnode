<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function oa_sheetnode_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sheetnode_on_book_listing';
  $context->description = 'Adding the "Add Sheetnode" button to the Notebook';
  $context->tag = 'Book, Sheetnode';
  $context->conditions = array(
    'bookroot' => array(
      'values' => array(
        'book' => 'book',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'node' => array(
      'values' => array(
        'sheetnode' => 'sheetnode',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'book_listing' => 'book_listing',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'diff-inline' => array(
          'module' => 'diff',
          'delta' => 'inline',
          'region' => 'right',
          'weight' => 0,
        ),
        'atrium_book-book_all' => array(
          'module' => 'atrium_book',
          'delta' => 'book_all',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'menu' => 'notebook',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Adding the "Add Sheetnode" button to the Notebook');
  t('Book, Sheetnode');

  $export['sheetnode_on_book_listing'] = $context;
  return $export;
}
