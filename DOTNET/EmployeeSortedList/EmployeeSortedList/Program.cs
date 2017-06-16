using System;
using System.Collections.Generic;

namespace EmployeeSortedList
{
    class Program
    {
        static void Main(string[] args)
        {
            SortedList<int, Employee> employeeSortedList = new SortedList<int, Employee>();
            String name;
            Double salary;

            for (int i = 0; i < 3; i++)
            {
                Console.WriteLine("Enter name");
                name = Console.ReadLine();
                Console.WriteLine("Enter salary");
                salary = double.Parse(Console.ReadLine());
                Employee e = new Employee(name, salary);
                employeeSortedList.Add(e.Eid, e);
            }

            foreach(KeyValuePair<int, Employee> e in employeeSortedList)
            {
                Console.WriteLine(e.Value);
            }
        }
    }
}
