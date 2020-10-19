<?php

$servername = "localhost";
$username ="root";
$password="";
$dbname="actsdb";

try{
    $conn= new PDO("mysql:host=$servername;dbname=$dbname",$username,$password);
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    $sql=  "CREATE TABLE Guests (
                id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY, 
                firstname VARCHAR(30) NOT NULL,
                lastname VARCHAR(30) NOT NULL,
                email VARCHAR(50),
                reg_date TIMESTAMP
            )";

    $conn->exec($sql);
    echo "Table Guests create successfully in mysql";

}
catch( PDOException $e)
{
    echo  "<br/>". $e->getMessage();
}

    $conn=null;
 ?>

