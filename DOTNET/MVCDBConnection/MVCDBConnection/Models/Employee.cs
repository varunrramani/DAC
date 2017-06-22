using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations.Schema;
using System.Linq;
using System.Web;

namespace MVCDBConnection.Models
{
    //Table present in the DB with the same name. Connection String specified in Web.config in the root of the project
    [Table("Employees")]
    public class Employee
    {
        [Column("id")]
        public int EmployeeId { get; set; }
        public String Name { get; set; }
        public String Gender { get; set; }
        public String City { get; set; }
    }
}