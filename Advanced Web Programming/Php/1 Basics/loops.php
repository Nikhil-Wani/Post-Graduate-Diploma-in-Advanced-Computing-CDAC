<html>
<body>
<div style="color: BLUE">**** While Loop ****</div>
<?php
$i=1;
while($i<=5)
  {
  echo "The number is " . $i . "<br />";
  $i++;
  }
?>
<div style="color: BLUE">**** Do-While Loop ****</div>
<?php
$i=1;
do
  {
  $i++;
  echo "The number is " . $i . "<br />";
  }
while ($i<=5);
?>
<div style="color: BLUE">**** For Loop ****</div>


<?php
for ($i=1; $i<=5; $i++)
  {
  echo "The number is " . $i . "<br />";
  }
?>


<div style="color: BLUE">**** ForEach Loop ****</div>
<?php
$x=array("one","two","three");

foreach ($x as $value)
  {
  echo $value . "<br />";
  }
?>
</body>
</html>