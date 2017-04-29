package servlets;

import java.io.IOException;
import java.util.HashSet;
import java.util.Set;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.hibernate.Session;
import org.hibernate.Transaction;

import models.Course;
import models.Module;
import utils.HibernateUtil;

/**
 * Servlet implementation class AddCourseServlet
 */
@WebServlet("/AddCourseServlet")
public class AddCourseServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		String courseName = request.getParameter("course");
		String module1 = request.getParameter("module1");
		String module2 = request.getParameter("module2");
		String module3 = request.getParameter("module3");
		
		Module m1 = new Module(module1);
		Module m2 = new Module(module2);
		Module m3 = new Module(module3);
		
		Set<Module> set = new HashSet<>();
		set.add(m1);
		set.add(m2);
		set.add(m3);
		
		Course course = new Course(courseName, set);
		
		Session session = HibernateUtil.getSessionFactory().openSession();
		Transaction transaction;
		try {
			transaction = session.beginTransaction();
			session.save(course);
			transaction.commit();
			System.out.println("Done Adding Course");
			ServletContext context = getServletContext();
			RequestDispatcher rd = context.getRequestDispatcher("/Form.jsp");
			rd.forward(request, response);
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
