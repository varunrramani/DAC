package managers;

import java.util.ArrayList;
import java.util.List;

import models.Employee;

public class EmployeeManager {
	static List<Employee> list = new ArrayList<>();
	static {
		Employee e1 = new Employee();
		e1.setEmpid(1);
		e1.setName("ABC");
		e1.setAddress("Mumbai");
		
		list.add(e1);
		
		Employee e2 = new Employee();
		e2.setEmpid(2);
		e2.setName("DEF");
		e2.setAddress("Mumbai");
		
		list.add(e2);
		
		Employee e3 = new Employee();
		e3.setEmpid(3);
		e3.setName("GHI");
		e3.setAddress("Mumbai");
		
		list.add(e3);
	}
	
	public static List<Employee> getEmployeeList() {
		return list;
	}
}
