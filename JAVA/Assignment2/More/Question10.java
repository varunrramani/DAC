/*
10)	Define an interface "Vechicle" with "start()" function . 
Now derive  classes like "TwoWheeler", "ThreeWheeler","FourWheeler" etc. from "Vehicle" and override "start()" function. 
Define a class "VDemo" in which  write  main()  function. 
In the main function create a reference to Vehicle  class referring to any of the sub class. Using this reference, call "start" method.
*/
interface Vehicle {
	// Method Declaration
	void start();
}

class TwoWheeler implements Vehicle {
	//Method Definition
	@Override
	public void start() {
		System.out.println("TwoWheeler start");
	}
}

class ThreeWheeler implements Vehicle {
	//Method Definition
	@Override
	public void start() {
		System.out.println("ThreeWheeler start");
	}
}

class FourWheeler implements Vehicle {
	//Method Definition
	@Override
	public void start() {
		System.out.println("FourWheeler start");
	}
}

public class Question10 {
	public static void main(String[] args) {
		Vehicle twoWheeler = new TwoWheeler();
		Vehicle threeWheeler = new ThreeWheeler();
		Vehicle fourWheeler = new FourWheeler();

		twoWheeler.start();
		threeWheeler.start();
		fourWheeler.start();
	}
}