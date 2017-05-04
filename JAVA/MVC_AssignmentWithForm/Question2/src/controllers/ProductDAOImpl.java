/**
 * 
 */
package controllers;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.orm.hibernate3.HibernateTemplate;
import org.springframework.stereotype.Component;

import interfaces.ProductDAO;
import models.Product;

/**
 * @author Varun Ramani
 *
 */
@Component
public class ProductDAOImpl implements ProductDAO {
	
	@Autowired
	private HibernateTemplate hibernateTemplate;

	@Override
	public void add(Product product) {
		hibernateTemplate.save(product);
	}

	@Override
	public List<Product> get() {
		// TODO Auto-generated method stub
		List<Product> list = hibernateTemplate.find("from Product");
		return list;
	}

}
