using System;

namespace Employee
{
    class Employee
    {
        string name;
        int salary;

        public string getName() {
            return this.name;
        }
        public Employee(String name, int salary)
        {
            this.name = name;
            this.salary = salary;
        }

        public double CalcNetSalary()
        {
            Double netSal = salary - (salary * 0.1);
            return netSal;
        }
    }
}
