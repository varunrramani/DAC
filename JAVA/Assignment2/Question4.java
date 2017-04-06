/*
4) Define a class "MyClass" and make sure clients can instantiate it , 
a) without any argument
b) with one int argument
c) with two int arguments
*/
class MyClass {
	private int num1, num2;

	public MyClass() {

	}

	public MyClass(int num1) {
		this.num1 = num1;
	}

	public MyClass(int num1, int num2) {
		this.num1 = num1;
		this.num2 = num2;
	}

	public int getNum1() {
		return num1;
	}

	public int getNum2() {
		return num2;
	}
}

public class Question4 {
	public static void main(String[] args) {
		MyClass one = new MyClass();
		MyClass two = new MyClass(10);
		MyClass three = new MyClass(10, 20);

		System.out.println("One num1: " + one.getNum1() + " num2: " + one.getNum2());
		System.out.println("two num1: " + two.getNum1() + " num2: " + two.getNum2());
		System.out.println("three num1: " + three.getNum1() + " num2: " + three.getNum2());
	}
}