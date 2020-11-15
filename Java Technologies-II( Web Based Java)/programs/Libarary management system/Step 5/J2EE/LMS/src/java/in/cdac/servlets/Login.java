/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package in.cdac.servlets;

import in.cdac.DB.DBConnection;
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 *
 * @author dac_2
 */
public class Login extends HttpServlet {

    String useremail = null;
    String userPassword = null;
    ServletContext scontext = null;
    String projectName = null;
    HttpSession session = null;

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        PrintWriter out = response.getWriter();
        Cookie ck = null;
        useremail = request.getParameter("useremail");
        userPassword = request.getParameter("userpassword");

        scontext = request.getServletContext();
        projectName = scontext.getInitParameter("ProjectName");

        if (useremail == null || userPassword == null) {
            out.print("Your user credentials cannot be empty");
        } else {
            boolean status = false;
            int role = 0;
            RequestDispatcher dispatch = null;
            DBConnection dbcon = new DBConnection();
            dbcon.createDBConnection();
            status = dbcon.verifyuser(useremail, userPassword);
            if (status) {
                role = dbcon.getUserRole(useremail);
                if (role == 1) {
                    session = request.getSession(true);
                    session.setAttribute("userid", useremail);
                    session.setAttribute("role", role);
                    dispatch = request.getRequestDispatcher("WelcomeAdmin");
                    dispatch.forward(request, response);
                } else if (role == 2) {
                    session = request.getSession(true);
                    session.setAttribute("userid", useremail);
                    session.setAttribute("role", role);
                    dispatch = request.getRequestDispatcher("WelcomeStudent");
                    dispatch.forward(request, response);
                } else {
                    out.println("Invalid role.. Please try with the valid user credentials.");
                }
            } else 
            {
                request.setAttribute("msg", "Invalid User details. Please try again");
                dispatch = request.getRequestDispatcher("jsp/usermanagement/Login.jsp");
                dispatch.forward(request, response);                
                //out.println("Invalid login.. Please try with the valid user credentials.");
            }

//            
//            if(useremail.equals("admin@cdac.in") 
//                    && userPassword.equals("123456"))
//            {                
//                session = request.getSession(true);
//                session.setAttribute("userid", useremail);
//                
//                //Using Cookies
//                /* 
//                ck = new Cookie("userid", useremail);
//                response.addCookie(ck);
//                */
//                // Hidden Form Fields
////                out.println("<html>");
////                out.println("<head>");
////                out.println("<script>");
////                out.println("function submitform(){");
////                out.println("document.getElementById('form1').submit();");
////                out.println("}");
////                out.println("</script>");
////                out.println("</head>");
////                out.println("<body onload='submitform()'>");
////                out.println("<form id='form1' action='WelcomeAdmin' method='post'>");
////                out.println("<input type='hidden' name='user_id' value='"+useremail+"'/>");
////                out.println("</form>");
////                out.println("</body>");
////                out.println("</html>");
//                               
//                RequestDispatcher dispatch = request.getRequestDispatcher("WelcomeAdmin?user_id="+useremail);
//                dispatch.forward(request, response);
//            }
//            else{
//                
//                ck = new Cookie("userid", useremail);
//                response.addCookie(ck);
//                
//                RequestDispatcher dispatch = request.getRequestDispatcher("WelcomeStudent");
//                dispatch.forward(request, response);
//            }
        }
    }

    @Override
    public String getServletInfo() {
        return "Short description";
    }// </editor-fold>

}
