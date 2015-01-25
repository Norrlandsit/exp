<?php
/**
 * @file
 * events_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function events_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_kategori_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_event_typ_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  /* Field: Content: Event typ */
  $handler->display->display_options['fields']['field_event_typ']['id'] = 'field_event_typ';
  $handler->display->display_options['fields']['field_event_typ']['table'] = 'field_data_field_event_typ';
  $handler->display->display_options['fields']['field_event_typ']['field'] = 'field_event_typ';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Kategori (field_kategori) */
  $handler->display->display_options['filters']['field_kategori_tid']['id'] = 'field_kategori_tid';
  $handler->display->display_options['filters']['field_kategori_tid']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['filters']['field_kategori_tid']['field'] = 'field_kategori_tid';
  $handler->display->display_options['filters']['field_kategori_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kategori_tid']['expose']['operator_id'] = 'field_kategori_tid_op';
  $handler->display->display_options['filters']['field_kategori_tid']['expose']['label'] = 'Kategori (field_kategori)';
  $handler->display->display_options['filters']['field_kategori_tid']['expose']['operator'] = 'field_kategori_tid_op';
  $handler->display->display_options['filters']['field_kategori_tid']['expose']['identifier'] = 'field_kategori_tid';
  $handler->display->display_options['filters']['field_kategori_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_kategori_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_kategori_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_kategori_tid']['vocabulary'] = 'kategori';
  /* Filter criterion: Content: Event typ (field_event_typ) */
  $handler->display->display_options['filters']['field_event_typ_tid']['id'] = 'field_event_typ_tid';
  $handler->display->display_options['filters']['field_event_typ_tid']['table'] = 'field_data_field_event_typ';
  $handler->display->display_options['filters']['field_event_typ_tid']['field'] = 'field_event_typ_tid';
  $handler->display->display_options['filters']['field_event_typ_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_typ_tid']['expose']['operator_id'] = 'field_event_typ_tid_op';
  $handler->display->display_options['filters']['field_event_typ_tid']['expose']['label'] = 'Event typ (field_event_typ)';
  $handler->display->display_options['filters']['field_event_typ_tid']['expose']['operator'] = 'field_event_typ_tid_op';
  $handler->display->display_options['filters']['field_event_typ_tid']['expose']['identifier'] = 'field_event_typ_tid';
  $handler->display->display_options['filters']['field_event_typ_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_typ_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_event_typ_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_typ_tid']['vocabulary'] = 'event_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Kategori (field_kategori) */
  $handler->display->display_options['filters']['field_kategori_tid']['id'] = 'field_kategori_tid';
  $handler->display->display_options['filters']['field_kategori_tid']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['filters']['field_kategori_tid']['field'] = 'field_kategori_tid';
  $handler->display->display_options['filters']['field_kategori_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kategori_tid']['expose']['operator_id'] = 'field_kategori_tid_op';
  $handler->display->display_options['filters']['field_kategori_tid']['expose']['label'] = 'Kategori (field_kategori)';
  $handler->display->display_options['filters']['field_kategori_tid']['expose']['operator'] = 'field_kategori_tid_op';
  $handler->display->display_options['filters']['field_kategori_tid']['expose']['identifier'] = 'field_kategori_tid';
  $handler->display->display_options['filters']['field_kategori_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_kategori_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_kategori_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_kategori_tid']['vocabulary'] = 'kategori';
  /* Filter criterion: Content: Event typ (field_event_typ) */
  $handler->display->display_options['filters']['field_event_typ_tid']['id'] = 'field_event_typ_tid';
  $handler->display->display_options['filters']['field_event_typ_tid']['table'] = 'field_data_field_event_typ';
  $handler->display->display_options['filters']['field_event_typ_tid']['field'] = 'field_event_typ_tid';
  $handler->display->display_options['filters']['field_event_typ_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_typ_tid']['expose']['operator_id'] = 'field_event_typ_tid_op';
  $handler->display->display_options['filters']['field_event_typ_tid']['expose']['label'] = 'Event typ (field_event_typ)';
  $handler->display->display_options['filters']['field_event_typ_tid']['expose']['operator'] = 'field_event_typ_tid_op';
  $handler->display->display_options['filters']['field_event_typ_tid']['expose']['identifier'] = 'field_event_typ_tid';
  $handler->display->display_options['filters']['field_event_typ_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_typ_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_event_typ_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_typ_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Datum -  start date (field_datum) */
  $handler->display->display_options['filters']['field_datum_value']['id'] = 'field_datum_value';
  $handler->display->display_options['filters']['field_datum_value']['table'] = 'field_data_field_datum';
  $handler->display->display_options['filters']['field_datum_value']['field'] = 'field_datum_value';
  $handler->display->display_options['filters']['field_datum_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_datum_value']['expose']['operator_id'] = 'field_datum_value_op';
  $handler->display->display_options['filters']['field_datum_value']['expose']['label'] = 'Datum -  start date (field_datum)';
  $handler->display->display_options['filters']['field_datum_value']['expose']['operator'] = 'field_datum_value_op';
  $handler->display->display_options['filters']['field_datum_value']['expose']['identifier'] = 'field_datum_value';
  $handler->display->display_options['filters']['field_datum_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_datum_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_datum_value']['form_type'] = 'date_popup';
  $handler->display->display_options['path'] = 'events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['events'] = $view;

  return $export;
}
