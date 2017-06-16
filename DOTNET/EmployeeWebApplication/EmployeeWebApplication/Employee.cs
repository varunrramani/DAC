using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace EmployeeWebApplication
{
    public class Employee
    {
        public int ID { get; set; }
        public String Name { get; set; }
        public Double Salary { get; set; }

        public Employee (int id, String name, Double salary)
        {
            ID = id;
            Name = name;
            Salary = salary;
        }
    }
}