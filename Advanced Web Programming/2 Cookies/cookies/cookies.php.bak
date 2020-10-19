<?php
   header("Cache-Control: no-cache, must-revalidate")
   setcookie("name", "John Watkin", time()+3600, "/","", 0); // Last Parameter 0->incase of HTTP  and 1->sending cookie incase of HTTPS environment//
   setcookie("age", "36", time()+3600, "/", "",  0);
   setcookie("test","111", time()+30,"/","",0);
   setcookie("test1","murali",time()-3600,"/","",0);

  echo "Name :".$_COOKIE['name'];
  //echo "Name :".$HTTP_COOKIE_VARS["name"]. "<br />";
?>

<html>
<head>
<title>Setting Cookies with PHP</title>
</head>
<body>
<?php echo "Cookies are created in server and sent to the client(browser).<br/> browser stores the cookies once check it out."?>
</body>
</html>
<? include("accesscookie.php")?>