using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data.SqlClient;
using System.Linq;
using System.Web;

namespace LabTestMVCDisplay.Models
{
    public class Book
    {
        public Int32 Id { get; set; }
        public String Name { get; set; }
        public String Author { get; set; }
        public Double Price { get; set; }
        public Double ISBN { get; set; }
        public int Quantity { get; set; }
    }

    public class BusinessLogic
    {
        SqlConnection GetConnection()
        {
            String connectionString = ConfigurationManager.ConnectionStrings["BooksDB"].ConnectionString;
            SqlConnection connection = new SqlConnection(connectionString);
            return connection;
        }

        public List<Book> GetBooks()
        {
            SqlConnection conn = GetConnection();
            SqlCommand cmd = new SqlCommand("SELECT * FROM BOOKS", conn);
            conn.Open();
            SqlDataReader reader = cmd.ExecuteReader();
            List<Book> bookList = new List<Book>();

            while (reader.Read())
            {
                Book b = new Book();
                b.Id = Convert.ToInt32(reader["Id"]);
                b.Name = (reader["Name"]).ToString();
                b.Author = (reader["Author"]).ToString();
                b.Price = Convert.ToDouble(reader["Price"]);
                b.ISBN = Convert.ToDouble(reader["ISBN"]);
                b.Quantity = Convert.ToInt32(reader["Quantity"]);
                bookList.Add(b);
            }
            conn.Close();
            return bookList;
        }
    }
}