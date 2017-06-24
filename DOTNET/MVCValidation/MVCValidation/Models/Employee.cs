using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace MVCValidation.Models
{
    [MetadataType(typeof(EmployeeMetadata))]
    public partial class EmployeeValidation
    {

    }
    public class EmployeeMetadata
    {
        [HiddenInput(DisplayValue = false)]
        public int Id { get; set; }

        [Required]
        [Display(Name = "First Name")]
        public String FirstName { get; set; }

        [Required]
        public String Salary { get; set; }

        [Required]
        [Display(Name = "Hire Date")]
        [DataType(DataType.DateTime)]
        [DisplayFormat(DataFormatString = "{0:MM/dd/yyyy}")]
        public DateTime? HireDate { get; set; }

        [Required]
        public String Email { get; set; }

        [Required]
        public String Website { get; set; }

        [Required]
        [Range(18, 99)]
        public int Age { get; set; }

        [Required]
        public String Mobile { get; set; }
    }
}