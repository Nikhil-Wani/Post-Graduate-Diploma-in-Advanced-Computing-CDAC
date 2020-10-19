<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
<style type="text/css">
<!--
.style1 {font-weight: bold}
-->
</style>
</head>

<body>
<? 
//echo $_POST['cookieinfo'];
if($_POST['cookieinfo']=="cookie"){

	echo "Registerd Information saved in cookie :<br/>";
	
}

if(isset($_POST['submit'])){
	
	 $print_again = 1;
	$name = $_POST['name'];
	$email = $_POST['email'];
	$password=$_POST['password'];
	$cpassword=$_POST['cpassword'];
	$age=$_POST['age'];
	$addr1=$_POST['addr1'];
	$addr2=$_POST['addr2'];
	$city=$_POST['city'];
	$state=$_POST['state'];
	$pincode=$_POST['pincode'];
	if($name==''||strlen($name)==0)
	{
		$error_msg['name'] = "Please Fill the Name";
		$print_again = 0;
	}
	if($age=='')
	{
		$error_msg['age'] = "Enter Age";
		$print_again = 0;
	}
	if($password==''||strlen($password)==0)
	{
		$error_msg['password'] = "Enter Password";
		$print_again = 0;
	}
	if($cpassword==''||strlen($cpassword)==0)
	{
		$error_msg['cpassword'] = "Enter Confirm password";
		$print_again = 0;
	}
	if($password!=$cpassword){
		$error_msg['cpassword'] = "Password mismatch";
		$print_again = 0;
	}
	if($addr1==''||strlen($addr1)==0)
	{
		$error_msg['addr1'] = "Enter Address line1";
		$print_again = 0;
	}
	if($addr2==''||strlen($addr2)==0)
	{
		$error_msg['addr2'] = "Enter Address line2";
		$print_again = 0;
	}
	if($city==''||strlen($city)==0)
	{
		$error_msg['city'] = "Enter City";
		$print_again = 0;
	}
	if($state==''||strlen($state)==0)
	{
		$error_msg['state'] = "Enter state";
		$print_again = 0;
	}
	if(!is_numeric($age))
		{
			$error_msg['age'] = "Please Enter age as numeric value";
			$print_again = 0;
		}
	if(!is_numeric($pincode))
		{
			$error_msg['pincode'] = "Please Enter pincode as numeric value";
			$print_again = 0;
		}
	
	
	if($print_again==0)
	{
		echo $err = "<center><font color='red'><b>Please correct the highlighted errors</b></font></center>";
	}	
	if($print_again!=0)
	{
	
		echo "<p align='left'><h1>Registeration Details<br/></h1><b><font color='blue'><center>";
		echo "<br/> Name :".$name;
		echo "<br/> Email :".$email;
		echo "<br/> Age :".$age;
		echo "<br/>Address line1 :".$addr1;
		echo "<br/>Address line2 :".$addr2;
		echo "<br/> City :".$city;
		echo "<br/>State :".$state;
		echo "<br/>Pincode :".$pincode."</b></font></center></p>";
		
		
		
		//echo strlen($_COOKIE['count_register']);
		
		
			    session_start();
				session_regenerate_id();
				$_SESSION["count_regiser"]=1;
				$_SESSION["name"]=$name;
				$_SESSION["email"]=$email;
				$_SESSION["age"]=$age;
				$_SESSION["Addr1"]=$addr1;
				$_SESSION["Addr2"]=$addr2;
				$_SESSION["City"]=$city;
				$_SESSION["state"]=$state;
				$_SESSION["pincode"]=$pincode;
				echo "<font color='red'><h2>your Registeration information is saved in session please check in to server temp folder </h2></font><br/>";
				header("Location:RegisterInfo.php");
		
		
	}

}
?>

