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
            using (SqlConnection connection = new SqlConnection(connectionString))
            {
                SqlCommand cmd = new SqlCommand();
                cmd.CommandText = "SELECT * FROM EMPLOYEES";
                cmd.Connection = connection;
                SqlDataAdapter adapter = new SqlDataAdapter();
                adapter.SelectCommand = cmd;

                DataSet dataset = new DataSet();
                adapter.Fill(dataset);
                return dataset;
            }

            //return null;
        }

        public int InsertData(Employee employee)
        {
            String connectionString = ConfigurationManager.ConnectionStrings["EmployeeDB"].ConnectionString;
            using (SqlConnection connection = new SqlConnection(connectionString))
            {
                SqlCommand cmd = new SqlCommand();
                cmd.CommandText = "INSERT INTO EMPLOYEES(ID, NAME, SALARY) VALUES(@ID, @NAME, @SALARY)";
                cmd.Parameters.AddWithValue("@ID", SqlDbType.Int).Value = employee.ID;
                cmd.Parameters.AddWithValue("@NAME", SqlDbType.VarChar).Value = employee.Name;
                cmd.Parameters.AddWithValue("@SALARY", SqlDbType.Decimal).Value = employee.Salary;
                cmd.Connection = connection;
                connection.Open();

                int result = cmd.ExecuteNonQuery();
                return result;
            }
            //return 0;
        }

        public int DeleteData(int id)
        {
            String connectionString = ConfigurationManager.ConnectionStrings["EmployeeDB"].ConnectionString;
            using (SqlConnection connection = new SqlConnection(connectionString))
            {
                SqlCommand cmd = new SqlCommand();
                cmd.CommandText = "DELETE FROM EMPLOYEES WHERE ID=@ID";
                cmd.Parameters.AddWithValue("@ID", id);
                cmd.Connection = connection;
                connection.Open();
                int result = cmd.ExecuteNonQuery();
                return result;
            }
            //return 0;
        }
    }
}