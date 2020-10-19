<?php
class Product{
    private $title;
    private $description;
    private $unitPrice;
    private $quantity;
    private $likes;

    function __construct($title,$description, $unitPrice, $quantity, $likes)
    {

        $this->title=$title;
        $this->description = $description;
        $this->unitPrice = $unitPrice;
        $this->quantity = $quantity;
        $this->likes = $likes;

    }

    function getTitle()
    {
        return $this->title;
    }
    
    function printTitle()
    {
        print $this->title;
    }

    function print(){
        print $this->title;
        print $this->description;
        print $this->unitPrice;
        print $this->quantity;
        print $this->likes;


    }

}



$flw= new Product("Gerbera","Wedding flower",12, 23000,45000);

$flw->printTitle();
$flw->print();
?>
