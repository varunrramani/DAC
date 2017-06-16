<%@ Page Title="" Language="C#" MasterPageFile="~/Employees.Master" AutoEventWireup="true" CodeBehind="DisplayEmployees.aspx.cs" Inherits="EmployeeWebApplication.DisplayEmployees" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
    <style>
        /* the style for the table headers */
        .gridview th {
            font-size: large;
            font-weight: bold;
            color: Navy;
            border: 1px solid black;
            padding: 8px;
        }
        /* the style for the normal table cells */
        .gridview td {
            padding: 8px;
            border: 1px solid black;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    <asp:GridView CssClass="gridview" ID="gvEmployees" runat="server" />
</asp:Content>
