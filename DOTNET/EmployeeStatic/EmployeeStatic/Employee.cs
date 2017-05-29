using System;

namespace EmployeeStatic
{
    class Employee
    {
        private static int id = 0;
        private int empid, salary;
        private string name;

        public Employee(string name, int salary)
        {
            empid = ++id;
            this.name = name;
            this.salary = salary;
        }

        public void disp()
        {
            Console.WriteLine("Employee ID: {0}\nName: {1}\nSalary: {2}", empid, name, salary);
        }
    }
}
