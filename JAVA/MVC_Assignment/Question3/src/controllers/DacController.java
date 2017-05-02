package controllers;

import java.util.ArrayList;
import java.util.List;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.servlet.ModelAndView;

@Controller
public class DacController {

	@RequestMapping("/leads")
	public ModelAndView getTeamLeads() {
		List<String> list = new ArrayList<>();
		list.add("Varun");
		list.add("Amol");
		list.add("Prince");
		return new ModelAndView("display", "list", list);
	}
	
	@RequestMapping("/projects")
	public ModelAndView getProjects() {
		List<String> list = new ArrayList<>();
		list.add("E-Mart");
		list.add("Vehicle Configurator");
		list.add("E-Tool");
		return new ModelAndView("display", "list", list);
	}
}
