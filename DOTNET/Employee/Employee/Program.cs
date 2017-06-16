using System;

namespace Employee
{
    class Program
    {
        static void Main(string[] args)
        {
            Employee e1 = new Employee("ABC", 27000);
            Employee e2 = new Employee("DEF", 35000);
            Employee e3 = new Employee("PQR", 23000);

            Console.WriteLine("Name: {0}\tNet Salary: {1}", e1.getName(), e1.CalcNetSalary());
            Console.WriteLine("Name: {0}\tNet Salary: {1}", e2.getName(), e2.CalcNetSalary());
            Console.WriteLine("Name: {0}\tNet Salary: {1}", e3.getName(), e3.CalcNetSalary());

        }
    }
}
