<%-- 
    Document   : Sample
    Created on : Nov 10, 2020, 2:47:52 PM
    Author     : dac_2
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>

<%
    String msg = "Welcome to DAC"; 
    String projectTitle = "LMS";
%>


<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title><%=projectTitle%> </title>        
        <script>
            var msg = '<%=msg%>';
            function loadThis()
            {                
                alert(msg);
            }
        </script>        
    </head>
    <body onload="loadThis()">
        <h1><%out.print(msg); %></h1>
        
        <% 
            String name = request.getParameter("name");
            if (name == null){ 
        %>      
        <h3>Please supply a name</h3>
        <% 
            }
            else{
        %> 
        <h3>Hello <%= name %></h3>
        <% } %>        
    </body>
</html>
