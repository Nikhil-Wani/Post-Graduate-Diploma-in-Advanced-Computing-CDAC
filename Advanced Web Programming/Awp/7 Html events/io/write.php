<?php
$myfile = fopen("dacschool.txt", "w") or die("Unable to open file!");
$txt = "Acts,Pune\n";
fwrite($myfile, $txt);
$txt = "IACSD, Pune\n";
fwrite($myfile, $txt);

$txt = "Sunbeam, Pune\n";
fwrite($myfile, $txt);

fclose($myfile);
echo "dacschool file is created and contents is written";
?>