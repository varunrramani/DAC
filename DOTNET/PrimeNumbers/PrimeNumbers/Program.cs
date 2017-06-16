using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PrimeNumbers
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter number");
            int num = int.Parse(Console.ReadLine());
            Console.WriteLine(num);
            bool isPrime = true;
            int k = 0;
            for (int j = num; j < num * 50; j++)
            {
                if (k == 4)
                {
                    break;
                }
                for (int i = num; i < num * 50; i++)
                {
                    if (i != j && i % j == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }
                if (isPrime)
                {
                    Console.WriteLine(j);
                    k++;
                }
                isPrime = true;
                
            }
            Console.ReadLine();
        }
    }
}
