<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>

<body>

<?php
$data[] = array('volume' => 67, 'edition' => 8);
$data[] = array('volume' => 86, 'edition' => 1);
$data[] = array('volume' => 85, 'edition' => 6);
$data[] = array('volume' => 98, 'edition' => 2);
$data[] = array('volume' => 86, 'edition' => 6);
$data[] = array('volume' => 67, 'edition' => 7);
?>
<?php
// Obtain a list of columns
foreach ($data as $key => $row) {
    $volume[$key]  = $row['volume'];
    $edition[$key] = $row['edition'];
echo "&nbsp;&nbsp;&nbsp;".$volume[$key]."---->".$edition[$key]."<br/>";
}

// Sort the data with volume descending, edition ascending
// Add $data as the last parameter, to sort by the common key
array_multisort($volume, SORT_DESC, $edition, SORT_ASC, $data);

echo "After Array Multi sort<br/>";
foreach($data as $v ){
	echo "&nbsp;&nbsp;&nbsp;".$v['volume']." ---> ".$v['edition'];
	echo"</br>";
}
?>
</body>
</html>
