<?php
session_start();
?>
<!DOCTYPE html>
<html>
<body>

<?php
// Echo session variables that were set on previous page
echo "Favorite Flower is " . $_SESSION["favflower"] . ".<br>";
echo "Favorite Place is " . $_SESSION["favplace"] . ".";
?>

</body>
</html>