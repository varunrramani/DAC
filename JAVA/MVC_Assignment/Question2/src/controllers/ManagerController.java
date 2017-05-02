package controllers;

import java.util.ArrayList;
import java.util.List;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.servlet.ModelAndView;

import managers.EmployeeManager;

@Controller
public class ManagerController {

	@RequestMapping("/employee")
	public ModelAndView getEmployees() {
		return new ModelAndView("display", "list", EmployeeManager.getEmployeeList());
	}
	
	@RequestMapping("/modules") 
	public ModelAndView getModules() {
		List<String> list = new ArrayList<>();
		list.add("Database");
		list.add("JAVA SE");
		list.add("JAVA EE");
		return new ModelAndView("display", "list", list);
	}
}
