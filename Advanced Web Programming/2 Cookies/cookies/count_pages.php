<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Cookie count</title>
</head>

<body>
<?
	
	if(strlen($_COOKIE['count'])==0) {
		echo "<b>Thank you for visiting my website at first time!!!</b>";
		setcookie("count",1,time()+86400*7,"/","",0);	
	}
	else{
		$_COOKIE['count']=$_COOKIE['count']+1;
		setcookie("count",$_COOKIE['count'],time()+(86400*7),"/","",0);
		echo "No of times visited to this page is calculated via cookie :".$_COOKIE['count'];
	}
?>
</body>
</html>
