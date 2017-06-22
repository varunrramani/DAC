using MVCTrial1.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace MVCTrial1.Controllers
{
    public class HomeController : Controller
    {
        // GET: Home
        public ActionResult Index()
        {
            return View();
        }

        public ActionResult Details()
        {
            Employee employee = new Employee()
            {
                ID = 1,
                Name = "Varun",
                Gender = "Male",
                City = "Mumbai"
            };
            return View(employee);
        }

        [HttpGet]
        public ActionResult Create()
        {
            return View();
        }

        [HttpPost]
        public ActionResult Create(Employee e)
        {
            if (ModelState.IsValid)
            {
                return View("InsertSuccessful", e);
            }
            return View();
        }
    }
}