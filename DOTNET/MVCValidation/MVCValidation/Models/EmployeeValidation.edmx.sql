
-- --------------------------------------------------
-- Entity Designer DDL Script for SQL Server 2005, 2008, 2012 and Azure
-- --------------------------------------------------
-- Date Created: 06/23/2017 16:15:53
-- Generated from EDMX file: C:\Users\Varun Ramani\CDAC_files\DOTNET\MVCValidation\MVCValidation\Models\EmployeeValidation.edmx
-- --------------------------------------------------

SET QUOTED_IDENTIFIER OFF;
GO
USE [EmployeeValidation];
GO
IF SCHEMA_ID(N'dbo') IS NULL EXECUTE(N'CREATE SCHEMA [dbo]');
GO

-- --------------------------------------------------
-- Dropping existing FOREIGN KEY constraints
-- --------------------------------------------------


-- --------------------------------------------------
-- Dropping existing tables
-- --------------------------------------------------


-- --------------------------------------------------
-- Creating all tables
-- --------------------------------------------------

-- Creating table 'EmployeeValidations'
CREATE TABLE [dbo].[EmployeeValidations] (
    [Id] int IDENTITY(1,1) NOT NULL,
    [FirstName] nvarchar(max)  NOT NULL,
    [Salary] nvarchar(max)  NOT NULL,
    [HireDate] nvarchar(max)  NOT NULL,
    [Email] nvarchar(max)  NOT NULL,
    [Website] nvarchar(max)  NOT NULL,
    [Age] nvarchar(max)  NOT NULL,
    [Mobile] nvarchar(max)  NOT NULL
);
GO

-- --------------------------------------------------
-- Creating all PRIMARY KEY constraints
-- --------------------------------------------------

-- Creating primary key on [Id] in table 'EmployeeValidations'
ALTER TABLE [dbo].[EmployeeValidations]
ADD CONSTRAINT [PK_EmployeeValidations]
    PRIMARY KEY CLUSTERED ([Id] ASC);
GO

-- --------------------------------------------------
-- Creating all FOREIGN KEY constraints
-- --------------------------------------------------

-- --------------------------------------------------
-- Script has ended
-- --------------------------------------------------