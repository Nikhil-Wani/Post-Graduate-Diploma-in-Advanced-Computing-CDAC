import javax.servlet.*;
import javax.servlet.http.*;
import java.io.PrintWriter;
import java.io.IOException;

public class Register extends HttpServlet{
	
	String userName = null;
	String userEmail = null;
	String userPassword = null;
	String userMobile  = null;
	
	public void init() throws ServletException{
		System.out.println("Hi.. I am init Method");
	}
	
	
	public void doPost(HttpServletRequest request, HttpServletResponse response)
	throws ServletException, IOException 	
	{
		PrintWriter out = response.getWriter();
		
		userName = request.getParameter("username");
		userEmail = request.getParameter("useremail");
		userPassword = request.getParameter("userpassword");
		userMobile = request.getParameter("usermobile");
		
		System.out.println("userName :"+userName);
		System.out.println("userEmail :"+userEmail);
		System.out.println("userPassword :"+userPassword);
		System.out.println("userMobile :"+userMobile);
		
		out.println("Registration is successful");
		out.println("Welcome "+userName);
		
		//System.out.println("Hello Servlet");
	}
}