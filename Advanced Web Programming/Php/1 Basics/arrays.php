<html>
<body>
<div style="color: BLUE">**** Numeric Arrays ****</div>
<?php
//A numeric array stores each array element with a numeric index.
//$cars=array("Saab","Volvo","BMW","Toyota"); 
$cars[0]="Saab";
$cars[1]="Volvo";
$cars[2]="BMW";
$cars[3]="Toyota";
echo $cars[0] . " and " . $cars[1] . " are Swedish cars.";
?>
<div style="color: BLUE">**** Associative Arrays ****</div>
<?php
//Array will have their index as string
$ages['Peter'] = "32";
$ages['Quagmire'] = "30";
$ages['Joe'] = "34";

echo "Peter is " . $ages['Peter'] . " years old.";
?>
<div style="color: BLUE">**** Multidimensional Arrays ****</div>
<?php
//Each element in the main array can also be an array.
   $markes = array( 
		"mohammad" => array
		(
		"physics" => 35,	    
		"maths" => 30,	    
		"chemistry" => 39	    
		),
		"Ram" => array
                (
                "physics" => 30,
                "maths" => 32,
                "chemistry" => 29
                ),
        "Piter" => array
                (
                "physics" => 31,
                "maths" => 22,
                "chemistry" => 39
                )
	     );
   /* Accessing multi-dimensional array values */
   echo "Markes for mohammad in physics : " ;
   echo $markes['mohammad']['physics'] . "<br />"; 
   echo "Markes for Ram in maths : ";
   echo $markes['Ram']['maths'] . "<br />"; 
   echo "Markes for Piter in chemistry : " ;
   echo $markes['Piter']['chemistry'] . "<br />"; 
   
   
    $arrays=array(array(1,2,3),array(4,5,6));
	print_r($arrays);
	echo "<br/> arrays[0][1] :".$arrays[1][2];
  echo "<br/>";
?>
<div style="color: BLUE">**** Looping through element  values ****</div>

 <?php 
 /* foreach ( $array as $value ) {
  Do stuff with $value} */


 $a = array(1, 2, 3, 4, 5); 

 foreach ($a as $b) 

 { 

 print $b . " "; 

 } 

 ?>
<div style="color: BLUE">**** Loopingthrough keys and values ****</div>

<?php
//Looping through keys and values
 $movie = array( "Zero"=>"PHP", "One"=>"Perl", "Two"=>"Java" );

$array = array();

foreach ( $movie as $key => $value ) {
  echo "$key:";
  echo "$value"."<br />";
}
?>
<div style="color: BLUE">**** Sorting through Arrays ****</div>

    <?php

    $narray[0]="Alfred";
    $narray[1]="Robert";
    $narray[2]="Deepak";
    $narray[3]="Teresa";
    $narray[4]="Joshua";
    $narray[5]="Chandni";
    $narray[6]="Sadiq";
    $narray[7]="Vladimir";

    sort($narray);                  //sort function is used Asecending
									//rsort function is used for Descending

    for($i=0; $i<8; $i++)
    {
    print $narray[$i] . "<br />";
    }
	print_r($narray);
	echo "<br/>";
	/*
	
	echo "-----------------------------------------<br/>";
	rsort($narray);
	 for($i=0; $i<8; $i++)
    {
    print $narray[$i] . "<br />";
    }
	*/
    ?>
<div style="color: BLUE">****  Count values in Array ****</div>
<?php

$values = array(1,1,1,2,2,2,2,3,3,4,2,5,1,3,5,3,1,5);
$most_popular = array_count_values($values);
//print_r —  Prints human-readable information about a variable 
print_r ($most_popular);

?>
</body>
</html>