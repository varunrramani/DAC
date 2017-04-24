
import java.io.IOException;
import java.sql.Connection;
import java.sql.DatabaseMetaData;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletConfig;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class StudentServ
 */

/*
 * 3) create a table in MySQL "student" with rollno int name varchar age int
 * address varchar
 * 
 * now create "Student.jsp" accept rollno name age address
 * 
 * on submit control should go to "StudentServ".
 * 
 * "StudentServ" will get the request parameters and add a record in database.
 * 
 * this servlet also will query to the database "select rollno from student"
 * rollno retrieved from database will be added inside ArrayList. ArrayList will
 * be stored inside "request" attribute and finally servlet will forward the
 * request to "Report.jsp"
 * 
 * "Report.jsp" will retrieve ArrayList from request attribute and display
 * rollnos.
 */

@WebServlet("/StudentServ")
public class StudentServ extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * Default constructor.
	 */
	public StudentServ() {
		// TODO Auto-generated constructor stub
	}

	Connection con;

	@Override
	public void init() throws ServletException {
		String connectionString = "jdbc:mysql://localhost:3306/mydb";
		try {
			Class.forName("com.mysql.jdbc.Driver");
			con = DriverManager.getConnection(connectionString, "root", "root");
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		String name = request.getParameter("name");
		String address = request.getParameter("address");
		int rollno = Integer.parseInt(request.getParameter("rollno"));
		int age = Integer.parseInt(request.getParameter("age"));

		try {
			PreparedStatement pst = con.prepareStatement("INSERT INTO STUDENT VALUES(?, ?, ?, ?)");
			pst.setInt(1, rollno);
			pst.setString(2, name);
			pst.setInt(3, age);
			pst.setString(4, address);
			int val = pst.executeUpdate();
			if (val > 0) {
				PreparedStatement query = con.prepareStatement("SELECT ROLLNO FROM STUDENT");
				ResultSet rs = query.executeQuery();
				List<Integer> list = new ArrayList<>();

				while (rs.next()) {
					Integer rollNo = rs.getInt("rollno");
					list.add(rollNo);
				}

				request.setAttribute("rollno", list);
				ServletContext context = getServletContext();

				RequestDispatcher rd = context.getRequestDispatcher("/Report.jsp");
				rd.forward(request, response);
			}
		} catch (SQLException e) {
			e.printStackTrace();
		}
	}

}
