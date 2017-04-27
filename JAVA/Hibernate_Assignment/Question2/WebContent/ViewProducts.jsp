<%@ taglib prefix='c' uri='http://java.sun.com/jsp/jstl/core'%>
<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<title>Products</title>
</head>
<body>
	<label>Added Products</label>
	<br />
	<c:forEach var="i" items="${products}">
		${i} <br />
	</c:forEach>
	<br />
	<a href="Home.jsp">Home</a>
</body>
</html>