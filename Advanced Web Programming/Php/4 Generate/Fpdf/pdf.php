<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>

<body>
<?php
ob_start();
require('fpdf.php');

$pdf = new FPDF();
$pdf->AddPage();
$pdf->SetFont('Arial','B',10);
$pdf->Cell(40,10,'Hello World!');
$pdf->Cell(50,10,'There is 4 sessions of PHP 1.orientation 2.Form Data 3.DB connection info 4.Generate PDF file ');
//$pdf->Cell(40,10,'Hello World!');
//$pdf->Cell(40,10,'Hello World!');

$pdf->Output();
ob_end_flush();
?>
</body>
</html>
