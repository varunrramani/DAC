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

import utils.HibernateUtil;

/**
 * Servlet implementation class DeleteCourseServlet
 */
@WebServlet("/DeleteCourseServlet")
public class DeleteCourseServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		Integer id = Integer.parseInt(request.getParameter("id"));
		System.out.println("ID: " + id);

		Session session = HibernateUtil.getSessionFactory().openSession();
		Transaction transaction;
		transaction = session.beginTransaction();
		try {
			Query selectModuleQuery = session
					.createSQLQuery("select modules_id from Course_Module where course_id=:id");
			selectModuleQuery.setInteger("id", id);
			List<Integer> modulesIdList = selectModuleQuery.list();
			Query moduleQuery = session.createSQLQuery("delete from Course_Module where Course_id=:id");
			moduleQuery.setInteger("id", id);
			moduleQuery.executeUpdate();
			Query moduleDeleteQuery = session.createSQLQuery("delete from Module where id in (:ids)");
			moduleDeleteQuery.setParameterList("ids", modulesIdList);
			moduleDeleteQuery.executeUpdate();
			Query query = session.createQuery("delete from Course where id = :id");
			query.setInteger("id", id);
			query.executeUpdate();
			transaction.commit();
			ServletContext context = getServletContext();
			RequestDispatcher rd = context.getRequestDispatcher("/ShowCoursesServlet");
			rd.forward(request, response);
		} catch (Exception e) {
			e.printStackTrace();
			transaction.rollback();
		}
	}

}
