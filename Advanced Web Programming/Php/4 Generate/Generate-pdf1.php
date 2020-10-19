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
	
	 $query  = "select email,name,age,addr1,addr2,city,state,pincode from user where email='aaa@google.com'";
	$result = mysql_query($query) or die('Error, query failed');
	if (!$con)
	{
	  die('Could not connect: ' . mysql_error());
	 }


	ob_start();
	require('fpdf/fpdf.php');
	
	$pdf = new FPDF('P','mm','A4');
	$pdf->AddPage();
	$pdf->SetFont('Arial','',12);
	$row=mysql_fetch_assoc($result);
	
	$pdf->Image('cdac-logo3.png');
	
	$pdf->Cell(0,10,"",0,1,'L');// w,h,text,border,			ln                                    align							       
									//	  0-noborder		0 for right                           C-Center
										//  1-frame 			1 for bigining on nextline			  L-Left 	
										//  					2  below                              R-Right 
										   		
	
	$pdf->Cell(0,10,"Email ID :".$row['email'],0,1,'L');
	$pdf->Cell(0,10,"Name  :".$row['name'],0,1);
	$pdf->Cell(0,10,"age:".$row['age'],0,1);
	$pdf->Cell(0,10,"Address Line 1  :".$row['addr1'],0,1);
	$pdf->Cell(0,10,"Address Line 2".$row['addr2'],0,1);
	$pdf->Cell(0,10,"City :".$row['city'],0,1);
	$pdf->Cell(0,10,"State  :".$row['state'],0,1);
	$pdf->Cell(0,10,"Pincode ".$row['pincode'],0,1);
	
	$pdf->Output();
	ob_end_flush();

?>
</body>
</html>
