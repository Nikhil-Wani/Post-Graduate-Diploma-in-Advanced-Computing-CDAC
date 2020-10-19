<?php

class Product{
    public $title;
    public $description;
    public $quantity;
    public  $unitprice;

    function __construct($title, $description, $quantity, $unitprice){
        $this->title=$title;
        $this->description=$description;
        $this->unitprice=$unitprice;
        $this->quanity=$quantity;
    }

}

$flower=new Product("Rose","Valentine Flower",8,3000);

$flower->title = "Gerbera";
$flower->description = "Wedding Flower";
$flower->unitprice = 12;
$flower->quantity = 5000;

$flowerJSON = json_encode($flower);
echo $flowerJSON;
?>
