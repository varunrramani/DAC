using System;

namespace AccountStatic
{
    class Account
    {
        private static int id = 0;
        public static double fdRate = 0.05;

        private string name;
        private int accountId, balance;

        public Account(string name, int balance)
        {
            this.name = name;
            this.balance = balance;
            accountId = ++id;
        }

        public void Deposit(int amount)
        {
            balance = balance + amount;
        }

        public void Withdraw(int amount)
        {
            if (balance - amount > 0)
            {
                balance = balance - amount;
            }
            else
            {
                Console.WriteLine("Not enough balance to withdraw {0}", amount);
            }
        }

        public void Disp()
        {
            Console.WriteLine("Account no: {0}\tName: {1}\tBalance: {2}", accountId, name, balance);
        }
    }
}
