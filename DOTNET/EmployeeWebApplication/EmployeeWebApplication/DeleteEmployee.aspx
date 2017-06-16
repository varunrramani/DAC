<%@ Page Title="" Language="C#" MasterPageFile="~/Employees.Master" AutoEventWireup="true" CodeBehind="DeleteEmployee.aspx.cs" Inherits="EmployeeWebApplication.DeleteEmployee" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    <asp:Label Text="ID: " runat="server" />
    <asp:TextBox ID="txtEmployeeId" runat="server" />
    <asp:RequiredFieldValidator ForeColor="Red" ControlToValidate="txtEmployeeId" Display="Dynamic" 
        ErrorMessage="Employee ID required to delete" runat="server" />
    <asp:RegularExpressionValidator ForeColor="Red" ControlToValidate="txtEmployeeId" Display="Dynamic" ValidationExpression="^[0-9]+$" 
        ErrorMessage="Employee ID should be a number" runat="server" />
    <br />
    <br />
    <asp:Button ID="btnDeleteEmployee" runat="server" Text="Delete" OnClick="btnDeleteEmployee_Click" />

</asp:Content>
