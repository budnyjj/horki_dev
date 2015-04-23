<?php
/**
 * @file
 * openlayers_local_problems_map.openlayers_layers.inc
 */

/**
 * Implements hook_openlayers_layers().
 */
function openlayers_local_problems_map_openlayers_layers() {
  $export = array();

  $openlayers_layers = new stdClass();
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'map_local_problems';
  $openlayers_layers->title = 'Мапа мясцовых праблем';
  $openlayers_layers->description = 'Базавая мапа мясцовых праблем';
  $openlayers_layers->data = array(
    'url' => array(
      0 => 'http://tile.openstreetmap.org/${z}/${x}/${y}.png',
    ),
    'serverResolutions' => array(
      0 => 156543.03390000001,
      1 => 78271.516950000005,
      2 => 39135.758475000002,
      3 => 19567.879237500001,
      4 => 9783.9396187500006,
      5 => 4891.9698093750003,
      6 => 2445.9849046875001,
      7 => 1222.9924523438001,
      8 => 611.49622617188004,
      9 => 305.74811308594002,
      10 => 152.87405654297001,
      11 => 76.437028271483996,
      12 => 38.218514135741998,
      13 => 19.109257067870999,
      14 => 9.5546285339354995,
      15 => 4.7773142669678004,
      16 => 2.3886571334839002,
      17 => 1.1943285667418999,
      18 => 0.59716428337097005,
      19 => 0.29858214169740999,
      20 => 0.1492910708487,
      21 => 0.074645535424351997,
    ),
    'resolutions' => array(
      0 => 19.109257067870999,
      1 => 9.5546285339354995,
      2 => 4.7773142669678004,
      3 => 2.3886571334839002,
      4 => 1.1943285667418999,
    ),
    'zoomOffset' => 0,
    'wrapDateLine' => 1,
    'projection' => array(
      0 => 'EPSG:3857',
    ),
    'isBaseLayer' => 1,
    'layer_type' => 'openlayers_layer_type_xyz',
    'layer_handler' => 'xyz',
    'sphericalMercator' => TRUE,
    'base_url' => NULL,
    'transitionEffect' => 'resize',
    'weight' => 0,
  );
  $export['map_local_problems'] = $openlayers_layers;

  return $export;
}