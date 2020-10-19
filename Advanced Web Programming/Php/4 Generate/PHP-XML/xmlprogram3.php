
<!--Creating XML document using DOM parser-->
<HTML>
<HEAD>
 <TITLE>New Document</TITLE>
</HEAD>
<BODY>
<?
		include("dbasecon.php");
  		$result=mysql_query("select email,name,age,addr1,addr2,city,state,pincode from user");
 
 
	  //Creates XML string and XML document using the DOM
	    $dom = new DomDocument('1.0');
	
	 //add root - <books>
	    $students = $dom->appendChild($dom->createElement('students'));

  while($row=mysql_fetch_assoc($result)){
			
				 //add <student> element add <student>
				 $student = $students->appendChild($dom->createElement('student'));
				
				 //add <title> element to <book>
				 $email = $student->appendChild($dom->createElement('email'));
				
				 //add <email> text node element to <email>
				 $email->appendChild($dom->createTextNode($row['email']));
				 
				 
				 
				 
				 $name = $student->appendChild($dom->createElement('name'));
				 $name->appendChild($dom->createTextNode($row['name']));
				 
				 $age = $student->appendChild($dom->createElement('age'));
				 $age->appendChild($dom->createTextNode($row['age']));
				 
				 $addr1 = $student->appendChild($dom->createElement('addr1'));
				 $addr1->appendChild($dom->createTextNode($row['addr1']));
				 
				 $addr2 = $student->appendChild($dom->createElement('addr2'));
				 $addr2->appendChild($dom->createTextNode($row['addr2']));
				 
				 $city = $student->appendChild($dom->createElement('city'));
				 $city->appendChild($dom->createTextNode($row['city']));
				 
				 $state = $student->appendChild($dom->createElement('state'));
				 $state->appendChild($dom->createTextNode($row['state']));
				 
				 $pincode = $student->appendChild($dom->createElement('pincode'));
				 $pincode->appendChild($dom->createTextNode($row['pincode']));
				 
		 }
 
 
		 //generate xml
		 $dom->formatOutput = true; // set the formatOutput attribute of
									// domDocument to true
		 // save XML as string or file
		 $test1 = $dom->saveXML(); // put string in test1
		 $dom->save('test2.xml'); // save as file
		 
		 echo "<br/>xml file is Created";
 
?>
