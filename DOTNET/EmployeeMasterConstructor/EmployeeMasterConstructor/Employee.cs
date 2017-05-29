using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EmployeeMasterConstructor
{
    class Employee
    {
        private string firstName, lastName;
        private int age;

        public Employee(string firstName, string lastName, int age)
        {
            if (firstName.Length <=8)
            {
                throw new Exception("First Name should be atleast 8 characters");
            }
            if (age < 18)
            {
                throw new Exception("Age should be greater than 18");
            }

            this.firstName = firstName;
            this.lastName = lastName;
            this.age = age;
        }

        public Employee(string firstName, int age) : this(firstName, "", age)
        {

        }

        public void display()
        {
            Console.WriteLine("Name:{0} {1}\tAge:{2}", firstName, lastName, age);
        }
    }
}
