/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package in.cdac.servlets.Student;

import in.cdac.DB.DBConnection;
import in.cdac.utils.Validations;
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 *
 * @author dac_2
 */
@WebServlet(name = "UpdateProfile", urlPatterns = {"/UpdateProfile"})
public class UpdateProfile extends HttpServlet {
    
    HttpSession session =null;
    
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        String username = null;
        String mobile = null;
        String useremail = null;
        Validations validate = null;
        DBConnection dbcon = null;
        boolean status = false;
        session = request.getSession(false);
        PrintWriter out = response.getWriter();
        if(session == null){
            out.println("Session is expired..");
        } else 
        {            
            validate = new Validations();
            username = request.getParameter("username");
            mobile = request.getParameter("usermobile");
            if(validate.validateUserName(username) 
                    && validate.validateMobile(mobile))
            {
                useremail = (String)session.getAttribute("userid");
                dbcon =  new DBConnection();
                dbcon.createDBConnection();
                status = dbcon.updateUserProfile(useremail, username, mobile);
                if(status){
                    request.setAttribute("msg", "Your profile is updated successfully");                    
                } else{
                    request.setAttribute("msg", "Error occurred while updating your profile.");                    
                }                
            }
            else{
              request.setAttribute("msg", "Please update with valid user details.");                      
            }
            request.getRequestDispatcher("/jsp/usermanagement/EditProfile.jsp").include(request, response);
        }                     
    }

   
    @Override
    public String getServletInfo() {
        return "Short description";
    }// </editor-fold>

}
