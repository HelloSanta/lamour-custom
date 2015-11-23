<?php
/**
 * @file
 * hitrust_payment.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hitrust_payment_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'workbench_deposit_record';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '(workbench)付款紀錄';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '付款紀錄';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: ordernumber */
  $handler->display->display_options['fields']['field_ordernumber']['id'] = 'field_ordernumber';
  $handler->display->display_options['fields']['field_ordernumber']['table'] = 'field_data_field_ordernumber';
  $handler->display->display_options['fields']['field_ordernumber']['field'] = 'field_ordernumber';
  /* Field: Content: approveamount */
  $handler->display->display_options['fields']['field_approveamount']['id'] = 'field_approveamount';
  $handler->display->display_options['fields']['field_approveamount']['table'] = 'field_data_field_approveamount';
  $handler->display->display_options['fields']['field_approveamount']['field'] = 'field_approveamount';
  $handler->display->display_options['fields']['field_approveamount']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: authCode */
  $handler->display->display_options['fields']['field_authcode']['id'] = 'field_authcode';
  $handler->display->display_options['fields']['field_authcode']['table'] = 'field_data_field_authcode';
  $handler->display->display_options['fields']['field_authcode']['field'] = 'field_authcode';
  /* Field: Content: authRRN */
  $handler->display->display_options['fields']['field_authrrn']['id'] = 'field_authrrn';
  $handler->display->display_options['fields']['field_authrrn']['table'] = 'field_data_field_authrrn';
  $handler->display->display_options['fields']['field_authrrn']['field'] = 'field_authrrn';
  /* Field: Content: currency */
  $handler->display->display_options['fields']['field_currency']['id'] = 'field_currency';
  $handler->display->display_options['fields']['field_currency']['table'] = 'field_data_field_currency';
  $handler->display->display_options['fields']['field_currency']['field'] = 'field_currency';
  /* Field: Content: orderdate */
  $handler->display->display_options['fields']['field_orderdate']['id'] = 'field_orderdate';
  $handler->display->display_options['fields']['field_orderdate']['table'] = 'field_data_field_orderdate';
  $handler->display->display_options['fields']['field_orderdate']['field'] = 'field_orderdate';
  $handler->display->display_options['fields']['field_orderdate']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: orderstatus */
  $handler->display->display_options['fields']['field_orderstatus']['id'] = 'field_orderstatus';
  $handler->display->display_options['fields']['field_orderstatus']['table'] = 'field_data_field_orderstatus';
  $handler->display->display_options['fields']['field_orderstatus']['field'] = 'field_orderstatus';
  /* Field: Content: retcode */
  $handler->display->display_options['fields']['field_retcode']['id'] = 'field_retcode';
  $handler->display->display_options['fields']['field_retcode']['table'] = 'field_data_field_retcode';
  $handler->display->display_options['fields']['field_retcode']['field'] = 'field_retcode';
  /* Field: Content: Transaction id */
  $handler->display->display_options['fields']['field_transaction_id']['id'] = 'field_transaction_id';
  $handler->display->display_options['fields']['field_transaction_id']['table'] = 'field_data_field_transaction_id';
  $handler->display->display_options['fields']['field_transaction_id']['field'] = 'field_transaction_id';
  $handler->display->display_options['fields']['field_transaction_id']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'deposit_record' => 'deposit_record',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/workbench/deposit-record';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = '付款紀錄';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['workbench_deposit_record'] = array(
    t('Master'),
    t('付款紀錄'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('ordernumber'),
    t('approveamount'),
    t('authCode'),
    t('authRRN'),
    t('currency'),
    t('orderdate'),
    t('orderstatus'),
    t('retcode'),
    t('Transaction id'),
    t('Page'),
  );
  $export['workbench_deposit_record'] = $view;

  return $export;
}
