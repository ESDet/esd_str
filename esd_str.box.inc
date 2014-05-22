<?php
/**
 * @file
 * esd_str.box.inc
 */

/**
 * Implements hook_default_box().
 */
function esd_str_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ask_us';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Ask Us / English';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="/ask-us">Questions? Ask us!</a></p>',
      'format' => 'wysiwyg',
    ),
    'additional_classes' => '',
  );
  $export['ask_us'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ask_us_es';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Ask Us / Spanish';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="/es/pregúntenos">Preguntas? Pregúntenos!</a></p>',
      'format' => 'wysiwyg',
    ),
    'additional_classes' => '',
  );
  $export['ask_us_es'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'did_you_know';
  $box->plugin_key = 'dyk_box';
  $box->title = 'Did You Know?';
  $box->description = 'Did You Know box / English';
  $box->options = array(
    'entity_boxes_id' => '1',
    'additional_classes' => '',
  );
  $export['did_you_know'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'did_you_know_es';
  $box->plugin_key = 'dyk_box';
  $box->title = 'Title en espanol';
  $box->description = 'Did You Know box / Espanol';
  $box->options = array(
    'additional_classes' => '',
  );
  $export['did_you_know_es'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'footer_desc';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Footer Description / English';
  $box->options = array(
    'body' => array(
      'value' => '<h4>We want Detroit to be the first major U.S. city where 90% of students graduate from high school, 90% go on to post-secondary programs and 90% of enrollees succeed without remediation.</h4><p>2111 Woodward Ave., Ste. 506<br />Detroit, MI 48201<br />(313) 285-9156</p>',
      'format' => 'wysiwyg',
    ),
    'additional_classes' => '',
  );
  $export['footer_desc'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'footer_desc_es';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Footer Description / Spanish';
  $box->options = array(
    'body' => array(
      'value' => '<h4>mission statement in spanish goes here.</h4><p>1938 Franklin Street, Suite 111<br />Detroit, MI 48207<br />(313) 285-9156</p>',
      'format' => 'wysiwyg',
    ),
    'additional_classes' => '',
  );
  $export['footer_desc_es'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'gcal_embed';
  $box->plugin_key = 'simple';
  $box->title = 'Calendar';
  $box->description = 'Google Calendar embedded';
  $box->options = array(
    'body' => array(
      'value' => '',
      'format' => 'unfiltered_html',
    ),
    'additional_classes' => '',
  );
  $export['gcal_embed'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'learn_more';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Learn more box on frontpage / English';
  $box->options = array(
    'body' => array(
      'value' => '<p>Great schools possess many elements: excellent educators, strong curricula, community and parent support.</p><p><a href="node/5">What&#39;s the best school for my child?</a></p>',
      'format' => 'wysiwyg',
    ),
    'additional_classes' => '',
  );
  $export['learn_more'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'learn_more_es';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Learn more box on frontpage / Spanish';
  $box->options = array(
    'body' => array(
      'value' => '<p>text en espanol</p><p><a href="#">Learn more &gt;</a></p>',
      'format' => 'wysiwyg',
    ),
    'additional_classes' => '',
  );
  $export['learn_more_es'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'portal_link';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'School leader portal link';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="https://portal.excellentschoolsdetroit.org">This way to the School Leader Portal</a></p>',
      'format' => 'wysiwyg',
    ),
  );
  $export['portal_link'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'school_leaders';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'School Leaders Resources link / English';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="/school-leaders">School Leader Resources</a></p>',
      'format' => 'wysiwyg',
    ),
    'additional_classes' => '',
  );
  $export['school_leaders'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'school_score_es';
  $box->plugin_key = 'simple';
  $box->title = 'Find a School\'s Score (en inglés)';
  $box->description = 'School Score widget / Spanish';
  $box->options = array(
    'body' => array(
      'value' => '<div class="score-right">
<p>We review Detroit schools each year and produce a score card that measures school quality. Find the scores for the schools near you.</p>
<form id="school-zip-code-form" target="_blank" action="http://scorecard.excellentschoolsdetroit.org/schools"><input type="submit" id="school-zip-code-submit" /><label for="school-zip-code">Search by Zip Code:</label><input name="loc" type="text" id="school-zip-code" /></form>
<!-- 
<form id="school-name-form" target="_blank"  action="http://scorecard.excellentschoolsdetroit.org/schools"><input type="submit" id="school-name-submit" /><label for="school-name">Search by School Name:</label><input type="text" id="school-name" /></form>
 -->
</div>',
      'format' => 'unfiltered_html',
    ),
    'additional_classes' => '',
  );
  $export['school_score_es'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'school_score_widget';
  $box->plugin_key = 'simple';
  $box->title = 'Find a School\'s Score';
  $box->description = 'School Score widget / English';
  $box->options = array(
    'body' => array(
      'value' => '<div class="score-right">
<p>We review Detroit schools each year and produce a score card that measures school quality. Find the scores for the schools near you.</p>
<form id="school-zip-code-form" target="_blank" action="http://scorecard.excellentschoolsdetroit.org/schools"><input type="submit" id="school-zip-code-submit" /><label for="school-zip-code">Search by Zip Code:</label><input name="loc" type="text" id="school-zip-code" /></form>
<!-- 
<form id="school-name-form" target="_blank"  action="http://scorecard.excellentschoolsdetroit.org/schools"><input type="submit" id="school-name-submit" /><label for="school-name">Search by School Name:</label><input type="text" id="school-name" /></form>
 -->
</div>',
      'format' => 'unfiltered_html',
    ),
    'additional_classes' => '',
  );
  $export['school_score_widget'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'social_share';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Social links / English';
  $box->options = array(
    'body' => array(
      'value' => '<p><a class="sprite-facebook" href="https://www.facebook.com/ExcellentSchoolsDetroit" target="_blank" title="Facebook">Facebook</a> <a class="sprite-twitter" href="https://twitter.com/ESDet" target="_blank" title="Twitter">Twitter</a> <a class="sprite-googleplus" href="https://plus.google.com/109044606194096088793" target="_blank" title="Google+">Google+</a> <a class="sprite-pinterest" href="http://pinterest.com/esdetroit/" target="_blank" title="Pinterest">Pinterest</a></p>',
      'format' => 'wysiwyg',
    ),
    'additional_classes' => '',
  );
  $export['social_share'] = $box;

  return $export;
}
