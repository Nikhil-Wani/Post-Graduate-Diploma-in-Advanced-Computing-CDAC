/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package in.cdac.servlets.Admin;

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.RequestDispatcher;
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
public class WelcomeAdmin extends HttpServlet {
    
    HttpSession session = null;
    
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        PrintWriter out = response.getWriter();
        //Cookie ck[] = request.getCookies();
        RequestDispatcher dispatch = null;
        String userid = null;
        session = request.getSession(false);
        
        if(session == null){
            out.println("Your Session is expired..");
        }
        else{
           userid = (String) session.getAttribute("userid");
           //out.print("Hello "+userid);
           dispatch = request.getRequestDispatcher("/jsp/usermanagement/WelcomeAdmin.jsp");
           dispatch.forward(request, response);
        }
        
        
//        if(ck != null){                           
//            //out.println(ck[0].getName()+"--"+ck[0].getValue());
//            String userid = request.getParameter("user_id");
//            out.println("Hello "+userid);
//            //dispatch = request.getRequestDispatcher("/html/admin/WelcomeAdmin.html");
//            //dispatch.forward(request, response);
//        }
//        else{
//            out.print("You are not an authorized user..");
//        }
    }
    
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        PrintWriter out = response.getWriter(); 
        RequestDispatcher dispatch = null;
        String userid = null;
        session = request.getSession(false);        
        if(session == null){
            out.println("Your Session is expired..");
        }
        else{
           userid = (String) session.getAttribute("userid");          
           dispatch = request.getRequestDispatcher("/html/admin/WelcomeAdmin.html");
           dispatch.forward(request, response);
        }      
    }
    

    @Override
    public String getServletInfo() {
        return "Short description";
    }// </editor-fold>

}
