<?php

//Output a line of the file until the end is reached
if (file_exists("welcome.txt")) {
		
		//	echo "File is Found";
		
			$file = fopen("welcome.txt", "a") or exit("Unable to open file!");
		
		
		  fputs($file,"-----HI------------");
		  fputs($file,"--Text is Appended-------");
		  while(!feof($file))
		  {
		  echo fgets($file). "<br />";
		  }
		   
		fclose($file);
}
else{
	echo "Filenot found";
}
?>

<!--br />
<hr/>
<h1> reading file character by character</h1>
<hr />
<br /> 
<?php
/*$file=fopen("welcome.txt","r") or exit("Unable to open file!");
while (!feof($file))
  {
  echo fgetc($file);
  }
fclose($file);*/
?>
'r'	 Open for reading only; place the file pointer at the beginning of the file.
'r+'	 Open for reading and writing; place the file pointer at the beginning of the file.
'w'	 Open for writing only; place the file pointer at the beginning of the file and truncate the file to zero length. If the file does not exist, attempt to create it.
'w+'	 Open for reading and writing; place the file pointer at the beginning of the file and truncate the file to zero length. If the file does not exist, attempt to create it.
'a'	 Open for writing only; place the file pointer at the end of the file. If the file does not exist, attempt to create it.
'a+'	 Open for reading and writing; place the file pointer at the end of the file. If the file does not exist, attempt to create it.
