<?="hello"

/* ob_start();
echo("Hello there!"); //would normally get printed to the screen/output to browser
$output = ob_get_contents();
ob_end_clean();*/

?>
<?
	$username = "username";
	$password = "password";
	$message1 = "<p>This is my primary message.</p>\n";
	$message2 = "<p>This is my secondary message.</p>\n";
	$message3 = "<p>This is my tertiary message.</p>\n";
?>
<?=$message1?>
<?=$message2?>
<?=$message3?>