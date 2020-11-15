/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package in.cdac.servlets.Admin;

import in.cdac.DB.DBConnection;
import in.cdac.utils.Validations;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.util.Iterator;
import java.util.List;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import org.apache.commons.fileupload.FileItem;
import org.apache.commons.fileupload.disk.DiskFileItemFactory;
import org.apache.commons.fileupload.servlet.ServletFileUpload;
import org.apache.commons.io.FilenameUtils;

/**
 *
 * @author dac_2
 */
public class AddBookWithUpload extends HttpServlet {

    ServletContext sContext = null;
    String filename = null;
    String bookname = null;
    String author = null;
    String publisher = null;
    int yearpublished = 0;
        
    @Override
    public void init() throws ServletException {
        sContext = getServletContext();
    }

    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException 
    {
        response.setContentType("text/html;charset=UTF-8");
        try (PrintWriter out = response.getWriter()) {
            boolean status = true;
            boolean isMultipart = false;
            Validations validate = null;
            RequestDispatcher dispatch = null;
            try {
                isMultipart = ServletFileUpload.isMultipartContent(request);
                if (isMultipart)
                {
                    fetchExternalFormDetails(request, response);
                    validate = new Validations();
                    if (validate.validateUserName(bookname)
                            && validate.validateUserName(author)
                            && validate.validateUserName(publisher) 
                            && yearpublished != 0) {
                        DBConnection dbcon = new DBConnection();
                        dbcon.createDBConnection();
                        status = dbcon.saveBookDetails(bookname, author, publisher, yearpublished,filename);
                        if (status) {
                            request.setAttribute("msg", "Book details were added successfully.");
                        } else {
                            request.setAttribute("msg", "Error occurred while saving the book details. Please contact your admin.");
                        }
                        dispatch = request.getRequestDispatcher("jsp/bookmanagement/AddBook.jsp");
                        dispatch.forward(request, response);
                    }
                }
            } catch (Exception ee) {
                ee.printStackTrace();
                System.out.println("Error occurred " + ee.toString());
                throw new RuntimeException();
            } finally {
                out.close();
            }
        }
    }

    private void fetchExternalFormDetails(HttpServletRequest request, HttpServletResponse response) {
        FileItem item = null;
        List items = null;        
        try {
            DiskFileItemFactory diskFileItemFactory = new DiskFileItemFactory();
            ServletFileUpload servletFileUpload = new ServletFileUpload(diskFileItemFactory);
            Iterator fileIterator = null;
            items = servletFileUpload.parseRequest(request);
            fileIterator = items.iterator();

            while (fileIterator != null && fileIterator.hasNext())
            {
                item = (FileItem) fileIterator.next();
                if (item != null && item.isFormField()) 
                {
                    if (item.getFieldName().equalsIgnoreCase("bookname")) {
                        bookname = item.getString();
                    } else if (item.getFieldName().equalsIgnoreCase("author")) {
                        author = item.getString();
                    } else if (item.getFieldName().equalsIgnoreCase("publisher")) {
                        publisher = item.getString();
                    } else if (item.getFieldName().equalsIgnoreCase("yearpublished")) {
                        yearpublished = Integer.parseInt(item.getString());
                    }
                }
                if (!item.isFormField()) 
                {
                    String finalPath = null;
                    filename = null;
                    filename = FilenameUtils.getName(item.getName());
                    System.out.println("File uploaded by user is" + filename);
                    {
                        finalPath = sContext.getRealPath("/") + "books" +File.separator + filename;
                        System.out.println("-- file" + finalPath);
                        saveToFile(item.getInputStream(), finalPath);
                    }
                }
                
                
                
            }
        } catch (Exception ee) {
            System.out.println("Error occurred ." + ee.getMessage());
            ee.printStackTrace();
        }
    }

    public boolean saveToFile(InputStream inStream, String target) {
        OutputStream out = null;
        int read = 0;
        byte[] bytes = new byte[1024];
        boolean stats = false;
        try {
            out = new FileOutputStream(new File(target));
            while ((read = inStream.read(bytes)) != -1) {
                out.write(bytes, 0, read);
            }
            out.flush();
            out.close();
            stats = true;
        } catch (IOException ioe) {
            ioe.printStackTrace();
            stats = false;
        }
        return stats;
    }
}
