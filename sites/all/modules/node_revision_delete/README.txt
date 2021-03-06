CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Recommended modules
 * Installation
 * Configuration
 * FAQ
 * Maintainers


INTRODUCTION
------------

The Node Revision Delete module lets you to track and prune old revisions of
content types.

 * For a full description of the module, visit the project page:
   https://www.drupal.org/project/node_revision_delete

 * To submit bug reports and feature suggestions, or to track changes:
   https://www.drupal.org/project/issues/search/node_revision_delete


REQUIREMENTS
------------

No special requirements.


RECOMMENDED MODULES
-------------------

 * Chaos tool suite (ctools) (https://www.drupal.org/project/ctools):
   When enabled the links displayed in the operations column in the module
   configuration page will be displayed as a dropbutton.

 * Views UI (https://www.drupal.org/project/views):
   When enabled the dropbutton displayed in the operations column in the
   module configuration page will improve his style.

 * Drush Help (https://www.drupal.org/project/drush_help):
   Improves the module help page showing information about the module drush
   commands.

 * Responsive Tables (https://www.drupal.org/project/responsive_tables):
   When enabled some table columns in the module pages will be hidden on mobile
   devices for improve the page readability.

INSTALLATION
------------

 * Install as you would normally install a contributed Drupal module.
   See: https://www.drupal.org/node/895232 for further information.


CONFIGURATION
-------------

 * Configure the module in Administration » Configuration »
   Content authoring » Node Revision Delete:

   - You can set how many revisions do you want to delete per cron run and
     how often should revision be deleted while cron runs. You you can save
     the configurations and optionally start a batch job to delete old revisions
     for tracked content types. For this you need the
     'Administer Node Revision Delete' permission.

 * Configure each content type in Administration » Structure » Content types »
   Content type name:

   - Under the Publishing options tab, mark "Limit the amount of revisions for
     this content type" and set the maximum number of revisions to keep.

 * Drush commands

   - drush node-revision-delete

     Deletes old node revisions for a given content type.

   - drush nrd-delete-cron-run

     Configures how many revisions delete per cron run.

   - drush nrd-last-execute

     Get the last time that the node revision delete was made.

   - drush nrd-set-time
      
     Configures the frequency with which to delete revisions while cron is
     running.

   - drush nrd-get-time
     
     Shows the frequency with which to delete revisions while cron is running.

   - drush nrd-when-to-delete-time

     Configures the time options for the inactivity time that the revision must
     have to be deleted.

   - drush nrd-minimum-age-to-delete-time

     Configures time options to know the minimum age that the revision must have
     to be deleted.

   - drush nrd-delete-prior-revisions

     Delete all revisions prior to a revision.


FAQ
---

Q: How can I delete the prior revisions?

A: When you are deleting a revision of a node, a new checkbox will appear in a
   fieldset saying: "Also delete X revisions prior to this one."; if you check
   it, all the prior revisions will be deleted as well for the given node.
   If you are deleting the oldest revision, the checkbox will not appear as no
   prior revisions are available.


MAINTAINERS
-----------

Current maintainers:
 * Adrian Cid Almaguer (adriancid) - https://www.drupal.org/u/adriancid
 * Diosbel Mezquía (diosbelmezquia) - https://www.drupal.org/u/diosbelmezquia
 * Robert Ngo (Robert Ngo) - https://www.drupal.org/u/robert-ngo


This project has been sponsored by:

 * Ville de Montréal
 * Lullabot
 * Sapient
