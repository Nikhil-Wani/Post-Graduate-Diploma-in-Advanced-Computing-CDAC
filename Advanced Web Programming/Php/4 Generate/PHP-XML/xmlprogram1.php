<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>XML Program 1</title>
</head>

<body>

<?php

/*$xmlDoc = new DOMDocument();//initialize the XML parser, load the xml,
$xmlDoc->load("xml.xml");//load the xml,

print $xmlDoc->saveXML();//the saveXML() function puts the internal XML document into a string
*/

echo "<br/>------------------------------------------------<br/>";
$xmlDoc1 = new DOMDocument();//initialize the XML parser, 
$xmlDoc1->load("xml2.xml");//load the xml,


print_r($xmlDoc1);
echo "<br/>-----------";
echo "<br/>";
$x = $xmlDoc1->documentElement;
foreach ($x->childNodes AS $item)
  {
  
  print $item->nodeName . " = " . $item->nodeValue . "<br />";
  }

?> 

<?= "<br/>------------------------------------------------<br/>";?>





</body>
</html>
