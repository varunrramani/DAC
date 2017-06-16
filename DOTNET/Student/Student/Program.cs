using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Student
{
    class Program
    {
        static void Main(string[] args)
        {
            Student s1 = new Student("ABC", 90, 95, 85);
            Student s2 = new Student("DEF", 89, 98, 75);
            Student s3 = new Student("PQR", 89, 90, 88);

            s1.DisplayTotalMarks();
            s2.DisplayTotalMarks();
            s3.DisplayTotalMarks();

            Console.WriteLine("-------------------------------------------------");

            s1.DisplayDetails();
            s2.DisplayDetails();
            s3.DisplayDetails();
        }
    }
}
