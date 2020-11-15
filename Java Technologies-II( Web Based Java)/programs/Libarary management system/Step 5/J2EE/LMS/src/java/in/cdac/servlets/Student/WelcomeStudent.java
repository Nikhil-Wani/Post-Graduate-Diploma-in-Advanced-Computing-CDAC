/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package in.cdac.servlets.Student;

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 *
 * @author dac_2
 */
@WebServlet(name = "WelcomeStudent", urlPatterns = {"/WelcomeStudent"})
public class WelcomeStudent extends HttpServlet {
    
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        HttpSession session = null;
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
           dispatch = request.getRequestDispatcher("/jsp/usermanagement/WelcomeStudent.jsp");
           dispatch.forward(request, response);
        }
    }

    /**
     * Returns a short description of the servlet.
     *
     * @return a String containing servlet description
     */
    @Override
    public String getServletInfo() {
        return "Short description";
    }// </editor-fold>

}
