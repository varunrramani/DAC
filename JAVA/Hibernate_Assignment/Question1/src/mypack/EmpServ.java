package mypack;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.hibernate.Session;
import org.hibernate.Transaction;

/**
 * Servlet implementation class EmpServ
 */

/*
 * 1)create an Entity
 * 
 * Employee
 * 
 * id - auto generated name address age designation
 * 
 * create a Emp.jsp which will accept name,address,age and designation. click on
 * submit , control should go to EmpServ which will instantiate Employee , using
 * user information and with the help of hibernate, persist it inside database.
 * 
 */
@WebServlet("/EmpServ")
public class EmpServ extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		// TODO Auto-generated method stub
		String name = request.getParameter("name").trim();
		String address = request.getParameter("address").trim();
		Integer age = Integer.parseInt(request.getParameter("age").trim());
		String designation = request.getParameter("designation").trim();
		Employee employee  = new Employee(age, name, address, designation);
		
		Session session = HibernateUtil.getSessionFactory().openSession();
		Transaction transaction = null;
		try {
			transaction = session.beginTransaction();
			session.save(employee);
			transaction.commit();
			System.out.println("Done with employee");
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
