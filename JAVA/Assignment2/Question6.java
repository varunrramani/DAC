/*
6) Define a class "DemoOb". 
create an instance of it.
now create a reference and assign the reference created in the above statement.
	Discuss what happens?
Now since u have 2 references, take one of the reference and assign a new instance of the class.
	Discuss what happens?
(For ur discussion, write necessary comments in the program)
*/
class DemoOb {
	int num;
	public DemoOb() {
		num = 10;
	}

	public int getNum() {
		return num;
	}

	public void setNum(int num) {
		this.num = num;
	}
}

public class Question6 {
	public static void main(String[] args) {
		DemoOb obj1 = new DemoOb();
		obj1.setNum(100);
		DemoOb obj2 = obj1;
		System.out.println("obj1 num: " + obj1.getNum());
		System.out.println("obj2 num: " + obj2.getNum());

		obj2 = new DemoOb();
		obj2.setNum(150);
		System.out.println("obj1 num: " + obj1.getNum());
		System.out.println("obj2 num: " + obj2.getNum());
	}
}