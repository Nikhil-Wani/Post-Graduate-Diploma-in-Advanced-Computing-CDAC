<?php
$email=$_GET["em"];
$name=$_GET["nm"];
if($email=="rajesh@gmail.com" && $name=="rajesh"){
	echo "success";
}
else{
	echo "failed";
}


?>