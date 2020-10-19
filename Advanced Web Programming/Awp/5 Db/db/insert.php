<?php

$servername = "localhost";
$username ="root";
$password="";
$dbname="actsdb";

// Create connection
$conn = new mysqli($servername, $username, $password,
                 $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 


$sql = "INSERT INTO Guests (firstname, lastname, email)
                    VALUES ('Shital', 'More', 'shital.more@gmail.com')";


if ($conn->query($sql) === TRUE) {
    echo "New record created successfully";
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}

$conn->close();

?>