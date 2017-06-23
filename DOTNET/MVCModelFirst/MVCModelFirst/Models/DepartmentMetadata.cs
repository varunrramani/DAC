using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Web;

namespace MVCModelFirst.Models
{
    [MetadataType(typeof(DepartmentMetadata))]
    public partial class Department
    { }
    public class DepartmentMetadata
    {
        [Display(Name = "Department Name")]
        public String Name { get; set; }
    }
}