using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LabTestConsoleApplication
{
    class Customer
    {
        String name;
        Int32 age;
        DateTime dateOfJoining, lastOrderDate;

        public Customer(String name, Int32 age, DateTime dateOfJoining, DateTime lastOrderDate)
        {
            this.name = name;
            this.age = age;
            this.dateOfJoining = dateOfJoining;
            this.lastOrderDate = lastOrderDate;
        }

        public String Name
        {
            get
            {
                return name;
            }

            set
            {
                name = value;
            }
        }

        public Int32 Age
        {
            get
            {
                return age;
            }

            set
            {
                age = value;
            }
        }

        public DateTime DateOfJoining
        {
            get
            {
                return dateOfJoining;
            }

            set
            {
                dateOfJoining = value;
            }
        }

        public DateTime LastOrderDate
        {
            get
            {
                return lastOrderDate;
            }

            set
            {
                lastOrderDate = value;
            }
        }

        public override string ToString()
        {
            return String.Format("Name: {0}, Age: {1}, Date of Joining: {2}, Last Order Date: {3}", Name, Age, DateOfJoining, LastOrderDate);
        }

    }
    class Program
    {
        static void Main(string[] args)
        {
            Customer c1 = new Customer("Varun", 26, new DateTime(2016, 01, 14), new DateTime(2017, 06, 14));
            Customer c2 = new Customer("ABC", 21, new DateTime(2015, 03, 24), new DateTime(2017, 06, 16));
            Customer c3 = new Customer("DEF", 24, new DateTime(2012, 07, 04), new DateTime(2017, 06, 19));
            Customer c4 = new Customer("GHI", 22, new DateTime(2011, 09, 27), new DateTime(2017, 06, 20));
            List<Customer> customerList = new List<Customer>();

            customerList.Add(c1);
            customerList.Add(c2);
            customerList.Add(c3);
            customerList.Add(c4);

            foreach (Customer c in customerList)
            {
                Console.WriteLine(c);
            }

            Console.WriteLine("---------------------------------------------------------------------------");

            customerList.Sort(delegate (Customer x, Customer y)
            {
                if (x.Age < y.Age)
                {
                    return -1;
                }
                else if (x.Age > y.Age)
                {
                    return 1;
                }
                return 0;
            });

            Console.WriteLine("\n--------------Sorting with Age----------------------------");

            foreach (Customer c in customerList)
            {
                Console.WriteLine(c);
            }

            Console.WriteLine("-----------------------------------------------------------------------");

            customerList.Sort(delegate (Customer x, Customer y)
            {
                return x.DateOfJoining.CompareTo(y.DateOfJoining);
            });

            Console.WriteLine("\n--------------Sorting with Date of Joining----------------------------");

            foreach (Customer c in customerList)
            {
                Console.WriteLine(c);
            }

            Console.WriteLine("-----------------------------------------------------------------------");

            customerList.Sort(delegate (Customer x, Customer y)
            {
                return x.LastOrderDate.CompareTo(y.LastOrderDate);
            });

            Console.WriteLine("\n--------------Sorting with last Order Date----------------------------");

            foreach (Customer c in customerList)
            {
                Console.WriteLine(c);
            }

            Console.WriteLine("-----------------------------------------------------------------------");

        }
    }
}
