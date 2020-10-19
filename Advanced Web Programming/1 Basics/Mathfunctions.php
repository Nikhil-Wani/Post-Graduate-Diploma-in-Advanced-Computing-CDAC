<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>
<body>
<?
echo "Mathemetical Functions";

$var =-123.52;
echo "<br>absolute functions :".abs($var);
echo "<br>Round function :".round($var);

echo "<br/> Rand Functions :".rand(100000000000,200000000000);
echo "<BR/>**************CEIL function round to next to integer***************************<br/>";
echo(ceil(0.60) . "<br>");
echo(ceil(0.01) . "<br>");
echo(ceil(5.01) . "<br>");
echo(ceil(5.1) . "<br>");
echo(ceil(-5.1) . "<br>");
echo(ceil(-5.9));

echo "<BR/>**************CEIL function round to down to integer***************************<br/>";
echo(floor(0.60) . "<br>");
echo(floor(0.40) . "<br>");
echo(floor(5) . "<br>");
echo(floor(5.1) . "<br>");
echo(floor(-5.1) . "<br>");
echo(floor(-5.9));

echo "<br/>************EXP Function*****************<br/>";
echo(exp(0) . "<br>");
echo(exp(1) . "<br>");
echo(exp(10) . "<br>");
echo(exp(4.8));


echo "<br/>************Reminder(fmod) function *****************<br/>";
$x = 7;
$y = 2;
$result = fmod($x,$y);
echo $result;
// $result equals 1, because 2 * 3 + 1 = 7

echo "<br/>*********************isnan Function**********************************</br>"; 

echo "Its a number or not :".is_nan(200) . "<br>";// Returns 1 if its a not a number
echo acos(1.01)."<br/>";
echo "Its a number or not :".is_nan(acos(1.01));

echo "<br/>*******************Max Functions*****************************************<br/>";
echo(max(2,4,6,8,10) . "<br>");
echo(max(22,14,68,18,15) . "<br>");
echo(max(array(4,6,8,10)) . "<br>");
echo(max(array(44,16,81,12)));

echo "<br/>***************************Min Functions********************************</br>";
echo(min(2,4,6,8,10) . "<br>");
echo(min(22,14,68,18,15) . "<br>");
echo(min(array(4,6,8,10)) . "<br>");
echo(min(array(44,16,81,12)));

echo "<br/>*********************Pi******************************<br/>";
echo(pi());
echo "<br/>";

echo "<br/>*********************POW Functions**********************************<br/>";
echo(pow(2,4) . "<br>");
echo(pow(-2,4) . "<br>");
echo(pow(-2,3) . "<br>");

echo "<br/>**************SQRT Function*************************<br/>";
echo(sqrt(0) . "<br>");
echo(sqrt(1) . "<br>");
echo(sqrt(9) . "<br>");
echo(sqrt(0.64) . "<br>");
echo(sqrt(-9));

echo "<br/>*********vardump********<br/>";
echo var_dump(0);
echo "<br/>".var_dump("Hai");
?>


</body>
</html>
