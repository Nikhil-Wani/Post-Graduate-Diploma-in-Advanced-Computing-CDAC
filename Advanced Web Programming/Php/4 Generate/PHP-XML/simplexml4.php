<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>

<body>

<?php

include("dbasecon.php");

$result=mysql_query("select email,name,age,addr1,addr2,city,state,pincode from user");
$xml = "<students>";
while($r = mysql_fetch_array($result)){
  $xml .= "<student>";
  $xml .= "<email>".$r['email']."</email>";  
  $xml .= "<name>".$r['name']."</name>";
  $xml .= "<age>".$r['age']."</age>";  
  $xml .= "<address1>".$r['addr1']."</address1>";    
  $xml .= "<address2>".$r['addr2']."</address2>";    
  $xml .= "</student>";  
}
$xml .= "</students>";
$sxe = new SimpleXMLElement($xml);
$sxe->asXML("test_sample2.xml");

?>
</body>
</html>
