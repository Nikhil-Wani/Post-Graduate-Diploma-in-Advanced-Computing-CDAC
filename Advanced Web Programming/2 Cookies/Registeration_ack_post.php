<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>

<?php

if(isset($_POST['name'])){
	
	echo "name parameter is present in Registeration page ";
}
    function checkname($alpha)
	  {
		$pattern="%[\|\[\]\{\}()|\%_;,.:~`\"\'|+|-|*|=|<|>|?|0-9|!@#$|&]%";
		$num=preg_match($pattern,$alpha);
		if($num==1)
		return 0;
		else
		return 1;
	  }
	$name=trim($_POST['name']);
	$email=trim($_POST['email']);
	$password=trim($_POST['password']);
	$cpassword=trim($_POST['cpassword']);
	$dob=trim($_POST['dob']);
	$addr1=trim($_POST['addr1']);
	$addr2=trim($_POST['addr2']);
	$city=trim($_POST['city']);
	$state=trim($_POST['state']);
	
	$errors =array();
	
	if(strlen($name)==0){
		$errors[]="Please Enter Name";
	}
	if(checkname($name)==0){
		$errors[]="Name Text box Contains special characters";
	}
	if(strlen($email)==0){
		$errors[]="please Enter Email ID";
	}
	if(strlen($password)==0){
		$errors[]="Please Enter Password";
	}
	if(strlen($cpassword)==0){
		$errors[]="Please Enter Confirm password";
	}
	if(strlen($dob)==0){
		$errors[]="Please Enter DOB";
	}
	if(strlen($addr1)==0){
		$errors[]="Please Enter Addressline 1";
	}
	if(strlen($addr2)==0){
		$errors[]="please Enter Addressline 2";
	}
	if(strlen($city)==0){
		$errors[]="Please Enter City";
	}
	if(strlen($state)==0){
		$errors[]="please Enter State";
	}
	
	
	
	if(count($errors)==0){
	
		?>
        <center>
        <strong>Registeration Details retrieved from POST Parameters</strong>
        <br/><br/>
		<strong><table>
        	<tr><td>Name</td><td><? echo  $name?></td></tr>
            <tr><td>Email</td><td><? echo $email?></td></tr>
            <tr><td>Date of Birth</td><td><? echo  $dob?></td></tr>
            <tr><td>Address 1</td><td><? echo $addr1;?></td></tr>
            <tr><td>Address 2</td><td><? echo $addr2;?></td></tr>
            <tr><td>City</td><td><? echo $city;?></td></tr>
             <tr><td>State</td><td><? echo $state;?></td></tr>
        </table></strong>
        </center>
		<?
	}
	else{
		echo "<b><center>Please fill the Details Properly</b>";
		foreach($errors as $error){
			echo "<br/><b><font color='red'>".$error."</b></font>";
		}
		echo "</center>";
		include("Registeration.php");
	}

?>
<body>
</body>
</html>
