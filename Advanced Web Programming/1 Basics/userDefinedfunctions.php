<html>
<body>
<div style="color: BLUE">**** Defining and calling a function ****</div>
<?php
// A simple function that writes my Message when it is called:
function writeMessage()
{
  echo "You are really a nice person, Have a nice time!";
}
// Calling a PHP Function
writeMessage();

?>

<div style="color: BLUE">**** PHP Functions with Paramters: ****</div>

<?php
//  Using Adding parameters in Functions:

function myGreeting($firstName, $lastName){
    echo "Hello there ". $firstName ." ". $lastName ."!<br />";
}
myGreeting("Jack", "Black");
myGreeting("Ahmed", "Zewail");
myGreeting("Julie", "Roberts");
myGreeting("Charles", "Schwab");
?>
<div style="color: BLUE">**** PHP Functions with Returning Values: ****</div>

<?php
function mySum($numX, $numY){
    $total = $numX + $numY;
    return $total; 
}
$myNumber = 0;
echo "Before the function, myNumber = ". $myNumber ."<br />";
$myNumber = mySum(3, 4); // Store the result of mySum in $myNumber
echo "After the function, myNumber = " . $myNumber ."<br />";
?>

</body>
</html>