<?php
session_start();  
if(isset($_SESSION['views']))
    $_SESSION['views'] = $_SESSION['views']+ 1;
else
    $_SESSION['views'] = 1;

echo "no of views in same session = ". $_SESSION['views']; 
?>
<?php

//session_destroy();
?>
