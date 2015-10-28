<?php
function insert_web_service_execution_logging($ws_wsdl_url, $ws_function_name, $ws_input_params, $ws_output) {
   $transaction = db_transaction();
   try {
    /* Write transaction */
    $nid = db_insert('web_service_execution')
    ->fields(array(
                     'ws_wsdl_url' =>  $ws_wsdl_url,
                     'ws_function_name'=>$ws_function_name,
                     'ws_input_params' => $ws_input_params,
                     'ws_output' => $ws_output,
           ))
    ->execute();
    return $nid;
  } catch(Exception $ex){
    $transaction->rollback();
    //var_dump($ex);
    return 0;
  }
}

function get_ws_result_from_id($ws_id){
  $result = db_query("SELECT ws_wsdl_url, ws_function_name, ws_input_params, ws_output FROM web_service_execution WHERE ID = " . $ws_id );
  $object = new stdClass();
  foreach ($result as $record){
     $object->ws_wsdl_url = $record->ws_wsdl_url;
     $object->ws_function_name = $record->ws_function_name;
     $object->ws_input_params = $record->ws_input_params;
     $object->ws_output = $record->ws_output;
     return $object;
  }
  return false;
}
?>