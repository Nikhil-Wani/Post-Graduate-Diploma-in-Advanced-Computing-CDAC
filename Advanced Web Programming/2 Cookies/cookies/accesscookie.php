<html>
<head>
<title>Accessing Cookies with PHP</title>
<META HTTP-EQUIV="Pragma" CONTENT="private">
<META HTTP-EQUIV="Cache-Control" CONTENT="private, max-age=5400, pre-check=5400">
</head>
<body>
<?php
//PHP provides many ways to access cookies.Simplest way is to use either $_COOKIE or $HTTP_COOKIE_VARS variables.
echo "Name :".$_COOKIE["name"]. "<br />";
/* is equivalent to */
//echo "Name :(Retrieved using http vars)".$HTTP_COOKIE_VARS["name"]. "<br />";//we cannot see output due to we are using HTTP

echo "AGE :".$_COOKIE["age"] . "<br />";
/* is equivalent to */
//echo $HTTP_COOKIE_VARS["age"] . "<br />";

echo "<br/>test :".$_COOKIE['test'];
echo "<br/>test1 :".$_COOKIE['test1'];


echo "<br/>----------------------------------------------<br/>";
echo print_r($_COOKIE);
unset($_COOKIE['age']);
echo "<br/>----------------------------------------------<br/>";
echo print_r($_COOKIE);

?>
</body>
</html>
