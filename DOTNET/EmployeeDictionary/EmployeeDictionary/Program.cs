using System;
using System.Collections.Generic;

namespace EmployeeDictionary
{
    class Program
    {
        static void Main(string[] args)
        {
            Dictionary<String,Employee> employeeDictionary = new Dictionary<string, Employee>();
            String name;
            Double salary;
            for (int i = 0; i < 10; i++)
            {
                Console.WriteLine("Enter Name");
                name = Console.ReadLine();
                Console.WriteLine("Enter Salary");
                salary = double.Parse(Console.ReadLine());
                Employee e = new Employee(name, salary);
                employeeDictionary.Add(name, e);
            }

            foreach (KeyValuePair<string, Employee> e in employeeDictionary)
            {
                Console.WriteLine(e.Value);
            }
        }
    }
}
