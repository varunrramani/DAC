package servlets;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import models.Advice;

/**
 * Servlet implementation class GetAdviceServlet
 */
@WebServlet("/GetAdviceServlet")
public class GetAdviceServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		String qualification = request.getParameter("qualification");
		
		Advice advice = new Advice();
		
		String adviceToGive = advice.getAdvice(qualification);
		
		ServletContext context = getServletContext();
		request.setAttribute("advice", adviceToGive);
		RequestDispatcher rd = context.getRequestDispatcher("/ShowAdvice.jsp");
		rd.forward(request, response);
	}

}
