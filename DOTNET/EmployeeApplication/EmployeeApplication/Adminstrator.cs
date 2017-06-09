using System;

namespace EmployeeInheritance
{
    static class Adminstrator
    {
        public static readonly double salaryBonus = 0.10;
        public const double salaryTax = 0.04;

        static double GetBonus()
        {
            return salaryBonus;
        }
    }
}
