/*
2)	Create a class with static and non-static member variables. Define static and non-static member functions. 
Create instance of this class and call both static and non-static member functions.
*/
class Demo {
	static int staticVar = 10;
	int var;

	public Demo() {
		this.var = 20;
	}

	static int getStaticVar() {
		return staticVar;
	}

	int getVar() {
		return var;
	}
}

class Question2 {
	public static void main(String[] args) {
		System.out.println("Static Var: " + Demo.getStaticVar());
		Demo demo = new Demo();
		System.out.println("Non-static var: " + demo.getVar());
	}
}