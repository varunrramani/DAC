using System;

namespace AccountSearch
{
    class Program
    {
        static void Main(string[] args)
        {
            Account[] accounts = new Account[10];
            Console.WriteLine("Enter Names of 10 Employees");
            String name;
            for (int i = 0; i < 10; i++)
            {
                Console.WriteLine("Name {0}", (i+1));
                name = Console.ReadLine();
                accounts[i] = new Account(name);
            }

            int id = 0;
            SearchUtils searchUtils = new SearchUtils();
            Console.WriteLine("Please enter id to search(-1 to exit)");
            while ((id = int.Parse(Console.ReadLine())) != -1)  {

                searchUtils.Search(id, accounts);

                Console.WriteLine("Please enter id to search(-1 to exit)");
            }

            Console.WriteLine("Please enter name to search(press enter to exit)");
            while (!(name = Console.ReadLine()).Equals(""))
            {
                searchUtils.Search(name, accounts);
                Console.WriteLine("Please enter name to search(press enter to exit)");
            }

            Console.WriteLine("Thank You!");
        }
    }
}
