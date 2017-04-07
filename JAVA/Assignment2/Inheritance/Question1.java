/*
1) Create a multi-level inheritance, instantiate the child class and observe constructor invocation.
Also show, if needed how will u invoke parent class constructor from child class ?
*/
class Base {
	public Base() {
		System.out.println("In Base constructor");
	}
}

class Sub1 extends Base {
	/*public Sub1() {
		System.out.println("In Sub1 constructor");
	}*/

	public Sub1(int num) {
		System.out.println("Inside Sub1 parameterised constructor");
	}
}

class Sub2 extends Sub1 {
	public Sub2() {
		super(10);
		System.out.println("In Sub2 constructor");
	}
}

public class Question1 {
	public static void main(String[] args) {
		Sub2 sub2 = new Sub2();
	}
}