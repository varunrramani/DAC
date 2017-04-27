package servlets;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.hibernate.Session;
import org.hibernate.Transaction;

import models.Product;
import utils.HibernateUtil;

/**
 * Servlet implementation class ServletAddProduct
 */
@WebServlet("/ServletAddProduct")
public class ServletAddProduct extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		String name = request.getParameter("name").trim();
		Integer price = Integer.parseInt(request.getParameter("price").trim());
		Integer quantity = Integer.parseInt(request.getParameter("quantity").trim());

		Session session = HibernateUtil.getSessionFactory().openSession();
		Transaction transaction;

		try {
			transaction = session.beginTransaction();
			Product product = new Product(quantity, price, name);
			session.save(product);
			transaction.commit();
			System.out.println("Product Added");
			ServletContext context = getServletContext();
			RequestDispatcher rd = context.getRequestDispatcher("/Home.jsp");
			rd.forward(request, response);
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			session.close();
		}

	}

}
