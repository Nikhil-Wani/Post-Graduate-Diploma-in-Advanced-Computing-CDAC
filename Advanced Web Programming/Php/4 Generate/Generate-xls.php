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

$query  = "select * from user";
$result = mysql_query($query) or die('Error, query failed');
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

$tsv  = array();
$html = array();

//$row1=array(0=>"EmailId","Name","Password","Age","Address1","Address2","City","State","Pin");
while($row = mysql_fetch_array($result, MYSQL_NUM))
{
	
	
   $tsv[]  = implode("\t", $row);//joining of array elements to string
 }
//$row2[]=implode("\t",$row1);

$tsv = implode("\r\n", $tsv);

$fileName = 'mysql-to-excel.xls';
header("Content-type: application/vnd.ms-excel");
header("Content-Disposition: attachment; filename=$fileName");



echo $tsv;

mysql_close();

?>
