<html>
<body>


<div style="color: BLUE">if...elseif...else conditions</div>
<?php
echo $d=date("D");
echo "Today is :$d";
if ($d=="Fri")
  echo "Have a nice weekend!";
elseif ($d=="Sun")
  echo "Have a nice Sunday!";
else
  echo "Have a nice day!";

echo "<div style='color: BLUE'>switch statements</div>";
$x = 3;
switch ($x)
{
case 1:
  echo "Number 1";
  break;
case 2:
  echo "Number 2";
  break;
case 3:
  echo "Number 3";
  break;
default:
  echo "No number between 1 and 3";
}

?>
</body>
</html>