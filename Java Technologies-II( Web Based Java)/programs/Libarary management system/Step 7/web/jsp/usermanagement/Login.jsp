<%@page import="java.util.ResourceBundle"%>
<%@page import="java.util.Locale"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>

<%
  String language = "en";
  String ccode = "US";
  String msg = "";
 if(request.getAttribute("msg") != null){
     msg = (String)request.getAttribute("msg");
 }       
 
  language = (String)session.getAttribute("lang");
  ccode = (String)session.getAttribute("ccode");
  Locale.setDefault(new Locale(language,ccode));
  ResourceBundle bundle = ResourceBundle.getBundle("HomePage");
%>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>LMS</title>
    </head>
    <body>
        <%@include file="../../jsp/common/Header.jsp"%>        
        <br>
        <hr>        
    
    <center>    
        <span style="color:red"><%=msg%></span>
        <form action="<%=request.getContextPath()%>/UserAuthentication" method="post">		
            <%=bundle.getString("email")%>: <input type="email" id="useremail" name="useremail"/>
            <br>
            <%=bundle.getString("password")%>: <input type="password" id="userpassword" name="userpassword"/>
            <br>			
            <input type="submit" value="Login" onclick="return ValidateAllFields()"/>
        </form>
    </center>
    
    <br>
    <hr>
    <%@include file="../../jsp/common/Footer.jsp"%>
</body>
</html>
