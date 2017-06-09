using System;

namespace EmployeeInheritance
{
    class PermanentEmployee : Employee
    {
        String type;
        Double netSalary;

        public PermanentEmployee(String name, int salary, String type) : base(name, salary)
        {
            this.type = type;
        }

        public void calcSalary()
        {
            netSalary = salary + (Adminstrator.salaryBonus * salary) - (Adminstrator.salaryTax * salary);
        }
    }
}
