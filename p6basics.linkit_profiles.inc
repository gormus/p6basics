<?php
/**
 * @file
 * p6basics.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function p6basics_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'p6basics_linkit';
  $linkit_profile->admin_title = 'Linkit WYSIWYG profile (P6Basics)';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '1';
  $linkit_profile->data = array(
    'text_formats' => array(
      'full_html' => 'full_html',
      'filtered_html' => 0,
      'plain_text' => 0,
    ),
    'search_plugins' => array(
      'entity:bean' => array(
        'enabled' => 0,
        'weight' => '-7',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 1,
        'weight' => '-9',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 1,
        'weight' => '-8',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-6',
      ),
    ),
    'entity:bean' => array(
      'result_description' => '',
      'bundles' => array(
        'blurb' => 0,
        'headline' => 0,
        'image' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:node' => array(
      'result_description' => '[node:menu-link:parents:join:/]: [node:title] (nid:[node:nid])',
      'bundles' => array(
        'page' => 0,
        'blogpost' => 0,
        'event' => 0,
        'news' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 1,
    ),
    'entity:file' => array(
      'result_description' => '[file:name] (file:path]) file:size]',
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'direct',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '[term:vocabulary]: [term:name]',
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'url_method' => '1',
    ),
    'attribute_plugins' => array(
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'imce' => 0,
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['p6basics_linkit'] = $linkit_profile;

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'p6basics_linkit_fields';
  $linkit_profile->admin_title = 'Linkit fields profile (P6Basics)';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '2';
  $linkit_profile->data = array(
    'search_plugins' => array(
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 1,
        'weight' => '-9',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 1,
        'weight' => '-8',
      ),
      'entity:bean' => array(
        'enabled' => 0,
        'weight' => '-7',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-6',
      ),
    ),
    'entity:bean' => array(
      'result_description' => '',
      'bundles' => array(
        'blurb' => 0,
        'headline' => 0,
        'image' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:node' => array(
      'result_description' => '[node:menu-link:parents:join:/]: [node:title] (nid:[node:nid])',
      'bundles' => array(
        'page' => 0,
        'blogpost' => 0,
        'event' => 0,
        'news' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 1,
    ),
    'entity:file' => array(
      'result_description' => '[file:name] (file:path]) file:size]',
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'direct',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '[term:vocabulary]: [term:name]',
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'plugin' => 'raw_url',
      'url_method' => '1',
    ),
    'attribute_plugins' => array(
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'imce' => 0,
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['p6basics_linkit_fields'] = $linkit_profile;

  return $export;
}
