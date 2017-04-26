
import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.List;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class Question1
 */
@WebServlet("/Question1")
public class Question1 extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * Default constructor.
	 */
	public Question1() {
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
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		try {
			PreparedStatement pst = con.prepareStatement("SELECT DNAME FROM DEPT");
			ResultSet rs = pst.executeQuery();
			List<String> list = new ArrayList<>();

			while (rs.next()) {
				list.add(rs.getString("dname"));
			}

			request.setAttribute("deptnames", list);
			ServletContext context = getServletContext();
			RequestDispatcher rd = context.getRequestDispatcher("/Dnames.jsp");
			rd.forward(request, response);

		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}
