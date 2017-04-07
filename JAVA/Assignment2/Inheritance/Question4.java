/*
4) Create a class "Top1" with "disp1()" method.
From this class Derive "Bottom1", "Bottom2" and "Bottom3" classes ,override the "disp1()".
Now show how will u achieve dynamic polymorphism.
*/
class Top1 {
	public void disp1() {
		System.out.println("Top1 disp1");
	}
}

class Bottom1 extends Top1 {
	@Override
	public void disp1() {
		System.out.println("Bottom1 disp1");
	}
}

class Bottom2 extends Top1 {
	@Override
	public void disp1() {
		System.out.println("Bottom2 disp1");
	}
}

class Bottom3 extends Top1 {
	@Override
	public void disp1() {
		System.out.println("Bottom3 disp1");
	}
}

public class Question4 {
	public static void main(String[] args) {
		Top1 t1 = new Bottom1();
		Top1 t2 = new Bottom2();
		Top1 t3 = new Bottom3();
		t1.disp1();
		t2.disp1();
		t3.disp1();
	}
}