/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package in.cdac.servlets.Admin;

import in.cdac.DB.DBConnection;
import in.cdac.utils.Validations;
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
@WebServlet(name = "AddBook", urlPatterns = {"/AddBook"})
public class AddBook extends HttpServlet {
    
    HttpSession session =null;
    String userid = null;
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        PrintWriter out = response.getWriter();
        session =  request.getSession(false);
        RequestDispatcher dispatch = null;
        
        if(session == null){
            out.println("Your Session is expired.");
        }
        else{
            userid = (String)session.getAttribute("userid");
            dispatch = request.getRequestDispatcher("jsp/bookmanagement/AddBook.jsp");
            dispatch.include(request, response);
        }
                
//        Cookie ck[] = request.getCookies();
//        out.println(ck[0].getName()+"--"+ck[0].getValue());
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        String bookname = null;
        String author = null;
        String publisher = null;
        int yearpublished = 0;
        boolean status = false;
        RequestDispatcher dispatch = null;
        Validations validate = new Validations();
        bookname = request.getParameter("bookname");
        author = request.getParameter("author");
        publisher = request.getParameter("publisher");
        yearpublished = Integer.parseInt(request.getParameter("yearpublished"));
        
        if(validate.validateUserName(bookname) && 
                validate.validateUserName(author) &&
                validate.validateUserName(publisher) && yearpublished != 0)
        {
            DBConnection dbcon = new DBConnection();
            dbcon.createDBConnection();
            //status = dbcon.saveBookDetails(bookname, author, publisher, yearpublished);
            if(status){
                request.setAttribute("msg", "Book details were added successfully.");                
            } else {
                request.setAttribute("msg", "Error occurred while saving the book details. Please contact your admin.");   
            }
            dispatch = request.getRequestDispatcher("jsp/bookmanagement/AddBook.jsp");
            dispatch.forward(request, response);
        }
    }
    
    
    @Override
    public String getServletInfo() {
        return "Short description";
    }// </editor-fold>

}
