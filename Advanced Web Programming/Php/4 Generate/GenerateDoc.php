<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Generating DOC</title>
</head>

<body>
<?

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

//print_r($tsv);
$tsv = implode("\r\n", $tsv);

$fileName = 'mysql-to-doc.doc';
header("Content-type: application/vnd.vnd.ms-word");
header("Content-Disposition: attachment; filename=$fileName");

echo "<hr/>";
echo $tsv;
?>
</body>
</html>
