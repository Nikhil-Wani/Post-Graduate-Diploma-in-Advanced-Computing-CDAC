<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>
<body>

<?php
session_start();//initiating a session
$_SESSION['Center']="CDAC Hyderabad";
$_SESSION['Course']="DAC";
print_r(session_id());
echo "<br/>";
print_r($_SESSION);


unset($_SESSION['Center']);

echo "<br/>";
print_r($_SESSION);
echo "<br/>Unsetting the Session Center Parameter<br/>";

//session_unset();//clears the all data in a session
/*
print_r(session_id());
echo "<br/>";
print_r($_SESSION);
session_regenerate_id(); //copy old session data to the new session data 

echo "<br/>New Session ID:".session_id();
session_destroy();
echo "<br/>after detroying current  Session ID:".session_id();
$_SESSION['noofstudents']=69;

echo "<br/>";
print_r($_SESSION);
*/
?>
</body>
</html>
