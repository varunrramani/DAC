using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Serialization;
using System.Web;

namespace LabTestWCFService
{
    [DataContract]
    public class Product
    {
        [DataMember]
        public int ProductId { get; set; }

        [DataMember]
        public String ProductName { get; set; }

        [DataMember]
        public String CategoryName { get; set; }

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
            get { return productsList; }
        }

        private List<Product> productsList = new List<Product>()
        {
            new Product() {ProductId = 1, ProductName = "ABC", CategoryName = "ABC", Price = 100 },
            new Product() {ProductId = 2, ProductName = "MNO", CategoryName = "DEF", Price = 200 },
            new Product() {ProductId = 3, ProductName = "XYZ", CategoryName = "ABC", Price = 300 },
            new Product() {ProductId = 4, ProductName = "PQR", CategoryName = "DEF", Price = 400 },
            new Product() {ProductId = 5, ProductName = "IJK", CategoryName = "ABC", Price = 500 }
        };
    }
}