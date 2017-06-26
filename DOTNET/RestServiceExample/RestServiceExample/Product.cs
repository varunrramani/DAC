using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Serialization;
using System.Web;

namespace RestServiceExample
{
    [DataContract]
    public class Product
    {
        [DataMember]
        public int ProductId { get; set; }
        [DataMember]
        public String Name { get; set; }
        [DataMember]
        public String Category { get; set; }
        [DataMember]
        public int Price { get; set; }
    }

    public partial class Products
    {
        private static readonly Products _instance = new Products();

        private Products() { }

        public static Products Instance
        {
            get { return _instance; }
        }

        public List<Product> ProductList
        {
            get { return products; }
        }

        private List<Product> products = new List<Product>()
        {
            new Product() { ProductId = 1, Name = "Name1", Category = "Category1", Price = 100 },
            new Product() { ProductId = 2, Name = "Name2", Category = "Category2", Price = 101 },
            new Product() { ProductId = 3, Name = "Name3", Category = "Category1", Price = 110 },
            new Product() { ProductId = 4, Name = "Name4", Category = "Category3", Price = 200 }
        };
    }
}