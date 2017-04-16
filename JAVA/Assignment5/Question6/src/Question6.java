import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;

/**
 * @author Varun Ramani
 *
 */

/*
 * 6) create a class "Car" with some members. ( do not implement "Serializable"
 * for "Car") Derive a class "Nano" from it. have some members in "Nano" also.
 * (implement "Serializable") instantiate "Nano" and store this instance in a
 * file. (Serialization). read the file and read the object of "Nano" .
 * (Deserialiation) . Observe what happens when u serialize a child class. is it
 * persist ur parent class also ?
 */

class Car implements Serializable {
	int carId;
	
	public Car() {
		
	}

	public Car(int carId) {
		this.carId = carId;
	}
}

class Nano extends Car implements Serializable {
	String carOwner;

	public Nano() {
		super();
	}
	public Nano(String carOwner, int carId) {
		super(carId);
		this.carOwner = carOwner;
	}
}

public class Question6 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Nano nano = new Nano("Varun", 10);
		try (FileOutputStream fos = new FileOutputStream("Test.txt")) {
			try (ObjectOutputStream oos = new ObjectOutputStream(fos)) {
				oos.writeObject(nano);
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		try (FileInputStream fis = new FileInputStream("Test.txt")) {
			try (ObjectInputStream ois = new ObjectInputStream(fis)) {
				Nano nano1 = (Nano) ois.readObject();
				System.out.println("ID: " + nano1.carId + " Owner Name: " + nano1.carOwner);
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
