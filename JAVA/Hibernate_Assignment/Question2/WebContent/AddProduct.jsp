<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<title>Add Product</title>
</head>
<body>
	<form action="ServletAddProduct" method="POST">
		Product Name:&nbsp;<input type="text" name="name" /><br />
		Quantity:&nbsp;<input type="text" name="quantity" /><br />
		Price:&nbsp;<input type="text" name="price" /><br />
		<input type="submit" value="Add Product" />
	</form>
</body>
</html>