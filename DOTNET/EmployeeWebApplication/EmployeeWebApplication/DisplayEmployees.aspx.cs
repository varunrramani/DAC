using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace EmployeeWebApplication
{
    public partial class DisplayEmployees : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            BusinessLayer b = new BusinessLayer();
            DataSet ds = new DataSet();
            ds = b.DisplayData();

            gvEmployees.DataSource = ds;
            gvEmployees.DataBind();
        }
    }
}