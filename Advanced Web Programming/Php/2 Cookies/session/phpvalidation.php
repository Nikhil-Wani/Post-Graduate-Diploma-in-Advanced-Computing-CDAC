<?php
	echo "in1";
if(isset($_POST['username']))
{
echo "in";
$user= $_POST['username'];
$pass= $_POST['password'];
}
else
{
$user= "";
$pass= "";
}
echo $user."username";
echo $pass."passsword";

/*
if($user==''||strlen($user)==0)
{
$error_msg['username']="enter a username";
}
if($pass==''||strlen($_POST['password'])==0)
{
$error_msg['password']="enter a passsword";
}
*/
?>
