using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CommandLineArgs
{
    class Program
    {
        static void Main(string[] args)
        {
            for (int i = 0; i < args.Length; i++)
            {
                Console.WriteLine("{0}", args[i]);
            }

            DateTime dt = DateTime.Now;
            Console.WriteLine("{0:d}", dt);
            Console.WriteLine("{0:D}", dt);
            Console.WriteLine("{0:t}", dt);
            Console.WriteLine("{0:T}", dt);
            Console.WriteLine("{0:f}", dt);
            Console.WriteLine("{0:F}", dt);
            Console.WriteLine("{0:g}", dt);
            Console.WriteLine("{0:G}", dt);
            Console.ReadLine();
        }
    }
}
