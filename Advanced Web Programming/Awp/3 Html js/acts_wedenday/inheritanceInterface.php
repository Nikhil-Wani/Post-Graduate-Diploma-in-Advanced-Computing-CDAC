<html>
<head></head>
<body>
<?php


abstract class Vehicle {
	abstract public function startEngine();

	public function stopEngine() {
		echo "Engine stoped";
	}
}

class Car extends Vehicle {
	public function startEngine() {
		echo "Engine Started";
	}
}


interface IDrawable {
	public function draw();
}

class Rectangle implements IDrawable {
	public function draw() {
		echo "I am a Rectangle";
	}
}

class Triangle implements IDrawable {
	public function draw() {
		echo "I am a triangle";
	}
}




?>

</body>
</html>

