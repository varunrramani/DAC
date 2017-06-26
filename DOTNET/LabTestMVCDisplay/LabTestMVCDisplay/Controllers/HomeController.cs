using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;
using LabTestMVCDisplay.Models;

namespace LabTestMVCDisplay.Controllers
{
    public class HomeController : Controller
    {
        // GET: Home
        public ActionResult Index()
        {
            BusinessLogic businessLogic = new BusinessLogic();
            List<Book> list = businessLogic.GetBooks();
            return View(list);
        }
    }
}