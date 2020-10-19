<?php


$xml = "<library><book>PHP Head first</book><book>PHP everyday</book></library>";

$sxe = new SimpleXMLElement($xml);

print $sxe->asXML("test_simple.xml");

//print $sxe->asXML();

?>
