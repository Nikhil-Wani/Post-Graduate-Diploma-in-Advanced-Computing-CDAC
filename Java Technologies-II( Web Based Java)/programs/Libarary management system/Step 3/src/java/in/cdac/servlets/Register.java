/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package in.cdac.servlets;

import in.cdac.utils.Validations;
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 *
 * @author dac_2
 */
public class Register extends HttpServlet {
    
    String userName = null;
    String userEmail = null;
    String userPassword = null;
    String userMobile = null;
    String[] interstedCategories = null;
    Validations validator = null;
    
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException 
    {
        PrintWriter out = response.getWriter();
        RequestDispatcher dispatchMe = null;
        userName = request.getParameter("username");
        userEmail = request.getParameter("useremail");
        userPassword = request.getParameter("userpassword");
        userMobile = request.getParameter("usermobile");
        interstedCategories = request.getParameterValues("categoryType");
  
        validator = new Validations();
        if(validator.validateUserName(userName) 
                && validator.validateEmail(userEmail)
                && validator.validatepassword(userPassword)
                && validator.validateMobile(userMobile))
        {
            dispatchMe = request.getRequestDispatcher("html/Welcome.html");
            dispatchMe.forward(request, response);
        } 
        else{
            response.sendRedirect("html/InvalidDetails.html");
//            dispatchMe = request.getRequestDispatcher("html/InvalidDetails.html");
//            dispatchMe.include(request, response);
        }

//        out.println("Registration is successful");
//        out.println("Welcome " + userName);
//        out.println("You are interested in the below categories..");
//        for (int i = 0; i < interstedCategories.length; i++) {
//            out.println("--" + interstedCategories[i]);
//        }
    }

    @Override
    public String getServletInfo() {
        return "User Registration serlvet";
    }// </editor-fold>

}
