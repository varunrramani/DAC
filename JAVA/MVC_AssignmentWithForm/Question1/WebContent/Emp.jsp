<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core"%>
<%@ taglib prefix="form" uri="http://www.springframework.org/tags/form"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<title>Add Employee</title>
</head>
<body>
	<h1>Add new Employee</h1>
	<form:form method="POST" commandName="employee">
		<form:input path="name" placeholder="Name" />
		<br />
		<br />
		<form:input path="age" placeholder="Age" />
		<br />
		<br />
		<form:input path="address" placeholder="Address" />
		<br />
		<br />
		<form:input path="designation" placeholder="Designation" />
		<br />
		<br />
		<input type="submit" value="Add Employee" />
	</form:form>

</body>
</html>