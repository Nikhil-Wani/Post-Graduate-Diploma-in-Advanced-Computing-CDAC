<?php

$row = 1;
if (($handle = fopen("test.csv", "r")) !== FALSE) {
    while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
        $num = count($data);
        echo "<p> $num fields in line $row: <br /></p>\n";
        // iterate over each column here
        for ($c=0; $c < $num; $c++) {
            // handle column data here
            echo $data[$c] . "<br />\n";
            // exit the loop after 3rd column parsed
            if ($c == 2) break;
        }
        ++$row;
    }
    fclose($handle);
}



$lines = file('data.csv');
$linecount = count($lines);
for ($i = 1; $i < $linecount; $i++){
   $fields = explode(',', $lines[$i]);
   $sno  = $fields[0];
   $name = $fields[1];
   $ph   = $fields[2];
   $add  = $fields[3];
 
   echo "data".$sno. " ".$name." ".$ph. " ".$add;
}
?>