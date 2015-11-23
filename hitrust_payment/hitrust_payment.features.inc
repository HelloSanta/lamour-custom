<?php
/**
 * @file
 * hitrust_payment.features.inc
 */

/**
 * Implements hook_views_api().
 */
function hitrust_payment_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hitrust_payment_node_info() {
  $items = array(
    'deposit_record' => array(
      'name' => t('付款紀錄'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
