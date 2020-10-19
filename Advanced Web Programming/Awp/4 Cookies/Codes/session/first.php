<?php
// Start the session
session_start();
?>
<!DOCTYPE html>
<html>
<body>

<?php
// Set session variables
$_SESSION["favflower"] = "gerbera";
$_SESSION["favplace"] = "acts";
echo "Session variables are set.";
?>

</body>
</html>