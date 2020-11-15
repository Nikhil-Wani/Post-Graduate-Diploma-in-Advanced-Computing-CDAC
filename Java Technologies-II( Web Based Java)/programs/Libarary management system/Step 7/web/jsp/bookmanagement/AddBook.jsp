<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<%
 String msg = "";
 if(request.getAttribute("msg") != null){
     msg = (String)request.getAttribute("msg");
 }       
%>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>LMS</title>
    </head>
    <body>
        <%@include file="../../jsp/admin/AdminMenu.jsp"%>        
        <br>        
        <hr>
    <center>  
        <span style="color:red"><%=msg%></span>
        
        <form action="AddBookWithUpload" method="post" 
              enctype="multipart/form-data">
            Book Name: <input type="text" id="bookname" name="bookname" maxlength="50"/><br>
            Author: <input type="text" id="author" name="author" maxlength="50"/><br>
            Publisher: <input type="text" id="publisher" name="publisher" maxlength="50"/><br>
            Published Year: <input type="number" id="yearpublished" name="yearpublished" max="2020" /><br><br>
            Upload File: <input type="file" id="book1" name="book1"/><br><br>
            <input type="submit" value="Add Book"/>
        </form>
    </center>
    <br>
    <hr>
    <%@include file="../../jsp/common/Footer.jsp"%>
</body>
</html>