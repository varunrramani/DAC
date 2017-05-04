package controllers;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.servlet.ModelAndView;

import interfaces.EmployeeDAO;
import models.Employee;

/**
 * @author Varun Ramani
 *
 */
@Controller
@RequestMapping("/new_employee")
public class EmployeeController {
	@Autowired
	EmployeeDAO empDao;

	@RequestMapping(method = RequestMethod.GET)
	public ModelAndView getEmployeeObject() {
		Employee employee = new Employee();
		return new ModelAndView("Emp", "employee", employee);
	}

	@RequestMapping(method = RequestMethod.POST)
	public ModelAndView setEmployeeObject(Employee employee) {
		empDao.add(employee);
		employee = new Employee();
		return new ModelAndView("Emp", "employee", employee);
	}
}
