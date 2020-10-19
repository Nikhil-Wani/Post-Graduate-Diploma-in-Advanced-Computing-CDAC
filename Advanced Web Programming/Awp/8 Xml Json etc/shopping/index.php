<?php
session_start();
?>
<!DOCTYPE html>

<html lang="en"><head>

<TITLE>Transflower Shopping Cart</TITLE>

<link href="style.css" type="text/css" rel="stylesheet" />
</head>

<body>

<h1>Welcome to Transflower EStore</h1>

<?php 
require_once "product-gallery.php";
?>
<div class="clear-float"></div>
<div id="shopping-cart">
<div class="txt-heading">Shopping Cart 
    <a id="btnEmpty" class="cart-action" onClick="cartAction('empty','');">
    <img src="images/icon-empty.png" /> Empty Cart</a>
</div>
<div id="cart-item">
<?php 
require_once "ajax-action.php";
?>
</div>
</div>
<script src="jquery-3.2.1.min.js" type="text/javascript"></script>

<script>

function cartAction(action, product_code) {
    var queryString = "";
    if (action != "") {
        switch (action) {
        case "add":
            queryString = 'action=' + action + '&code=' + product_code
                    + '&quantity=' + $("#qty_" + product_code).val();
            break;
        case "remove":
            queryString = 'action=' + action + '&code=' + product_code;
            break;
        case "empty":
            queryString = 'action=' + action;
            break;
        }
    }

    jQuery.ajax({
        url : "ajax-action.php",
        data : queryString,
        type : "POST",

        success : function(data) {
            $("#cart-item").html(data);
            if (action == "add") {
                $("#add_" + product_code + " img").attr("src",
                        "images/icon-check.png");
                $("#add_" + product_code).attr("onclick", "");
            }
        },
        
        error : function() {
        }
        
    });
}
</script>
</body>
</html>