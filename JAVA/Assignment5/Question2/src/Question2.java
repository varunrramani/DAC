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
 * 2) create a customer class with following attributes 
 * custid 
 * custname 
 * address
 * age 
 * create one instance of it and store it in a file. (Serialization). now
 * open a file, read the object and read its contents . (Deserialization)
 */

class Customer implements Serializable {
	int custId, age;
	String custName, address;
	
	/**
	 * @param custId
	 * @param age
	 * @param custName
	 * @param address
	 */
	public Customer(int custId, int age, String custName, String address) {
		this.custId = custId;
		this.age = age;
		this.custName = custName;
		this.address = address;
	}
}

public class Question2 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		try (FileOutputStream fos = new FileOutputStream("test.txt")) {
			try (ObjectOutputStream oos = new ObjectOutputStream(fos)) {
				Customer customer = new Customer(0, 25, "Varun", "Mulund");
				oos.writeObject(customer);
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		try (FileInputStream fis = new FileInputStream("test.txt")) {
			try (ObjectInputStream ois = new ObjectInputStream(fis)) {
				Customer cust = (Customer) ois.readObject();
				System.out.println(cust.custId + "\t" + cust.custName + "\t" + cust.age + "\t" + cust.address);
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
