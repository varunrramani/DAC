/*
3) Go for Hierarchical inheritance, create instances of child class and observe constructor invocation.
*/
class Base {
	public Base() {
		System.out.println("Base constructor");
	}
}

class Sub1 extends Base {
	public Sub1() {
		System.out.println("Sub1 constructor\n");
	}
}

class Sub2 extends Base {
	public Sub2() {
		System.out.println("Sub2 constructor\n");
	}
}

class Sub3 extends Base {
	public Sub3() {
		System.out.println("Sub3 constructor\n");
	}
}

public class Question3 {
	public static void main(String[] args) {
		Base b1 = new Sub1();
		Base b2 = new Sub2();
		Base b3 = new Sub3();
	}
}