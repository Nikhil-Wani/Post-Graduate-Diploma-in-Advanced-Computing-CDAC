<?php 

 echo "<div id='demo'></div>"; 
 
?>

<script type="text/javascript">
    var x=add(34,56);
    document.getElementById("demo").innerHTML = x; 

    function add( a,b){
        return a+b;
    }
</script>
