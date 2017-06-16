using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace EmployeeWebApplication
{
    public partial class AddEmployee : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void btnAddEmployee_Click(object sender, EventArgs e)
        {
            String employeeName = txtEmployeeName.Text;
            Double salary;
            bool isValid = double.TryParse(txtEmployeeSalary.Text, out salary);

            int id;
            isValid = int.TryParse(txtEmployeeId.Text, out id);

            Employee employee = new Employee(id, employeeName, salary);
            BusinessLayer b = new BusinessLayer();
            int result = b.InsertData(employee);
            if (result == 1)
            {
                Response.Write(result + " Rows Affected");
            }
        }
    }
}