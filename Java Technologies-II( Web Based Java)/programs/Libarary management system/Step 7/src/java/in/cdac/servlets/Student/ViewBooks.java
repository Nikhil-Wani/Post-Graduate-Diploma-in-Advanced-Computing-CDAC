/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package in.cdac.servlets.Student;

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 *
 * @author dac_2
 */
@WebServlet(name = "ViewBooks", urlPatterns = {"/ViewBooks"})
public class ViewBooks extends HttpServlet {
    
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        PrintWriter out = response.getWriter();
        Cookie ck[] = request.getCookies();
        out.println(ck[0].getName()+"--"+ck[0].getValue());
    }

   
    @Override
    public String getServletInfo() {
        return "Short description";
    }// </editor-fold>

}
