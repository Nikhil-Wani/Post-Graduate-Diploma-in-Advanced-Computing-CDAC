<?php

$echo = $_GET['input'];
 
print "<h2>Simple  SOAP Web Service</h2>";
print "<form action='simple_client.php' method='GET'/>";
print "<input name='input' value='$echo'/><br/>";
print "<input type='Submit' name='submit' value='GO'/>";
print "</form>";


if($echo != ''){
    $client = new SoapClient(null, array(
      'location' => "http://localhost/sunday/soap/simple_server.php",
      'uri'      => "urn://sunday/req"));
 
    $result = $client->
        __soapCall("welcome",array($echo));
 
    print $result;
}
?>