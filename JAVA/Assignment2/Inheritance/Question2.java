/*
2) create a class "Vehicle", define a method "public void start()" in it. From this class derive a class FourWheeler. 
How will u override "start()" method of parent class ?
*/
class Vehicle {
	public void start() {
		System.out.println("Vehicle class Start");
	}
}

class FourWheeler extends Vehicle {
	@Override
	public void start() {
		System.out.println("FourWheeler class start");
	}
}

public class Question2 {
	public static void main(String[] args) {
		Vehicle vehicle = new FourWheeler();

		vehicle.start();
	}
}