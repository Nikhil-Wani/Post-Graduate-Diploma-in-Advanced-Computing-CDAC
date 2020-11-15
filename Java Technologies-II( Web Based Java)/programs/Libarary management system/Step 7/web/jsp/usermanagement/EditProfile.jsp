<%@page import="in.cdac.beans.Student"%>
<%@page import="in.cdac.DB.DBConnection"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<%
    String email = null;
    Student std = null;
    String msg = "";
    email = (String)session.getAttribute("userid");
    DBConnection dbcon = new DBConnection();
    dbcon.createDBConnection();
    std = dbcon.getUserDetails(email);
    
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
        <%@include file="../../jsp/student/StudentMenu.jsp"%>        
        <br>        
        <hr>
    <center>  
        <form action="<%=request.getContextPath()%>/UpdateProfile" method="post">
            <span style="color:red"><%=msg%></span>
            <br>
            Email: <input type="email" id="useremail" disabled="disabled"
                          name="useremail" value="<%=std.getUseremail()%>"/><br>            
            User Name: <input type="text" id="username" 
                              name="username" maxlength="30" value="<%=std.getUsername()%>"/><br>            
            Mobile: <input type="text" id="usermobile" 
                           name="usermobile" maxlength="10" value="<%=std.getUsermobile()%>"/>            
            <input type="submit" value="Update"/>
        </form>
    </center>
    <br>
    <hr>
    <%@include file="../../jsp/common/Footer.jsp"%>
</body>
</html>