using System;

namespace EmployeeSortedList
{
    class Employee
    {
        static int id;
        int eid;
        Double salary;
        String name;

        public Double Salary { get; set; }
        public String Name { get; set; }
        public int Eid { get; }

        public Employee(String name, Double salary)
        {
            this.eid = ++id;
            Name = name;
            Salary = salary;
        }

        public override string ToString()
        {
            return String.Format("Name: {0}, Salary: {1}", Name, Salary);
        }
    }
}
