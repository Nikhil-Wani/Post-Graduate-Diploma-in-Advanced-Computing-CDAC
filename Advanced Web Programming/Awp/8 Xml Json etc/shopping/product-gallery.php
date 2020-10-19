<?php
require_once ("Product.php");
$product = new Product();
$productArray = $product->getAllProduct();
?>

<div id="product-grid">
    <div class="txt-heading">Products</div>
<?php
if (! empty($productArray)) {
    foreach ($productArray as $k => $v) {
        ?>
		<div class="product-item">
         <form id="frmCart">
            <div class="product-image">
                <img src="<?php echo $productArray[$k]["image"]; ?>">
            </div>
            <div>
                <div class="product-info">
                    <strong><?php echo $productArray[$k]["name"]; ?></strong>
                </div>
                <div class="product-info product-price"><?php echo "$".$productArray[$k]["price"]; ?></div>
                <div class="product-info">
                    <button type="button"
                        id="add_<?php echo $productArray[$k]["code"]; ?>"
                        class="btnAddAction cart-action"
                        onClick="cartAction('add','<?php echo $productArray[$k]["code"]; ?>')">
                        <img src="images/add-to-cart.png" />
                    </button>
                    <input type="text"
                        id="qty_<?php echo $productArray[$k]["code"]; ?>"
                        name="quantity" value="1" size="2" />
                </div>
            </div>
        </form>
    </div>
	<?php
    }
}
?>
</div>