/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package in.cdac.servlets;

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletConfig;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 *
 * @author dac_2
 */
public class Welcome extends HttpServlet {
   
    String userName = null;
    ServletConfig sconfig = null;
    ServletContext scontext =null;
    String projectName = null;
    
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        String dbServerName = null;
        PrintWriter out = response.getWriter();          
        sconfig = getServletConfig();
        scontext = getServletContext();
        dbServerName = sconfig.getInitParameter("DBConnector");
        
        projectName = scontext.getInitParameter("ProjectName");
        userName = request.getParameter("username");
        out.println("Welcome to "+projectName);
        out.println("Hi..."+userName);
        out.print("You are using the DB "+dbServerName);               
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
