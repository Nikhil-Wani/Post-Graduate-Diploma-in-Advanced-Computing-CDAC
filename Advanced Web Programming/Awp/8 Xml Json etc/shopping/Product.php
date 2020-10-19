<?php
class Product
{
    public $productArray = array(
        "3DcAM01" => array(
            'id' => '1',
            'name' => '3D Camera',
            'code' => '3DcAM01',
            'image' => 'product-images/camera.jpg',
            'price' => '1500.00'
        ),
        "USB02" => array(
            'id' => '2',
            'name' => 'External Hard Drive',
            'code' => 'USB02',
            'image' => 'product-images/external-hard-drive.jpg',
            'price' => '800.00'
        ),
        "wristWear03" => array(
            'id' => '3',
            'name' => 'Wrist Watch',
            'code' => 'wristWear03',
            'image' => 'product-images/watch.jpg',
            'price' => '300.00'
        )
    );

    public function getAllProduct()
    {
        return $this->productArray;
    }
}