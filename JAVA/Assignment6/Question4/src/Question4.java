import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

/**
 * @author Varun Ramani
 *
 */

/*
 * 4) Define a class "Employee" with following members empid, empname, desig,
 * basic. Define a parameterised constructor which will take all these values
 * while creating an instance. Also define "disp()" method which will display
 * all these details. create 4 employees and save them in "ArrayList". Now save
 * this "ArrayList" in a file. Open file , read "ArrayList" , traverse ArrayList
 * and call "disp()" for all the objects.
 */

class Employee implements Serializable {
	int empId, basic;
	String empName, desig;

	/**
	 * @param empId
	 * @param basic
	 * @param empName
	 * @param desig
	 */
	public Employee(int empId, int basic, String empName, String desig) {
		this.empId = empId;
		this.basic = basic;
		this.empName = empName;
		this.desig = desig;
	}
	
	public void disp() {
		System.out.println("EmpId: " + empId + " Emp Name: " + empName + " Designation: " + desig + " Basic: " + basic);
	}
}

public class Question4 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		List<Employee> list = new ArrayList<>();
		list.add(new Employee(1, 1000, "ABC", "Test"));
		list.add(new Employee(2, 2000, "DEF", "Test 2"));
		list.add(new Employee(3, 3000, "GHI", "Test 3"));
		
		try (FileOutputStream fos = new FileOutputStream("test.txt")) {
			try (ObjectOutputStream oos = new ObjectOutputStream(fos)) {
				oos.writeObject(list);
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		try (FileInputStream fis = new FileInputStream("test.txt")) {
			try (ObjectInputStream ois = new ObjectInputStream(fis)) {
				List<Employee> readList = (List<Employee>) ois.readObject();
				for (int i = 0; i < readList.size(); i++) {
					readList.get(i).disp();
				}
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
