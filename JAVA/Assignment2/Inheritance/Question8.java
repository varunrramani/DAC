/*
8) Define a class "base1" with only parameterized constructor.
Derive a class "sub1" from "base1". This class should have following constructors
	a) Default
	b) one parameter
	c) two parameter
Now try to instantiate "sub1" , using any of the above mentioned constructors.
*/
class Base {
	public Base(int num) {
		System.out.println("Num is: " + num);
	}
}

class Sub extends Base {
	Sub() {
		super(10);
	}

	Sub(int num) {
		super(num);
	}

	Sub(int num1, int num2) {
		super(num1);
	}
}

public class Question8 {
	public static void main(String[] args) {
		Sub s1 = new Sub();
		Sub s2 = new Sub(20);
		Sub s3 = new Sub(30, 40);
	}
	
}