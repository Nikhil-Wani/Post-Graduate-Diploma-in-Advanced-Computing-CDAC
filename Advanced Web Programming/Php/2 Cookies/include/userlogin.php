<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>

<body>
<? 
	include("header.php");
	include("leftsidemenu.php");
?>
    <br/><br/>
    
    <div id="container">
	<center>
<form>
    	<table>
        	<tr><td><strong>Email</strong></td>
       	  <td><input type="text" name="email" /></td></tr>
            <tr><td><strong>Password</strong></td>
          <td><input type="text" name="password" /></td></tr>
            <tr><td><input type="submit" value="Login" /></td><td><input type="reset" value="clear" /></td></tr>
        </table>
    </form>
     <br/><br/> <br/><br/>
    </center>
    </div>
	<?
	include("footer.php");
?>


