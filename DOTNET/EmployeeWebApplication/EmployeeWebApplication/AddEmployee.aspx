<%@ Page Title="" Language="C#" MasterPageFile="~/Employees.Master" AutoEventWireup="true" CodeBehind="AddEmployee.aspx.cs" Inherits="EmployeeWebApplication.AddEmployee" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    <asp:Label ID="lblId" Text="Id: " runat="server" />
    <asp:TextBox ID="txtEmployeeId" runat="server" /><br />
    <br />

    <asp:Label ID="lblName" Text="Name: " runat="server" />
    <asp:TextBox ID="txtEmployeeName" runat="server" /><br />
    <br />

    <asp:Label ID="lblSalary" Text="Salary: " runat="server" />
    <asp:TextBox ID="txtEmployeeSalary" runat="server" />
    <br />
    <br />
    <asp:Button ID="btnAddEmployee" Text="Add Employee" runat="server" OnClick="btnAddEmployee_Click" />

    <asp:RequiredFieldValidator ControlToValidate="txtEmployeeId" ErrorMessage="Employee ID is Required" ForeColor="Red" runat="server" />
    <asp:RequiredFieldValidator ControlToValidate="txtEmployeeName" ErrorMessage="Employee Name is Required" ForeColor="Red" runat="server" />
    <asp:RequiredFieldValidator ControlToValidate="txtEmployeeSalary" ErrorMessage="Employee Salary is Required" ForeColor="Red" runat="server" />
    <asp:RegularExpressionValidator ControlToValidate="txtEmployeeSalary" ErrorMessage="Salary should be a number" runat="server" ValidationExpression="^[0-9]*$" ForeColor="Red" />
</asp:Content>