<br/>
<center><h3>User Registeration</h3></center>
<form  method="post">
<table width="395" align="center">
	<tr><td width="146"><strong>Name </strong></td>
	<td width="237"><input name="name" type="text" value="<? echo $name;?>"/><div style='color: red'><? echo $error_msg['name']?></div></td>
	</tr>
    <tr><td><strong>Email</strong></td>
    <td><input name="email" type="text" value="<? echo $email;?>" /><div style='color: red'><? echo $error_msg['email']?></div></td>
    </tr>
    <tr><td><strong>password </strong></td>
    <td><input name="password" type="password" value="<? echo $password;?>" /><div style='color: red'><? echo $error_msg['password']?></div></td>
    </tr>
    <tr><td><strong>confirm password</strong></td>
    <td><input name="cpassword" type="password" value="<? echo $cpassword;?>" /><div style='color: red'><? echo $error_msg['cpassword']?></div></td>
    </tr>
    <tr><td><strong>age</strong></td>
    <td><input name="age" type="text" id="age" value="<? echo $age;?>" /><div style='color: red'><? echo $error_msg['age']?></div></td>
    </tr>
    <tr><td><strong>Address Line1</strong></td>
      <td><strong>
        <textarea rows="2" cols="20" name="addr1"><? echo $addr1;?></textarea><div style='color: red'><? echo $error_msg['addr1']?></div>
      </strong></td>
    </tr>
    <tr><td><strong>Address Line2</strong></td>
      <td><strong>
        <textarea rows="2" cols="20" name="addr2"><? echo $addr2;?></textarea><div style='color: red'><? echo $error_msg['addr2']?></div>
      </strong></td>
    </tr>
    <tr><td><strong>City</strong></td>
    <td><input name="city" type="text" value="<? echo $city;?>"  /><div style='color: red'><? echo $error_msg['city']?></div></td>
    </tr>
    <tr><td><strong>State</strong></td>
      <td><strong>
        <select name="state">
          <? if($state!=""){?>
          <option value="<? echo $state;?>"><? echo $state;?></option>
          <? }?>
          <option value="" >Select State</option>
          <option value='Andhra Pradesh'  >Andhra&nbsp;Pradesh</option>
          <option value='Arunachal Pradesh' >Arunachal&nbsp;Pradesh</option>
          <option value="Assam" >Assam</option>
          <option value='Andaman and Nicobar' >Andaman&nbsp;and&nbsp;Nicobar</option>
          <option value="Bihar" >Bihar</option>
          <option value="Chandigarh" >Chandigarh</option>
          <option value="Chhattisgarh" >Chattisgarh</option>
          <option value='Dadra And Nagar H' >Dadra&nbsp;And&nbsp;Nagar&nbsp;H.</option>
          <option value='Daman and Diu' >Daman&nbsp;and&nbsp;Diu</option>
          <option value="DELHI" >Delhi</option>
          <option value="Goa" >Goa</option>
          <option value="Gujarat" >Gujarat</option>
          <option value="Haryana" >Haryana</option>
          <option value='Himachal Pradesh' >Himachal&nbsp;Pradesh</option>
          <option value='Jammu and Kashmir' >Jammu&nbsp;and&nbsp;Kashmir</option>
          <option value="Jharkhand" >Jharkhand</option>
          <option value="Karnataka" >Karnataka</option>
          <option value="Kerala" >Kerala</option>
          <option value="Lakshadweep" >Lakshadweep</option>
          <option value='Madhya Pradesh' >Madhya&nbsp;Pradesh</option>
          <option value="Maharashtra" >Maharashtra</option>
          <option value="Manipur" >Manipur</option>
          <option value="Meghalaya" >Meghalaya</option>
          <option value="Mizoram" >Mizoram</option>
          <option value="Nagaland" >Nagaland</option>
          <option value="Orissa" >Orissa</option>
          <option value="Pondicherry" >Pondicherry</option>
          <option value="Punjab" >Punjab</option>
          <option value="Rajasthan" >Rajasthan</option>
          <option value="Sikkim" >Sikkim</option>
          <option value='Tamil Nadu' >Tamil Nadu</option>
          <option value="Tripura" >Tripura</option>
          <option value='Uttar Pradesh' >Uttar Pradesh</option>
          <option value='Uttaranchal' >Uttaranchal</option>
          <option value='West Bengal' >West Bengal</option>
          
        </select>
      </strong><div style='color: red'><? echo $error_msg['state']?></div></td>
    </tr>
    <tr><td><strong>Pincode</strong></td>
    <td><input name="pincode" type="text" value="<? echo  $pincode?>" /><div style='color: red'><? echo $error_msg['pincode']?></div></td>
    </tr>
    <tr><td colspan="2">&nbsp;</td></tr>
   <tr><td colspan="2"><center><input type="submit" name="submit" /><input type="reset" value="CLEAR" /></center></td>
   </tr>
     <tr><td colspan="2">&nbsp;</td></tr> 
     <tr><td colspan="2"><center>
    
     </center></td>
   </tr>                    
</table>
</form>

</body>
</html>
