/*
Define a class "Sample6" in which declare a variable "int var7". Define the function "void disp() "  and  "void fun(Sample ref) ". 
Inside "fun" function try to give some value to  "var7" , using  "ref".
create an instance by passing "200". Call  "disp()" function.
Using this instance call "fun" function . 
Now again call "disp()" function and check the value of  "var7".
*/
public class Question11 {
	int var;

	public Question11(int var) {
		this.var = var;
	}

	void disp() {
		System.out.println("Value of var: " + var);
	}

	void function(Question11 ref) {
		ref.var = 500;
	}

	public static void main(String[] args) {
		Question11 obj = new Question11(200);
		obj.disp();

		obj.function(obj);
		obj.disp();
	}
}