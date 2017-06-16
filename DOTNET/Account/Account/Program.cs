using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Account
{
    class Program
    {
        static void Main(string[] args)
        {
            Account a1 = new Account("ABC", 20000);
            Account a2 = new Account("DEF", 4500);
            Account a3 = new Account("XYZ", 53200);

            a1.Deposit(200);
            a2.Deposit(700);
            a3.Deposit(10000);

            Console.WriteLine("Name: {0}\tBalance: {1}", a1.GetName(), a1.CurrentBalance());
            Console.WriteLine("Name: {0}\tBalance: {1}", a2.GetName(), a2.CurrentBalance());
            Console.WriteLine("Name: {0}\tBalance: {1}", a3.GetName(), a3.CurrentBalance());
        }
    }
}
