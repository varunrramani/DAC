/*
10)	Define a class "Sample5" in which declare a variable "int var6". Define the function "disp()" which displays value of "var6". 
create an instance by passing "100". Call  "disp()" function . Now create a reference to the class , which is referring to the instance you have created. 
Using this reference call "disp()" and check the value. 
*/
public class Question10 {
	int var;

	public Question10(int var) {
		this.var = var;
	}

	public void disp() {
		System.out.println("Value of var " + var);
	}

	public static void main(String[] args) {
		Question10 obj = new Question10(100);
		obj.disp();
		Question10 ref = obj;
		ref.disp();
	}
}