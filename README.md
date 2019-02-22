##**WP migration**

###Prepare the XML file*
* Rename the file ``eg: kmle-posts.oct-nov.xml``
* Edit the file and rename the title to something short and descriptive ``eg: <title>KMLE Posts 1</title>``
* File must be saved as UTF8
* File cleanup - run ``xmllint filename.xml`` and check for characters to remove

###Upload an XML file using the UI

**Step 1** - go to ``/admin/content/migrate/new/wordpressmigratewizard`` and upload the file

**Step 2** - don't create users and asign nodes to the content user

**Step 3** - Assign WordPress blog posts and pages to the Frequency corresponding content types

**Step 4** - Blog Posts
* assign WordPress Tags to the Tags taxonomy vocabulary
* assign WordPress Tags to the Categories taxonomy vocabulary
* default format for text fields should be set to Full HTML
* alias handling should be set to "Set path aliases to their original WordPress values"

**Step 5** - Pages
* the settings should be the same than the previous step

**Step 6** - Review
* check it's correct and click Save import settings to go back to the migrate dashboard

###Migrate content using the UI


**Before migrating** - since the rollback of taxonomy terms does not work, it is recommended to do a backup of the database in case a revert is needed.

The Migrate dashboard - ``/admin/content/migrate`` - allows to perform imports, rollbacks, stop, and delete migrations.

**Add new content** : select the group and execute an import under operations


###Migrate content using Drush

* read drush commands help page: ``fin drush help --filter=migrate``
* check the status: ``fin drush ms``
* perform a migration:
``fin drush mi --group="<groupname>" --instrument``
* rollback a migration: ``fin drush mr --group="<groupname>"``

Review all the commands - https://www.drupal.org/node/1561820


**TODO**
* don't publish items related to the "contest" category
* remove images from body
* remove old internal links from body
* fix issue with tags and categories not deleted after a rollback

**Resources**

* [Running imports and rollbacks via drush](https://www.drupal.org/node/1958170)
* [Migrate a custom field](https://drupal.stackexchange.com/questions/50816/how-to-migrate-a-custom-field-in-wordpress-to-drupal)
* [Create stubs](https://www.drupal.org/node/1013506)
* [Update links](https://www.drupal.org/project/migrate/issues/1257358#comment-12169942)