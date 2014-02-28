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
    1 => array(
      'selector' => '#edit-mail',
      'path' => '',
      'placement' => 'top',
      'title' => 'Enter your email',
      'content' => '<p>Enter your email in this textfield. Please enter your professionnal email (for example your @un.org email).</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    2 => array(
      'selector' => '#edit-profile-main-field-first-name',
      'path' => '',
      'placement' => 'top',
      'title' => 'Enter your name',
      'content' => '<p>Enter your first name and last name in these fields</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    3 => array(
      'selector' => '#edit-profile-main-field-organizations',
      'path' => '',
      'placement' => 'top',
      'title' => 'Select your organization',
      'content' => '<p>Select your organization in this field. If your organization does not appear, select "Other" and enter the name of your organization in the next field.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    4 => array(
      'selector' => '#edit-profile-main-field-job-title',
      'path' => '',
      'placement' => 'top',
      'title' => 'Select your job title',
      'content' => '<p>Select your job title in this field. If your job title does not appear, select "Other" and enter your job title in the next field.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    5 => array(
      'selector' => '#edit-profile-main-field-location',
      'path' => '',
      'placement' => 'top',
      'title' => 'Select your location',
      'content' => '<p>Select the location you are based in. If the specific town/city you are based in does not appear, select the country.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    6 => array(
      'selector' => '#edit-profile-main-field-phones',
      'path' => '',
      'placement' => 'top',
      'title' => 'Enter your phone numbers',
      'content' => '<p>Enter your phone numbers in this field.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    7 => array(
      'selector' => '#edit-profile-main-field-emails',
      'path' => '',
      'placement' => 'top',
      'title' => 'Enter your other emails',
      'content' => '<p>If you wish, enter your other email addresses in this field (personal email addresses for example)</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    8 => array(
      'selector' => '#edit-profile-main-field-social-media',
      'path' => '',
      'placement' => 'top',
      'title' => 'Social media links',
      'content' => '<p>If you wish, enter the URLs of your social media profiles (LinkedIn, Facebook, Google Plus etc...) in this field.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    9 => array(
      'selector' => '#edit-timezone',
      'path' => '',
      'placement' => 'top',
      'title' => 'Timezone',
      'content' => '<p>Please select the timezone you usually work in. This is very important !</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    10 => array(
      'selector' => '#edit-submit',
      'path' => '',
      'placement' => 'top',
      'title' => 'Almost done !',
      'content' => '<p>You are almost done ! You just need to click on "Create new account". You will receive a confirmation email in your inbox with a link. Click on this link and you will be registered. Welcome to Humanitarianresponse !</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
  );
  $export['registering_on_humanitarianresponse'] = $bootstrap_tour;

  return $export;
}
