<?php
 
function welcome($echo){
    return "WELCOME: ".$echo;
}
 
$server = new SoapServer(null,
                         array('uri' => "urn://sunday/res"));
$server->addFunction('welcome');
$server->handle();
 
?>