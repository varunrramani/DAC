<%@ taglib prefix='c' uri='http://java.sun.com/jsp/jstl/core'%>
<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<title>Courses</title>
</head>
<body>
	<c:forEach var="i" items="${courses}">
	${i}
	<script>
		var id = '${i.id}';
		var a = document.createElement('a');
		var linkText = document.createTextNode("Delete Course");
		a.appendChild(linkText);
		a.title = "Delete Course";
		a.href = "DeleteCourseServlet?id=" + id;
		document.body.appendChild(a);
	</script>
		<br />
	</c:forEach>
</body>
</html>