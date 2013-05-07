<?php
/**
 * @file
 * esd_str.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function esd_str_taxonomy_default_vocabularies() {
  return array(
    'blog_author' => array(
      'name' => 'Author',
      'machine_name' => 'blog_author',
      'description' => 'Blog authors',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '0',
    ),
    'blog_tags' => array(
      'name' => 'Tags',
      'machine_name' => 'blog_tags',
      'description' => 'Blog tags',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '0',
    ),
    'did_you_know_images' => array(
      'name' => 'Did You Know images',
      'machine_name' => 'did_you_know_images',
      'description' => 'Images for the Did You Know box. ',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '0',
    ),
  );
}
