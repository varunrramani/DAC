/*
1)	Define 2 classes "First" and "Second" with member variables, member functions and constructors of  your choice. 
Now define a class "Two" in which define main function. 
In main function create various instances of First and Second  and call their individual member functions.
*/
class First {
	private int num1;

	public First(int num1) {
		this.num1 = num1;
	}

	public int getNum() {
		return num1;
	}

	public void setNum(int num1) {
		this.num1 = num1;
	}
}

class Second {
	private int num2;

	public Second(int num2) {
		this.num2 = num2;
	}

	public int getNum() {
		return num2;
	}

	public void setNum(int num2) {
		this.num2 = num2;
	}
}

public class Question1 {
	public static void main(String[] args) {
		First f1 = new First(10);
		System.out.println(f1.getNum());
		f1.setNum(100);
		System.out.println(f1.getNum());

		Second s1 = new Second(20);
		System.out.println(s1.getNum());
		s1.setNum(200);
		System.out.println(s1.getNum());
	}
}