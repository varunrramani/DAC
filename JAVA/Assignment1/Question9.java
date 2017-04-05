/*
9)	Define a class "Sample4" . in this class declare two variables " int var4,var5;" . 
Define  "disp()" function which displays values  "var4" and "var5" . 
Now create two instances . 
one instance you create without passing any values. Other instance you create by passing 2 values for "var4" and "var5". 
Now call "disp()"" function using both the instances.
*/
public class Question9 {
	int var1, var2;

	public Question9() {

	}

	public Question9(int var1, int var2) {
		this.var1 = var1;
		this.var2 = var2;
	}

	public void disp() {
		System.out.println("var1: " + var1 + "\nvar2: " + var2);
	}

	public static void main(String[] args) {
		Question9 obj1 = new Question9();
		Question9 obj2 = new Question9(10, 20);

		obj1.disp();
		obj2.disp();
	}
}