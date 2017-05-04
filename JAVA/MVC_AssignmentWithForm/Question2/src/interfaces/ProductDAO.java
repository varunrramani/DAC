package interfaces;

import java.util.List;

import models.Product;

/**
 * @author Varun Ramani
 *
 */
public interface ProductDAO {
	void add(Product product);
	List<Product> get();
}
