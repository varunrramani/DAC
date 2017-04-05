/*
8)	Define a class "Sample3" . in this class declare a variable "int var3;". 
Define  "disp()"" function which displays  "var3" . Now create anonymous  instance of this class and call  disp function.
*/
public class Question8 {
	int var = 100;

	public void disp() {
		System.out.println("Value of var: " + var);
	}

	public static void main(String[] args) {
		new Question8().disp();
	}
}