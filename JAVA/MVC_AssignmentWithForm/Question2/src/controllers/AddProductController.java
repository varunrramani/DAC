package controllers;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.servlet.ModelAndView;

import interfaces.ProductDAO;
import models.Product;

/**
 * @author Varun Ramani
 *
 */
@Controller
public class AddProductController {
	@Autowired
	ProductDAO productDAO;

	@RequestMapping(value = "newProduct", method = RequestMethod.GET)
	public ModelAndView getProductObject() {
		Product product = new Product();
		return new ModelAndView("addProduct", "product", product);
	}

	@RequestMapping(value = "newProduct", method = RequestMethod.POST)
	public ModelAndView setProductObject(Product product) {
		productDAO.add(product);
		return new ModelAndView("home");
	}

	@RequestMapping(value = "viewProducts", method = RequestMethod.GET)
	public ModelAndView getProducts() {
		List<Product> list = productDAO.get();
		return new ModelAndView("viewProducts", "list", list);
	}
}
