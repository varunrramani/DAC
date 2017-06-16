using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Student
{
    class Student
    {
        string name;
        int math_m, science_m, english_m;

        public Student(string name, int math_m, int science_m, int english_m)
        {
            this.name = name;
            this.math_m = math_m;
            this.science_m = science_m;
            this.english_m = english_m;
        }

        public void DisplayTotalMarks()
        {
            int totalMarks = math_m + science_m + english_m;
            Console.WriteLine("Total Marks: {0}", totalMarks);
        }

        public void DisplayDetails()
        {
            int totalMarks = math_m + science_m + english_m;
            Console.WriteLine("Name: {0} \nTotal Marks:{1}", name, totalMarks);
        }
    }
}
