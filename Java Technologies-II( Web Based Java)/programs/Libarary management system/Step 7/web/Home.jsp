<%-- 
    Document   : Home
    Created on : Nov 9, 2020, 3:57:55 PM
    Author     : dac_2
--%>
<%@page import="java.util.ResourceBundle"%>
<%@page import="java.util.Locale"%>
<!--
    This is a Home Page
-->
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<%
   String language = "en";
   String ccode = "US";   
   ResourceBundle bundle = null;   
   
   if (request.getParameter("lang") != null) 
   {
           language = request.getParameter("lang");
           if (language.equals("en")) {
               ccode = "US";
           } else if (language.equals("hi") || language.equals("te")) {
               ccode = "IN";
           }
   }
   Locale.setDefault(new Locale(language,ccode));
   bundle = ResourceBundle.getBundle("HomePage");   
   session.setAttribute("lang", language);
   session.setAttribute("ccode", ccode);
   
%>

<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title><%=bundle.getString("project_name")%></title>
    </head>
    <body>
        <%@include file="jsp/common/Header.jsp"%>        
        <br> <br>
        <hr>
        <%@include file="jsp/common/Banner.jsp"%>
        <hr>
    <center>        
        <h1>
            <%=bundle.getString("welcome_msg")%>
        </h1>
    </center>
    <br>
    <hr>
    <%@include file="jsp/common/Footer.jsp"%>
</body>
</html>
