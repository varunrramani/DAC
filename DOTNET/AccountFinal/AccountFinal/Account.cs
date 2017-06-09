using System;
using System.IO;


namespace AccountFinal
{
    [Serializable]
    abstract class Account
    {
        static int id;
        string name;
        int accId;
        double balance;

        public Account(string name, double balance)
        {
            accId = ++id;
            Name = name;
            Balance = balance;
        }

        public String Name { set; get; }
        public Double Balance { get; set; }

        public void Deposit(int amount)
        {
            Balance = Balance + amount;
        }

        public void WithdrawSuccessful(String name, Double balance)
        {
            String message = String.Format("{0} have debited from your account. Current balance is {1}", name, balance);
            Console.WriteLine(message);
            WriteToLog(message);
        }

        public void WithdrawFailed(String name, Double balance)
        {
            String message = string.Format("{0} tried to debit from the account but failed. Current balance is {1}", name, balance);
            Console.WriteLine(message);
            WriteToLog(message);
        }

        private void WriteToLog(String message)
        {
            using (StreamWriter streamWriter = new StreamWriter("log.txt", true))
            {
                streamWriter.Write(message);
            }
        }

        public abstract void Withdraw(int amount);
    }
}
