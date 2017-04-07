/*
7) Define class "Parent1" with some data.
Define interface "Parent2" with some data.
Derive a class "Child" from "Parent1" and "Parent2", instantiate it and call the members.
*/
interface Parent2 {
	void display2();
}

class Parent1 {
	void display1() {
		System.out.println("Parent 1 display1");
	}
}

class Child extends Parent1 implements Parent2 {
	@Override
	public void display2() {
		System.out.println("Child display2");
	}

	@Override
	public void display1() {
		System.out.println("Child display1");
	}
}

public class Question7 {
	public static void main(String[] args) {
		Child child = new Child();
		child.display1();
		child.display2();
	}
}