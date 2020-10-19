<html>
<body>
<?php
if(isset($_POST['submit']))
{
//$con = mysql_connect("localhost","root","");
$host="localhost"; // Host name
$username="root"; // Mysql username
$password=""; // Mysql password
$db_name="dac-db"; // Database name
$tbl_name="emp"; // Table name

// Connect to server and select database.

/**********START For Connecting and choosing a particular database***************/
$con=mysql_connect("$host", "$username", "$password")or die("cannot connect");
mysql_select_db("$db_name",$con)or die("cannot select DB");
/**********END  For Connecting and choosing a particular database**************/

if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

/*********Executing a query***********/

$sql="INSERT INTO emp (ename,job,sal) VALUES('$_POST[firstname]','$_POST[job]','$_POST[sal]')"; //just query
$results=mysql_query($sql,$con);

if (!$results)
  {
  die('Error: ' . mysql_error());
  }


echo "1 record added";
//*************END**************************//


/*****START For Fetcing query***********/

 $selquery = "select * from emp";
 $res = mysql_query($selquery) or die("selelct query failed");
 echo "<table cellpadding=0 cellspacing=0 border=1>";
 while($row = mysql_fetch_array($res))
 {
	 echo "<tr><td>".$row['ename']."</td><td>".$row['job']."</td><td>".$row['sal']."</td></tr>";
 }
  echo "</table>";
  mysql_close($con);
}
/*****END for Fetching a query********************/
?>

<br/><br/>
<form method="post">
Name: <input type="text" name="firstname" />
Job: <input type="text" name="job" />
Salary: <input type="text" name="sal" />
<input type="submit" name="submit"/>
</form>
<?php

?>
</body>
</html>