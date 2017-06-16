<%@ Page Title="" Language="C#" MasterPageFile="~/Employees.Master" AutoEventWireup="true" CodeBehind="DisplayEmployees.aspx.cs" Inherits="EmployeeWebApplication.DisplayEmployees" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    <asp:GridView ID="gvEmployees" runat="server" />
</asp:Content>
