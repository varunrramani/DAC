using System;
using System.IO;
using System.Runtime.Serialization.Formatters.Soap;

namespace AccountFinal
{
    class Program
    {
        static void Main(string[] args)
        {
            Account account = new SavingAccount("varun", 100000, "Saving");
            account.Deposit(1000);
            account.Withdraw(10000);

            SaveAsSoapFormat(account, "SavingAccount.soap");
        }

        private static void SaveAsSoapFormat(Account account, String fileName)
        {
            SoapFormatter soapFormatter = new SoapFormatter();

            using (FileStream fileStream = new FileStream(fileName, FileMode.Append, FileAccess.Write, FileShare.None))
            {
                soapFormatter.Serialize(fileStream, account);
            }
        }
    }
}
