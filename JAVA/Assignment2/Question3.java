/*
3)create a class "Shape" with 2 attributes, "width" and "height". Make sure one can not access these attributes directly.
provide accessor methods on these attributes and allow them to call from outside of your class.
*/
class Shape {
	private int width, height;

	public Shape(int width, int height) {
		this.width = width;
		this.height = height;
	}

	public int getWidth() {
		return width;
	}

	public int getHeight() {
		return height;
	}
}

public class Question3 {
	public static void main(String[] args) {
		Shape shape = new Shape(10, 20);
		System.out.println("Width: " + shape.getWidth());
		System.out.println("Height: " + shape.getHeight());
	}
}