using System;

namespace AccountStatic
{
    class Program
    {
        static Program()
        {
            Console.WriteLine("\t\tVITA Bank");
        }
        static void Main(string[] args)
        {
            Account a1 = new Account("Varun", 10000);
            a1.Deposit(5000);
            a1.Disp();
            a1.Withdraw(20000);
            a1.Disp();
            a1.Withdraw(300);
            a1.Disp();
        }
    }
}
