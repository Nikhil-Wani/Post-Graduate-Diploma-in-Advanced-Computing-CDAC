<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>

<body>
<? session_start();
echo "Session email Inofrmation :".$_SESSION['email'];
if($_SESSION['email']!=""){
?>
<br/><br/>
<h1>Registerd information from Session</h1>
<form action="logout.php" method="post">

<table>
<tr><td>Name</td><td><? echo $_SESSION['name'];?></td></tr>
<tr><td>Email</td><td><? echo $_SESSION['email'];?></td></tr>
<tr><td>Password</td><td><? echo $_SESSION['password'];?></td></tr>
<tr><td>Age</td><td><? echo $_SESSION['age'];?></td></tr>
<tr><td>Address line1</td><td><? echo $_SESSION['Addr1'];?></td></tr>
<tr><td>Address line2</td><td><? echo $_SESSION['Addr2'];?></td></tr>
<tr><td>City</td><td><? echo $_SESSION['city'];?></td></tr>
<tr><td>State</td><td><? echo $_SESSION['state'];?></td></tr>

</table>
<input type="submit" value="Logout" />
<?
//unset($_SESSION);
//session_destroy();
//session_regenerate_id();

?>
</form>
<?
}
else {
header("Location:logout.php");
}
?>
</body>
</html>
