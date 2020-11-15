<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<%
  String username = null;
  username = (String) session.getAttribute("name");
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
        <h1>
            Welcome <%=username%>
        </h1>
    </center>
    <br>
    <hr>
    <%@include file="../../jsp/common/Footer.jsp"%>
</body>
</html>