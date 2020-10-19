<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>

<body>
<br/><br/>

<? echo "<font color='red'><h2>your Registeration information is saved in cookie please check in to BROWSER Cookies</h2></font><br/>";?>
<h1>Registerd information retrieved from cookie</h1>

<table>
<tr><td>Name</td><td><? echo $_COOKIE['name'];?></td></tr>

<tr><td>Email</td><td><? echo $_COOKIE['email'];?></td></tr>

<tr><td>Password</td><td><? echo $_COOKIE['password'];?></td></tr>

<tr><td>Age</td><td><? echo $_COOKIE['age'];?></td></tr>

<tr><td>Address line1</td><td><? echo  $_COOKIE['Addr1'];?></td></tr>

<tr><td>Address line2</td><td><? echo $_COOKIE['Addr2'];?></td></tr>

<tr><td>City</td><td><? echo $_COOKIE['city'];?></td></tr>

<tr><td>State</td><td><? echo $_COOKIE['state'];?></td></tr>

</table>

<?
 unset($_COOKIE);
?>
</body>
</html>
