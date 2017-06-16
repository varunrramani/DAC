using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace ORMSchemaFirst
{
    public partial class DisplayProducts : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            ProductEntitiesContext entities = new ProductEntitiesContext();
            var products = from product in entities.Products select product;
            foreach(var product in products)
            {
                Response.Write(product.Id + "   " + product.Name + "   " + product.Price + "<br />");
            }

        }
    }
}