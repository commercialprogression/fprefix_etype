<?php
/**
 * @file
 * fprefix_etype.features.inc
 */

/**
 * Implements hook_views_api().
 */
function fprefix_etype_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function fprefix_etype_eck_bundle_info() {
  $items = array(
    'etype_etype' => array(
      'machine_name' => 'etype_etype',
      'entity_type' => 'etype',
      'name' => 'etype',
      'label' => 'etype',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function fprefix_etype_eck_entity_type_info() {
  $items = array(
    'etype' => array(
      'name' => 'etype',
      'label' => 'etype',
      'properties' => array(
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
      ),
    ),
  );
  return $items;
}
