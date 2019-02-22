<?php
/**
 * Migration class for CBS Wordpress blogs.
 *
 * Registers new Wordpress classes.
 */



/**
 * Class CBSWordpressPageEntry.
 *
 * Extension of WordPressPage to run additional content processing.
 */
class CbsMigrateWordpressPageEntry extends WordpressItemMigration {

    /**
     * {@inheritdoc}
     */
    public function __construct(array $arguments = []) {
        $arguments['bundle'] = $arguments['page_type'];
        $arguments['post_type'] = 'page';
        parent::__construct($arguments);
    }

}