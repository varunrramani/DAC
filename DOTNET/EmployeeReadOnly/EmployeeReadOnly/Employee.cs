using System;

namespace EmployeeReadOnly
{
    class Employee
    {
        static int id = 0;
        const int minSal = 15000;
        const int maxSal = 90000;
        string name;
        int empId, salary;

        public Employee(string name, int salary)
        {
            if(name.Length < 8)
            {
                throw new Exception("Name length should be greater than 8 characters");
            }

            if (salary < minSal || salary > maxSal)
            {
                throw new Exception("Salary should be between 15000 and 90000");
            }

            this.name = name;
            this.salary = salary;
            this.empId = ++id;
        }

        public void Disp()
        {
            Console.WriteLine("EmpId: {0}\tName: {1}\tSalary: {2}", empId, name, salary);
        }
    }
}
