/*
5) create abstract class Shape. declare "draw()" function as abstract. From this class define "Triangle","Polygon" and "Circle" .
create an array of Shape having 3 elements.
store child objects into this array . and call
their draw function.
*/
abstract class Shape {
	abstract public void draw();
}

class Triangle extends Shape {
	@Override
	public void draw() {
		System.out.println("Triangle draw");
	}
}

class Polygon extends Shape {
	@Override
	public void draw() {
		System.out.println("Polygon draw");
	}
}

class Circle extends Shape {
	@Override
	public void draw() {
		System.out.println("Circle draw");
	}
}

public class Question5 {
	public static void main(String[] args) {
		Shape arr[] = new Shape[3];
		arr[0] = new Triangle();
		arr[1] = new Polygon();
		arr[2] = new Circle();
		int length = arr.length;
		for (int i = 0; i < length; i++) {
			arr[i].draw();
		}
	}
}