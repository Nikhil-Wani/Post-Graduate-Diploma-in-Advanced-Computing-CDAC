<html>
<head></head>
<body>
<?php
class Shape {
	public function name() {
		echo "I am a shape";
	}
}

class Circle extends Shape {

}

$circle = new Circle();
$circle->name(); // I am a shape
?>
</body>
</html>