<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<title>Add Course</title>
</head>
<body>

	<form method="post" action="AddCourseServlet">
		<label for="course">Enter Course Name: </label> <input name="course" /><br />
		<label for="module1">Module 1: </label> <input name="module1" /><br />
		<label for="module2">Module 2: </label> <input name="module2"><br />
		<label for="module3">Module 3: </label> <input name="module3"><br />
		<input type="submit" value="Add Course" />
	</form>

	<a href="ShowCoursesServlet">Show Courses</a>

</body>
</html>