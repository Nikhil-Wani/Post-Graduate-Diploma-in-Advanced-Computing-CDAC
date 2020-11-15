/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package in.cdac.servlets;

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 *
 * @author dac_2
 */
public class Home extends HttpServlet {            
    
    ServletContext scontext = null;
    
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        int vcount = 0;
        scontext = getServletContext();
        PrintWriter out = response.getWriter();
        //for the user request
        if(scontext.getAttribute("visitorcount") == null)
        {
            //for first visitor count is 1
            scontext.setAttribute("visitorcount", 1); 
        }
        else 
        { //from the second visitor onwards
            vcount = (Integer)scontext.getAttribute("visitorcount");
            vcount = vcount + 1;
            scontext.setAttribute("visitorcount", vcount);
        }            
        
        out.print("Visitor Count is "+scontext.getAttribute("visitorcount"));
    }

    @Override
    public String getServletInfo() {
        return "Short description";
    }// </editor-fold>

}
