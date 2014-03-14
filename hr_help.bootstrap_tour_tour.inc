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
  $bootstrap_tour->name = 'i_can_not_login';
  $bootstrap_tour->title = 'I can not login';
  $bootstrap_tour->roles = '1';
  $bootstrap_tour->autorun = 0;
  $bootstrap_tour->description = '';
  $bootstrap_tour->steps = array(
    0 => array(
      'selector' => '',
      'path' => 'user/login',
      'placement' => 'top',
      'title' => 'You can not login ?',
      'content' => '<p>So, you have an account on Humanitarianresponse and, for some reason, you can not login ? Let\'s see if we can help you out.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    1 => array(
      'selector' => '',
      'path' => '',
      'placement' => 'top',
      'title' => 'Have you registered ?',
      'content' => '<p>First, are you sure you have already registered ? If you didn\'t, then follow the tour <a href="/user/register?tour=registering_on_humanitarianresponse">Registering on Humanitarianresponse</a>. Otherwise, click "Next".</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    2 => array(
      'selector' => '',
      'path' => 'user/password',
      'placement' => 'top',
      'title' => 'DId you forget your password ?',
      'content' => '<p>If you forgot your password, enter your email address in the textfield, and we will send you steps to recover it.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    3 => array(
      'selector' => '',
      'path' => '',
      'placement' => 'top',
      'title' => 'Still can\'t login ?',
      'content' => '<p>If you still can not login after this, write to <a href="mailto:help@humanitarianresponse.info">help@humanitarianresponse.info</a>, and we will help you out.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
  );
  $export['i_can_not_login'] = $bootstrap_tour;

  $bootstrap_tour = new stdClass();
  $bootstrap_tour->disabled = FALSE; /* Edit this to true to make a default bootstrap_tour disabled initially */
  $bootstrap_tour->api_version = 1;
  $bootstrap_tour->name = 'inside_a_space';
  $bootstrap_tour->title = 'Inside a space';
  $bootstrap_tour->roles = '';
  $bootstrap_tour->autorun = 0;
  $bootstrap_tour->description = '';
  $bootstrap_tour->steps = array(
    0 => array(
      'selector' => '',
      'path' => '<front>',
      'placement' => 'top',
      'title' => 'Inside a space',
      'content' => '<p>Each space provides different content, but follows the same layout. We will look in details, as an example, at the "ProCap" space.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    1 => array(
      'selector' => '',
      'path' => 'topics/procap',
      'placement' => 'top',
      'title' => 'Enter the ProCap space',
      'content' => '<p>Here is the initial page of the ProCap page. Let\'s see how it is structured.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    2 => array(
      'selector' => '#hr-space-tab',
      'path' => '',
      'placement' => 'bottom',
      'title' => 'Space tab',
      'content' => '<p>In this part of the screen, you will find the space tab. This tab tells you in which space you are and allows you to go back to the space initial page at any time, but also gives you a dropdown menu to navigate back to the main sections of the site.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    3 => array(
      'selector' => '#navigation',
      'path' => '',
      'placement' => 'bottom',
      'title' => 'Horizontal menu',
      'content' => '<p>The horizontal menu gives you access to the different standard features provided by the space. These features can be activated or deactivated for each space, which is why you won\'t find the same set of features on each space.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    4 => array(
      'selector' => '#block-hr-notifications-hr-follow',
      'path' => '',
      'placement' => 'right',
      'title' => 'Follow button',
      'content' => '<p>Each space provides a Follow button, which allows you (when you are registered on Humanitarianresponse), to be subscribed to the mailing list of the space, if the space has one.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    5 => array(
      'selector' => '#block-hr-layout-hr-layout-space-links',
      'path' => '',
      'placement' => 'right',
      'title' => 'Contact information',
      'content' => '<p>In this part of the screen, you will find the contact information for the space (email address, Facebook, Twitter etc...). Also, each space comes with an <a href="http://www.digitaltrends.com/how-to/how-to-use-rss/">RSS feed</a>, allowing you to easily follow the content of this space from your RSS reader.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    6 => array(
      'selector' => '#block-og-menu-og-single-menu-block',
      'path' => '',
      'placement' => 'right',
      'title' => 'Vertical menu',
      'content' => '<p>The vertical menu is different for each space, and provides links to pages within the space. This menu will appear on all pages within the space.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    7 => array(
      'selector' => '',
      'path' => '',
      'placement' => 'top',
      'title' => 'That\'s it !',
      'content' => '<p>That\'s it for this tour. Thanks for following !</p><p>If you are experiencing issues with the site, write to <a href="mailto:help@humanitarianresponse.info">help@humanitarianresponse.info</a> and we will help you out.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
  );
  $export['inside_a_space'] = $bootstrap_tour;

  $bootstrap_tour = new stdClass();
  $bootstrap_tour->disabled = FALSE; /* Edit this to true to make a default bootstrap_tour disabled initially */
  $bootstrap_tour->api_version = 1;
  $bootstrap_tour->name = 'introduction';
  $bootstrap_tour->title = 'Introduction';
  $bootstrap_tour->roles = '';
  $bootstrap_tour->autorun = 0;
  $bootstrap_tour->description = '';
  $bootstrap_tour->steps = array(
    0 => array(
      'selector' => '',
      'path' => '<front>',
      'placement' => 'top',
      'title' => 'Welcome to Humanitarianresponse ',
      'content' => '<p>Welcome !</p><p>If you would like to know how Humanitarianresponse works, and how to find content, this tour is for you. Simply follow the steps !</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    1 => array(
      'selector' => '',
      'path' => '',
      'placement' => 'top',
      'title' => 'Spaces',
      'content' => '<p>Humanitarianresponse is built on what\'s called "spaces". A space is a collection of content (documents, news, events etc...) and people. Each space displays its own content, but using the same layout.</p><p>Let\'s see which spaces Humanitarianresponse has to offer.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    2 => array(
      'selector' => '',
      'path' => 'operations',
      'placement' => 'top',
      'title' => 'Operations',
      'content' => '<p>Under operations, you will find the country and regional spaces. Each region or country will show you information about a specific country or region.</p><p>For now, we are still in the process of migrating our operational sites, so each operation points to a different website. However, as we move forward in this migration, each operational website will become a space.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    3 => array(
      'selector' => '',
      'path' => 'clusters',
      'placement' => 'top',
      'title' => 'Clusters',
      'content' => '<p>Under "Clusters", you will find links to the global cluster websites (for example, the global education cluster) and (still under construction) a map of the local clusters (for example, the education cluster in Mali). If you click on "Read all the information about Clusters", you will enter the Clusters space, which will give you textual information about clusters and how they work.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    4 => array(
      'selector' => '',
      'path' => 'programme-cycle',
      'placement' => 'top',
      'title' => 'Programme Cycle',
      'content' => '<p>Under "Programme Cycle", you will find the spaces related to the Programme Cycle. This section is still under construction.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    5 => array(
      'selector' => '',
      'path' => 'topics',
      'placement' => 'top',
      'title' => 'Topics',
      'content' => '<p>Under "Topics", you will find different spaces concerning the "Cross-cutting issues" or "Coordination". You will also find the IMWG group.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    6 => array(
      'selector' => '',
      'path' => 'applications',
      'placement' => 'top',
      'title' => 'Applications',
      'content' => '<p>Applications are used by the field and by headquarters to find very specific data. This is where you will find the COD-FOD Registry, the Indicators Registry or the Toolbox. More will be coming soon...</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    7 => array(
      'selector' => '',
      'path' => '',
      'placement' => 'top',
      'title' => 'That\'s it !',
      'content' => '<p>That\'s it for this tour. If you would like to know more about spaces and how they work, follow the <a href="/?tour=inside_a_space">Inside a space</a> tour.</p><p>If you are having issues with the site, write to <a href="mailto:help@humanitarianresponse.info">help@humanitarianresponse.info</a> and we will help you out.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
  );
  $export['introduction'] = $bootstrap_tour;

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
      'content' => '<p>You are almost done ! You just need to click on "Create new account". You will receive a confirmation email in your inbox with a link. Click on this link and you will be registered. Welcome to Humanitarianresponse !</p><p>If you are experiencing issues, write to <a href="mailto:help@humanitarianresponse.info">help@humanitarianresponse.info</a>, and we will help you out.</p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
  );
  $export['registering_on_humanitarianresponse'] = $bootstrap_tour;

  return $export;
}
