<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<title>Untitled Document</title>
</head>

<body><?php

$host="localhost"; // Host name
$username="root"; // Mysql username
$password=""; // Mysql password
$db_name="dac-db"; // Database name
$tbl_name="test_mysql"; // Table name

// Connect to server and select database.
mysql_connect("$host", "$username", "$password")or die("cannot connect");
mysql_select_db("$db_name")or die("cannot select DB");

// select record from mysql
$sql="SELECT * FROM $tbl_name";
$result=mysql_query($sql);

?>
<table width="" border="0" cellspacing="1" cellpadding="0">
<tr>
<td><table width="" border="0" cellpadding="3" cellspacing="1" bgcolor="#CCCCCC">
<tr>
<td bgcolor="#FFFFFF">&nbsp;</td>
<td colspan="4" bgcolor="#FFFFFF"><strong>Delete data in mysql</strong> </td>
</tr>
<tr>
<td align="center" bgcolor="#FFFFFF"><strong>Id</strong></td>
<td align="center" bgcolor="#FFFFFF"><strong>Name</strong></td>
<td align="center" bgcolor="#FFFFFF"><strong>Lastname</strong></td>
<td align="center" bgcolor="#FFFFFF"><strong>email</strong></td>
<td align="center" bgcolor="#FFFFFF">&nbsp;</td>
</tr>
<?php
while($rows=mysql_fetch_assoc($result)){

?>
<tr>
<td bgcolor="#FFFFFF" align="center"><? echo $rows['id']; ?></td>
<td bgcolor="#FFFFFF" align="center"><? echo $rows['name']; ?></td>
<td bgcolor="#FFFFFF" align="center"><? echo $rows['lastname']; ?></td>
<td bgcolor="#FFFFFF" align="center"><? echo $rows['email']; ?></td>
<td bgcolor="#FFFFFF" align="center"><a href="delete_ac.php?id=<? echo $rows['id']; ?>">delete</a></td>
</tr>
<?

// close while loop
}

// close connection;
mysql_close();

?>
</table></td>
</tr>
</table>
</body>
</html>
