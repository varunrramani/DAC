using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Web;

namespace WCFServiceLogin
{
    public class Repository : IRepository
    {

        private SqlConnection getConnection()
        {
            SqlConnection conn = new SqlConnection();
            String strConnectionString = ConfigurationManager.ConnectionStrings["LogConnectionString"].ConnectionString;
            conn.ConnectionString = strConnectionString;
            return conn;
        }

        public List<Log> Display()
        {
            using(SqlConnection conn = getConnection())
            {
                conn.Open();
                SqlCommand cmd = new SqlCommand("SELECT * FROM LOG");
                cmd.Connection = conn;
                SqlDataReader reader = cmd.ExecuteReader();
                List<Log> logs = new List<Log>();
                while (reader.Read())
                {
                    Log log = new Log();
                    log.Id = Convert.ToInt32(reader["Id"]);
                    log.Password = (reader["password"]).ToString();
                    logs.Add(log);
                }
                
                return logs;
            }
        }

        public bool InsertMyLog(String Id, string Password)
        {
            using (SqlConnection conn = getConnection())
            {
                conn.Open();
                SqlCommand cmd = new SqlCommand("INSERT INTO LOG(Id, Password) VALUES(@ID, @PASSWORD)");
                cmd.Parameters.AddWithValue("@ID", SqlDbType.Int).Value = Id;
                cmd.Parameters.AddWithValue("@PASSWORD", SqlDbType.NVarChar).Value = Password;
                cmd.Connection = conn;
                int a = cmd.ExecuteNonQuery();
                if (a != 0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
}