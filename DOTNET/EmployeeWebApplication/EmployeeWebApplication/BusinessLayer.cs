using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Web;

namespace EmployeeWebApplication
{
    public class BusinessLayer
    {
        public DataSet DisplayData()
        {
            String connectionString = ConfigurationManager.ConnectionStrings["EmployeeDB"].ConnectionString;
            SqlConnection connection = new SqlConnection(connectionString);
            return null;
        }
    }
}