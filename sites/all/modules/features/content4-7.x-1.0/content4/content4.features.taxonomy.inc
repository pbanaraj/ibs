<?php
/**
 * @file
 * content4.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content4_taxonomy_default_vocabularies() {
  return array(
    'smart_insights_category' => array(
      'name' => 'Smart Insights Category',
      'machine_name' => 'smart_insights_category',
      'description' => 'Smart Insights Category',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
