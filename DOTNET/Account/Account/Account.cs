using System;

namespace Account
{
    class Account
    {
        string name;
        double balance;

        public Account(string name, double balance)
        {
            this.name = name;
            this.balance = balance;
        }

        public void Deposit(double amount)
        {
            balance += amount;
        }

        public string GetName()
        {
            return name;
        }

        public double CurrentBalance()
        {
            return balance;
        }
    }
}
