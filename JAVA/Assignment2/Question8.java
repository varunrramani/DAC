/*
7) Define 3 classes A , B and C
in all these classes create static and nonstatic variables as well as methods.
Now Define a class "Demo" ,in which define "main" function. From this main function try to access all the members of A ,B  and C.

8) define static initializers in the above A,B and C classes and check the order of their execution.
*/
class A {
	static {
		System.out.println("Static block of A");
	}
	private static int staticNum = 100;
	public static int getStaticNum() {
		return staticNum;
	}

	private int nonstaticNum = 10;
	public int getNonStaticNum() {
		return nonstaticNum;
	}
}

class B {
	static {
		System.out.println("Static block of B");
	}
	private int nonstaticNum = 15;
	public int getNonStaticNum() {
		return nonstaticNum;
	}
}

class C {
	static {
		System.out.println("Static block of C");
	}
	private static int staticNum = 150;
	public static int getStaticNum() {
		return staticNum;
	}
}

public class Question8 {
	public static void main(String[] args) {
		A a = new A();
		System.out.println("********** A ************");
		System.out.println(a.getNonStaticNum());
		System.out.println(a.getStaticNum());

		B b = new B();
		System.out.println("********** B ************");
		System.out.println(b.getNonStaticNum());

		C c = new C();
		System.out.println("********** C ************");
		System.out.println(c.getStaticNum());
	}
}