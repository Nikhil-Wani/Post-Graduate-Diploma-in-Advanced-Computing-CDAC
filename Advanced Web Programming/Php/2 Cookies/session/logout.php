<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>

<body>

<?
  session_start();
  unset($_COOKIE['PHPSESSID']);
  /*unset($_SESSION['email']);
  unset($_SESSION['name']);
  unset($_SESSION['age']);
  unset($_SESSION['Addr1']);
  unset($_SESSION['Addr2']);
  unset($_SESSION['pincode']);
  unset($_SESSION['state']);
  unset($_SESSION['city']);*/
  session_regenerate_id(true);
  session_unset();
  session_destroy();
  echo "Logged out Successfully";
  
  //header("Location :userlogin.php");
	echo "<a href='user_registeration.php'>Back to Registeration Page</a>";
?>

</body>
</html>
