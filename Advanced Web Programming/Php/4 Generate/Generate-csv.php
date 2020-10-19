<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Generating CSV</title>
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




		
		$csv=NULL;//to add excel backup hyper link at the end of the page.
		$backup_link=1;//to add excel backup hyper link at the end of the page.
		$filename="Report.csv";//FILE NAME OF CSV FORMAT
		$next_row=array();
		$first_row=array();
		
		$first_row[0]="Email";
		$first_row[1]="Name";
		$first_row[2]="Password";
		$first_row[3]="AGE";
		$first_row[4]="Address1";
		$first_row[5]="Address2";
		$first_row[6]="City";
		$first_row[7]="State";
		$first_row[8]="Pincode";
	
		$csv.=join(',',$first_row)."\n";

		while($row=mysql_fetch_assoc($result))
		{
			$next_row[0]=$row['email'];
			$next_row[1]=$row['name'];
			$next_row[2]=$row['password'];
			$next_row[3]=$row['age'];
			$next_row[4]=$row['addr1'];
			$next_row[5]=$row['addr2'];
			$next_row[6]=$row['city'];
			$next_row[7]=$row['state'];
			$next_row[8]=$row['pincode'];
			
		  // print_r($next_row[26]);
		   $csv.=join(',',$next_row)."\n";
		 }
	  
            
		if (!$handle = fopen($filename, 'w')) {
			 echo "Cannot open file.";
			 exit;
		}
	
		// Write $somecontent to our opened file.
		if (fwrite($handle, $csv) == FALSE) {
			echo "Cannot write to file.";
			exit;
		}

    fclose($handle);
	mysql_close();
?>


<? echo '<a href="Report.csv">Download Report as Excel File.</a>';?>                 

</body>
</html>
