using System;

namespace EmployeeStatic
{
    class Program
    {
        static void Main(string[] args)
        {
            Employee e1 = new Employee("Varun", 25000);
            e1.disp();
            Employee e2 = new Employee("Ramani", 30000);
            e2.disp();
            Employee e3 = new Employee("ABCDEF", 35000);
            e3.disp();
        }
    }
}
