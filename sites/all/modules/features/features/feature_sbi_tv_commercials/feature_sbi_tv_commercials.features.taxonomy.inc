<?php
/**
 * @file
 * feature_sbi_tv_commercials.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_sbi_tv_commercials_taxonomy_default_vocabularies() {
  return array(
    'inner_search_master' => array(
      'name' => 'Inner Search Master',
      'machine_name' => 'inner_search_master',
      'description' => 'Usage of Custom service search',
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
