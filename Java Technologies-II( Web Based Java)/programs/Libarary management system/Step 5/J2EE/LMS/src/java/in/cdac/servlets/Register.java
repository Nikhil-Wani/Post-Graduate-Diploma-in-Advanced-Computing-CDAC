/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package in.cdac.servlets;

import in.cdac.DB.DBConnection;
import in.cdac.utils.Validations;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
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
    ArrayList wrongFields = null;
    
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException 
    {
        PrintWriter out = response.getWriter();
        RequestDispatcher dispatchMe = null;
        boolean status = false;
        
        
        wrongFields = new ArrayList<Integer>();
        userName = request.getParameter("username");
        userEmail = request.getParameter("useremail");
        userPassword = request.getParameter("userpassword");
        userMobile = request.getParameter("usermobile");
        interstedCategories = request.getParameterValues("categoryType");        
        validateFormFields();     
        
        if(wrongFields.size() == 0)
        {
            StringBuilder categoryNames = new StringBuilder();
            DBConnection dbcon = new DBConnection();
            dbcon.createDBConnection();            
            for(String s : interstedCategories){               
               categoryNames.append(s);
            }
            status = dbcon.saveUserDetails(userEmail, userPassword, userName, userMobile, categoryNames.toString());
            if(status){
                dispatchMe = request.getRequestDispatcher("Welcome");
                dispatchMe.forward(request, response);
            } else
            {
                out.println("Problem occurred while registering your details..Please contact your admin.");
            }
        } 
        else
        { // if any user registration details are invalid     
           request.setAttribute("WrongFields", wrongFields);
           dispatchMe = request.getRequestDispatcher("jsp/usermanagement/Register.jsp");
           dispatchMe.forward(request, response);
        }

//        out.println("Registration is successful");
//        out.println("Welcome " + userName);
//        out.println("You are interested in the below categories..");
//        for (int i = 0; i < interstedCategories.length; i++) {
//            out.println("--" + interstedCategories[i]);
//        }
    }

    
    public void validateFormFields()
    {
        boolean validationStatus = false;
        validator = new Validations(); 
        
        validationStatus = validator.validateUserName(userName);
        if(!validationStatus){
            wrongFields.add(1);
        }
        
        validationStatus = validator.validateEmail(userEmail);
        if (!validationStatus){
            wrongFields.add(2);
        }
        
        validationStatus = validator.validatepassword(userPassword);
        if (!validationStatus){
            wrongFields.add(3);
        }
        
        validationStatus = validator.validateMobile(userMobile);
        if (!validationStatus){
            wrongFields.add(4);
        }        
    }   
    
    
    @Override
    public String getServletInfo() {
        return "User Registration serlvet";
    }// </editor-fold>

}
