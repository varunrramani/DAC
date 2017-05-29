using System;

namespace EmployeeReadOnly
{
    class Program
    {
        static void Main(string[] args)
        {
            Employee[] e1 = new Employee[5];
            Console.WriteLine("Enter Employee Details");
            String name = "";
            int salary = 0;
            for (int i = 0; i < 5; i++)
            {
                Console.WriteLine("Enter Name:");
                name = Console.ReadLine();
                Console.WriteLine("Enter Salary");
                salary = int.Parse(Console.ReadLine());
                try
                {
                    e1[i] = new Employee(name, salary);
                }
                catch (Exception e)
                {
                    Console.WriteLine(e.Message);
                    i--;
                }
            }

            for (int i = 0; i < 5; i++)
            {
                e1[i].Disp();
            }
        }
    }
}
