<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>

<body>
<?php
$array1 = array(50,90,20,70,10,80);
$array2 = array("fifty","ninety","twenty","seventy","ten","eighty");
array_multisort($array1, $array2);

foreach ($array1 as $key => $value) {
        echo "$key - <strong>$value</strong> <br />"; 
}
echo "<hr />";
foreach ($array2 as $key => $value) {
        echo "$key - <strong>$value</strong> <br />"; 
}
?>

<?php
$array1 = array(2,1,3);
$array2 = array("Ronald","Pete","Greg");
$array3 = array("red","green","blue");
array_multisort($array1, $array2, $array3);

var_dump($array1);
var_dump($array2);
var_dump($array3);
?>
</body>
</html>
