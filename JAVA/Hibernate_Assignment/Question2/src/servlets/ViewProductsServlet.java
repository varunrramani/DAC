package servlets;

import java.io.IOException;
import java.util.List;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.hibernate.Query;
import org.hibernate.Session;
import org.hibernate.Transaction;

import models.Product;
import utils.HibernateUtil;

/**
 * Servlet implementation class ViewProductsServlet
 */
@WebServlet("/ViewProductsServlet")
public class ViewProductsServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		Session session = HibernateUtil.getSessionFactory().openSession();
		Transaction transaction;
		try {
			List<Product> products;
			Query query = session.createQuery("from Product");
			products = query.list();
			request.setAttribute("products", products);
			ServletContext context = getServletContext();
			RequestDispatcher rd = context.getRequestDispatcher("/ViewProducts.jsp");
			rd.forward(request, response);
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			session.close();
		}
	}

}
