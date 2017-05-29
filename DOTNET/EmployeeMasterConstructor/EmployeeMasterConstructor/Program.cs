using System;

namespace EmployeeMasterConstructor
{
    class Program
    {
        static void Main(string[] args)
        {
            Employee e1 = new Employee("ABCDEFGHIJ", 26);
            Employee e2 = new Employee("ABCDEFGHIJ", "Ramani", 26);

            e1.display();
            e2.display();
        }
    }
}
