using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace EmployeeWebApplication
{
    public partial class DeleteEmployee : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void btnDeleteEmployee_Click(object sender, EventArgs e)
        {
            int employeeId;
            bool isValid = int.TryParse(txtEmployeeId.Text, out employeeId);
            BusinessLayer b = new BusinessLayer();
            int result = b.DeleteData(employeeId);
            Response.Write(result + " Records Deleted");
        }
    }
}