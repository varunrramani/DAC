using System;
using System.Collections.Generic;
using System.Data;
using System.Data.Entity;
using System.Linq;
using System.Net;
using System.Web;
using System.Web.Mvc;
using MVCValidation.Models;

namespace MVCValidation.Controllers
{
    public class EmployeeValidationsController : Controller
    {
        private EmployeeValidationEntities db = new EmployeeValidationEntities();

        // GET: EmployeeValidations
        public ActionResult Index()
        {
            return View(db.EmployeeValidations.ToList());
        }

        // GET: EmployeeValidations/Details/5
        public ActionResult Details(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            EmployeeValidation employeeValidation = db.EmployeeValidations.Find(id);
            if (employeeValidation == null)
            {
                return HttpNotFound();
            }
            return View(employeeValidation);
        }

        // GET: EmployeeValidations/Create
        public ActionResult Create()
        {
            return View();
        }

        // POST: EmployeeValidations/Create
        // To protect from overposting attacks, please enable the specific properties you want to bind to, for 
        // more details see http://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Create([Bind(Include = "Id,FirstName,Salary,HireDate,Email,Website,Age,Mobile")] EmployeeValidation employeeValidation)
        {
            if (ModelState.IsValid)
            {
                db.EmployeeValidations.Add(employeeValidation);
                db.SaveChanges();
                return RedirectToAction("Index");
            }

            return View(employeeValidation);
        }

        // GET: EmployeeValidations/Edit/5
        public ActionResult Edit(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            EmployeeValidation employeeValidation = db.EmployeeValidations.Find(id);
            if (employeeValidation == null)
            {
                return HttpNotFound();
            }
            return View(employeeValidation);
        }

        // POST: EmployeeValidations/Edit/5
        // To protect from overposting attacks, please enable the specific properties you want to bind to, for 
        // more details see http://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Edit([Bind(Include = "Id,FirstName,Salary,HireDate,Email,Website,Age,Mobile")] EmployeeValidation employeeValidation)
        {
            if (ModelState.IsValid)
            {
                db.Entry(employeeValidation).State = EntityState.Modified;
                db.SaveChanges();
                return RedirectToAction("Index");
            }
            return View(employeeValidation);
        }

        // GET: EmployeeValidations/Delete/5
        public ActionResult Delete(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            EmployeeValidation employeeValidation = db.EmployeeValidations.Find(id);
            if (employeeValidation == null)
            {
                return HttpNotFound();
            }
            return View(employeeValidation);
        }

        // POST: EmployeeValidations/Delete/5
        [HttpPost, ActionName("Delete")]
        [ValidateAntiForgeryToken]
        public ActionResult DeleteConfirmed(int id)
        {
            EmployeeValidation employeeValidation = db.EmployeeValidations.Find(id);
            db.EmployeeValidations.Remove(employeeValidation);
            db.SaveChanges();
            return RedirectToAction("Index");
        }

        protected override void Dispose(bool disposing)
        {
            if (disposing)
            {
                db.Dispose();
            }
            base.Dispose(disposing);
        }
    }
}
