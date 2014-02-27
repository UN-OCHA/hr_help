<?php
/**
 * @file
 * hr_help.bootstrap_tour_tour.inc
 */

/**
 * Implements hook_default_bootstrap_tour().
 */
function hr_help_default_bootstrap_tour() {
  $export = array();

  $bootstrap_tour = new stdClass();
  $bootstrap_tour->disabled = FALSE; /* Edit this to true to make a default bootstrap_tour disabled initially */
  $bootstrap_tour->api_version = 1;
  $bootstrap_tour->name = 'registering_on_humanitarianresponse';
  $bootstrap_tour->title = 'Registering on Humanitarianresponse';
  $bootstrap_tour->roles = '1';
  $bootstrap_tour->autorun = 0;
  $bootstrap_tour->description = '';
  $bootstrap_tour->steps = array(
    0 => array(
      'selector' => '',
      'path' => 'user/register',
      'placement' => 'top',
      'title' => 'Registering on Humanitarianresponse',
      'content' => '<p>This tour will help you to register on Humanitarianresponse. Simply follow the steps !</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
  );
  $export['registering_on_humanitarianresponse'] = $bootstrap_tour;

  return $export;
}
