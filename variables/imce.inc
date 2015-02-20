<?php
/**
 * IMCE.
 */

$imce_custom_content = array(
  'imce_mkdir_content' => 1,
);
$imce_custom_process = array(
  'imce_mkdir_process_profile' => 1,
);
$imce_profiles = array(
  1 => array(
    'name' => 'User-1',
    'usertab' => 1,
    'filesize' => '0',
    'quota' => '0',
    'tuquota' => '0',
    'extensions' => '*',
    'dimensions' => '1200x1200',
    'filenum' => '0',
    'directories' => array(
      0 => array(
        'name' => '_',
        'subnav' => 1,
        'browse' => 1,
        'upload' => 1,
        'thumb' => 1,
        'delete' => 1,
        'resize' => 1,
        'mkdir' => 1,
        'rmdir' => 1,
      ),
    ),
    'thumbnails' => array(),
    'mkdirnum' => '0',
  ),
  2 => array(
    'name' => 'editor profile',
    'usertab' => 1,
    'filesize' => '0',
    'quota' => '0',
    'tuquota' => '0',
    'extensions' => '*',
    'dimensions' => '1200x1200',
    'filenum' => '0',
    'directories' => array(
      0 => array(
        'name' => '_',
        'subnav' => 1,
        'browse' => 1,
        'upload' => 1,
        'thumb' => 1,
        'delete' => 1,
        'resize' => 1,
        'mkdir' => 1,
        'rmdir' => 0,
      ),
      1 => array(
        'name' => '_/misc',
        'subnav' => 1,
        'browse' => 1,
        'upload' => 1,
        'thumb' => 1,
        'delete' => 1,
        'resize' => 1,
        'mkdir' => 1,
        'rmdir' => 1,
      ),
      2 => array(
        'name' => '_/home',
        'subnav' => 0,
        'browse' => 1,
        'upload' => 1,
        'thumb' => 1,
        'delete' => 0,
        'resize' => 0,
        'mkdir' => 0,
        'rmdir' => 0,
      ),
      3 => array(
        'name' => '_/news',
        'subnav' => 0,
        'browse' => 1,
        'upload' => 1,
        'thumb' => 1,
        'delete' => 0,
        'resize' => 0,
        'mkdir' => 0,
        'rmdir' => 0,
      ),
      4 => array(
        'name' => '_/events',
        'subnav' => 0,
        'browse' => 1,
        'upload' => 1,
        'thumb' => 1,
        'delete' => 0,
        'resize' => 0,
        'mkdir' => 0,
        'rmdir' => 0,
      ),
      5 => array(
        'name' => '_/hero',
        'subnav' => 0,
        'browse' => 1,
        'upload' => 1,
        'thumb' => 1,
        'delete' => 0,
        'resize' => 0,
        'mkdir' => 0,
        'rmdir' => 0,
      ),
    ),
    'thumbnails' => array(),
    'mkdirnum' => '0',
  ),
);
$imce_roles_profiles = array(
  4 => array(
    'weight' => 9,
    'public_pid' => 1,
    'private_pid' => 0,
  ),
  3 => array(
    'weight' => 10,
    'public_pid' => 2,
    'private_pid' => 0,
  ),
  2 => array(
    'weight' => 11,
    'public_pid' => 0,
    'private_pid' => 0,
  ),
  1 => array(
    'weight' => 12,
    'public_pid' => 0,
    'private_pid' => 0,
  ),
);
$imce_settings_absurls = 0;
$imce_settings_disable_private = 1;
$imce_settings_replace = '0';
$imce_settings_textarea = '';
$imce_settings_thumb_method = 'scale_and_crop';

variable_set('imce_custom_content', $imce_custom_content);
variable_set('imce_custom_process', $imce_custom_process);
variable_set('imce_profiles', $imce_profiles);
variable_set('imce_roles_profiles', $imce_roles_profiles);
variable_set('imce_settings_absurls', $imce_settings_absurls);
variable_set('imce_settings_disable_private', $imce_settings_disable_private);
variable_set('imce_settings_replace', $imce_settings_replace);
variable_set('imce_settings_textarea', $imce_settings_textarea);
variable_set('imce_settings_thumb_method', $imce_settings_thumb_method);
