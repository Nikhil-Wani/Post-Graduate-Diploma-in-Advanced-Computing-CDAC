<html>
    <head> </head>

    <body>

    <h1>Product Catalog </h1>
<?php

class ProductCatalog{

    public $productArray=array(
            "3DcAM01" => array(
                'id' => '1',
                'name' => '3D Camera',
                'code' => '3DcAM01',
                'image' => 'images/camera.jpg',
                'price' => '1500.00'
            ),
            "USB02" => array(
                'id' => '2',
                'name' => 'External Hard Drive',
                'code' => 'USB02',
                'image' => 'images/external-hard-drive.jpg',
                'price' => '800.00'
            ),
            "wristWear03" => array(
                'id' => '3',
                'name' => 'Wrist Watch',
                'code' => 'wristWear03',
                'image' => 'images/watch.jpg',
                'price' => '300.00'
            )
    );


    public function getAllProduct(){
        return $this->productArray;
    }
}


 $product=new ProductCatalog();

 $productArray=$product->getAllProduct();

 if(! empty($productArray)){
    foreach ($productArray as $k => $v) {
        echo "<img src=".$productArray[$k]["image"]." height=100 width=100/>"; 
        echo  "<h1 style='color:blue'>".$productArray[$k]["name"]."</h1>";  
        echo "$".$productArray[$k]["price"]; 
        echo $productArray[$k]["code"];
        echo '<br/>';
        echo "<button > Add to cart</button> <br/>";
      }

 }
?>
     
    </body>
</html>