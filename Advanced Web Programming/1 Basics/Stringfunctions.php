<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>

<body>
<?php
$var1="dipalmo in advanced computing";
$var2="Current ongoing Module is PHP";
print "Using Print Statement".$var1.$var2;

echo "<br/>";
print " Hai Helllo $var1";
echo "<br/>";


//finding String Length
echo "<br/>".strlen("diplamo in advanced computing");



?>

<?php
//finding the required string position in whole String
echo "<br/>".strpos("Welcome to CDAC DAC Classroom!","DAC"); //index start with 0
echo "<br/>";


$number = 9;
$str = "DAC";
printf("There are %s million bicycles in %s.",$number,$str);

echo str_repeat("dac",13);

echo "<br/>".str_replace("DESD","DAC","DESD Classroom");

echo "<br/>";
$arr = array("blue","red","red","yellow");
print_r(str_replace("red","pink",$arr,$i));
echo "Replacements: $i";

$array=str_split("Hello",2);
print_r($array);
//echo $array[0];//print_r($array)
echo "<BR/>---<br/>";
echo "stristr:".stristr("Hello world! to cdac","to");
echo "<BR/>---<br/>";
echo "stristr:".stristr("Hello world! to cdac","kk");

echo "<br/>".strtolower("Hello WORLD.");
echo "<br/>";
echo strtoupper("Hello");
echo "<br/>";

$string = "Hello world. Beautiful day today.";
$token = strtok($string, " ");

while ($token != false)
{
echo "$token<br>";
$token = strtok(" ");
} 

echo "<br/>------------------<br/>";
echo strtr("Hilla Warld","ia","eo"); //replacing i with a and a with o

echo "--------------------<br/>";
echo "substr --> :".substr("Hello world",10)."<br>";

echo substr("Hello world",-4)."<br>";

echo "With three parameters<br/>";

echo substr("Hello world",0,5)."<br>";

echo substr("Hello world",0,-10)."<br>";

echo "Example :->".substr("CentreforDev",-5,-2);
echo "<br/>";
echo ucfirst("cdac hyderabad");

echo "<br/>".ucwords("diplamo in advanced computing");
echo "<br/>";
$str = "An example of a long word is: Supercalifragulistic";  //Default Value is 75
echo wordwrap($str,15,"<br>\n");
?>



</body>
</html>
