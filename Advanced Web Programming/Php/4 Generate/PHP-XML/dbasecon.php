<?php
$con=mysql_pconnect("localhost","root","");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("DAC-DB", $con);
?>
