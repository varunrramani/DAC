package controllers;

import java.util.ArrayList;
import java.util.List;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.servlet.ModelAndView;

/**
 * @author Varun Ramani
 *
 */
@Controller
public class VitaController {

	@RequestMapping("/cpp")
	public ModelAndView getCppModules() {
		List<String> list = new ArrayList<>();
		list.add("Friend Function");
		list.add("Polymorphism");
		list.add("Inheritance");
		return new ModelAndView("course", "list", list);
	}

	@RequestMapping("/java")
	public ModelAndView getJavaModules() {
		List<String> list = new ArrayList<>();
		list.add("Generics");
		list.add("Hibernate");
		list.add("JSP");
		return new ModelAndView("course", "list", list);
	}
}
