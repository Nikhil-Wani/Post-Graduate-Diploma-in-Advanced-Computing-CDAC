<%@page import="in.cdac.beans.Book"%>
<%@page import="java.util.ArrayList"%>
<%@page import="in.cdac.DB.DBConnection"%>
<%
  ArrayList<Book> bklist = null;
  DBConnection dbcon = new DBConnection();
  dbcon.createDBConnection();
  bklist = dbcon.getAllBooks();
  int role = (Integer)session.getAttribute("role");
%>

<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>LMS</title>
    </head>
    <body>
        <% if(role == 1) {%>
        <%@include file="../../jsp/admin/AdminMenu.jsp"%>        
        <% } else if(role == 2) {%>
        <%@include file="../../jsp/student/StudentMenu.jsp"%>        
        <% } %>
        <br>        
        <hr>
    <center>  
        <table style="border-style: solid;" border="1">
            <tr>
                <th>Book Name</th>
                <th>Author</th>
                <th>Publisher</th>
                <th>Year Published</th>
            </tr>
            
        <%        
            for (Book bk : bklist) {
        %>
            <tr>
                <td><%=bk.getBookname()%></td>
                <td><%=bk.getAuthor()%></td>
                <td><%=bk.getPublisher()%></td>
                <td><%=bk.getYearpublished()%></td>
            </tr>
        <% 
            }
        %>
        </table>    
        
    </center>
    <br>
    <hr>
    <%@include file="../../jsp/common/Footer.jsp"%>
</body>
</html>