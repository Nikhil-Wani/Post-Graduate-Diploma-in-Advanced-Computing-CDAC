<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>

<body>
<?php

$con = mysql_connect("localhost","root","");
$host="localhost"; // Host name
$username="root"; // Mysql username
$password=""; // Mysql password
$db_name="dac-db"; // Database name
$tbl_name="user"; // Table name

// Connect to server and select database.
mysql_connect("$host", "$username", "$password")or die("cannot connect");
mysql_select_db("$db_name")or die("cannot select DB");

echo $query  = "select email,name,age,addr1,addr2,city,state,pincode from user";
$result = mysql_query($query) or die('Error, query failed');
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }


	ob_start();
	require('fpdf/fpdf.php');
	
	$pdf = new FPDF('P','mm','A4'); 
	
	//P , L
	//A4 is Default
	/**
	A3,A5,Letter,Legal
	
	pt: point
mm: millimeter
cm: centimeter
in: inch
	
	*/
	$pdf->AddPage();
	$pdf->SetFont('Arial','',7);
	
	
	$pdf->Image('cdac-logo3.png');
	  $pdf->Cell(0,10,"",0,1);
	 
	while($row=mysql_fetch_assoc($result))
	{    
		//print_r($row);	
	  
		$pdf->Cell(0,10,"Email ID :".$row['email']."Name  :".$row['name']."Address Line 1  :".$row['addr1']."Address Line 2".$row['addr2']."City :".$row['city']."State  :".$row['state']."Pincode ".$row['pincode'],1,1,'L');
	}
$pdf->Output();
ob_end_flush();

?>
</body>
</html>
