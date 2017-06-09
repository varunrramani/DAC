using System;

namespace EmployeeInheritance
{
    class Employee
    {
        static int id;
        protected int empId, salary;
        protected String name;
        

        public Employee(String name, int salary)
        {
            empId = ++id;
            this.name = name;
            this.salary = salary;
        }
    }
}
