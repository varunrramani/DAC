using System;

namespace AccountSearch
{
    class SearchUtils
    {
        public void Search(int accId, Account[] accounts)
        {
            for (int i = 0; i < accounts.Length; i++)
            {
                if (accounts[i].AccId == accId)
                {
                    Console.WriteLine(accounts[i]);
                    break;
                }
            }
        }

        public void Search(String name, Account[] accounts)
        {
            for (int i = 0; i < accounts.Length; i++)
            {
                if (accounts[i].Name.Equals(name))
                {
                    Console.WriteLine(accounts[i]);
                    break;
                }
            }
        }
    }
}
