<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>

<body>

<?php
	$xml = simplexml_load_file("test2.xml");
	//echo $xml->getName() . "<br />";
	print_r($xml);
	foreach($xml as $child)
	  {
	  	echo "<br/><strong>Node Name :".$child->getName()."</strong>";
		//print_r($child);
		echo "Email   :".$child->email;
		echo "Name    :".$child->name;
		echo "Age     :".$child->age;
		echo "Addr1   :".$child->addr1;
		echo "Addr2   :".$child->addr2;
		echo "city    :".$child->city;
		echo "State   :".$child->state;
		
		echo "<br/><br/>";
		//echo $child->getName() . ": " . $child . "<br/>";
	  }
?> 
</body>
</html>
