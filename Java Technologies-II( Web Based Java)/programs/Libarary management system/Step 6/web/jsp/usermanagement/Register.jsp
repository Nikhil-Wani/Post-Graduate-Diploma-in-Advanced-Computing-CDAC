<%@page import="java.util.ArrayList"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>

<%
  ArrayList wrongFields = null;
  String username = "";
  String usermobile = "";
  String msg1 = "";
  String msg2 = "";
  String msg3 = "";
  String msg4 = "";
  if(request.getAttribute("WrongFields") != null){
      wrongFields = (ArrayList<Integer>)request.getAttribute("WrongFields");
      username = request.getParameter("username");
      usermobile = request.getParameter("usermobile");
      if(wrongFields.contains(1)){
          msg1 = "Invalid User Name";
      }
      if(wrongFields.contains(4)){          
          msg4 = "Invalid MobileNumber";
      }
  }
%>

<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>LMS</title>
    </head>
    <body>
        <%@include file="../common/Header.jsp"%>        
        <br>
        <hr>              
    <center>        
        <form action="<%=request.getContextPath()%>/UserRegistration" method="post">
            User Name: <input type="text" id="username" name="username" maxlength="30" value="<%=username%>"/>
             <span><%=msg1%></span> 
            <br>
            Email: <input type="email" id="useremail" name="useremail"/><br>
             <span><%=msg2%></span> 
            Password: <input type="password" id="userpassword" name="userpassword"/><br>
             <span><%=msg3%></span> 
            Confirm Password: <input type="password" id="confirmpassword" name="confirmpassword"/><br>
            Mobile: <input type="text" id="usermobile" name="usermobile" maxlength="10" value="<%=usermobile%>"/>
            <span style="color:red"><%=msg4%></span>                
            <br>
            Please select your interested Categories?
            <input type="checkbox" name="categoryType" value="ECE">ECE
            <input type="checkbox" name="categoryType" value="EEE">EEE
            <input type="checkbox" name="categoryType" value="CSE">CSE
            <input type="checkbox" name="categoryType" value="MEC">MEC
            <br><br>

            <input type="submit" value="Register" onclick="return ValidationALLFields()"/><br><br>
            <a href="Login.html">Already Registered?</a>
        </form>
    </center>
    <br>
    <hr>
    <%@include file="../common/Footer.jsp"%>
</body>
</html>
