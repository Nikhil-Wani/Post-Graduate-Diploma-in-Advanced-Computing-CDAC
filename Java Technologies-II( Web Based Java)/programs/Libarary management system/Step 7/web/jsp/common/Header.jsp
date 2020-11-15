<%@page contentType="text/html" pageEncoding="UTF-8"%>

<div style="float:right">
    <a href="<%=request.getContextPath()%>/Home.jsp?lang=en">English</a> |    
    <a href="<%=request.getContextPath()%>/Home.jsp?lang=hi">हिंदी</a> |  
    <a href="<%=request.getContextPath()%>/Home.jsp?lang=te">తెలుగు</a> | 
</div>
<br><br>
<div style="float:right">
    <a href="<%=request.getContextPath()%>/Home.jsp"><%=bundle.getString("home")%></a> |    
    <a href="<%=request.getContextPath()%>/jsp/usermanagement/Register.jsp"><%=bundle.getString("register")%></a> |
    <a href="<%=request.getContextPath()%>/jsp/usermanagement/Login.jsp"><%=bundle.getString("login")%></a> |
    <a href="<%=request.getContextPath()%>/jsp/usermanagement/ContactUs.jsp"><%=bundle.getString("contact_us")%></a> |
</div>