/*
7)	Define a class "Sample2" . in this class declare a variable "int var2;". 
Define setter and getter functions for  "var2". Now create an instance of this class and call  setter and getter functions.
*/
public class Question7 {
	int var;
	public void setVar(int var) {
		this.var = var;
	}

	public int getVar() {
		return var;
	}

	public static void main(String[] args) {
		Question7 obj1 = new Question7();
		System.out.println("Initial Value: " + obj1.getVar());
		obj1.setVar(20);
		System.out.println("After setting: " + obj1.getVar());
	}
}