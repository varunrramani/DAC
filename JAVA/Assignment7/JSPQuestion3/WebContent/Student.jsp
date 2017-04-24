<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<title>Student Details</title>
</head>
<body>

	<form action="StudentServ" method="POST">
		Roll No: <input name="rollno" type="text"><br />
		Name: <input name="name" type="text" /><br />
		Age: <input name="age" type="text" /><br />
		Address: <input name="address" type="text" /><br />
		<input type="submit" value="Submit" />		
	</form>
</body>
</html>