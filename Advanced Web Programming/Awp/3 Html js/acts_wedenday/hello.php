<html>
    <head></head>
    <body>
        <h1>EStore App</h1>
         <?php
            $count;
            $count=45;
            $count++;

            echo '<h1>Welcome to PHP</h1> <br/>';
            echo $count;

            $flowers=array("Grbera","Lily","Jasmine","Lotus");  
           
            foreach( $flowers as $flower){
                echo "Flower is: $flower<br />";  
            }

            array_push($flowers,"Carnation");
            array_push($flowers, "Rose");

            
            
             $del_val="Carnation";

            if (($key = array_search($del_val, $flowers)) !== false) 
            {
                unset($flowers[$key]);
            }



         ?>
    </body>
</html>