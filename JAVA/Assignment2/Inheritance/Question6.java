/*
6) Define interface "A" with "disp1()" method.
Derive from "A", interface "B" with "disp2" method.
Derive class "C" , from "B".
Instantiate class "C" and call its members as well as derived from parent interfaces.
*/
interface A {
	void disp1();
}

interface B extends A {
	void disp2();
}

class C implements B {
	@Override
	public void disp1() {
		System.out.println("Override disp1");
	}

	@Override
	public void disp2() {
		System.out.println("Override disp2");
	}

	void disp() {
		System.out.println("Member method disp");
	}
}

public class Question6 {
	public static void main(String[] args) {
		C b = new C();
		b.disp1();
		b.disp2();
		b.disp();
	}
}