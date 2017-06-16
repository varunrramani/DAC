using System;
using System.Text;

namespace StringTest
{
    class Program
    {
        static void Main(string[] args)
        {
            var myInternedString = "This String is interened at compile time";
            Console.WriteLine(String.IsInterned(myInternedString) == null ? "NO" : "YES");

            StringBuilder sb = new StringBuilder();
            sb.Append("This is going to be");
            sb.Append(" interned soon");

            var myString = sb.ToString();
            Console.WriteLine(String.ReferenceEquals(myString, sb.ToString()));

            Console.WriteLine(String.IsInterned(myString) == null ? "NO" : "YES");

            String.Intern(myString);
            Console.WriteLine(String.IsInterned(myString) == null ? "NO" : "YES");

            int p = 5, q = 1;
            Console.WriteLine(p + q);
            Console.WriteLine(p + q + "=ans");
            Console.WriteLine("ans=" + (p + q));
            Console.WriteLine("ans=" + p + q);

            p = 940;
            q = 74;
            Console.WriteLine("{0,4}\n+\n{1,4}\n----\n{2,4}", p, q, p + q);
            Console.WriteLine("{0:c}", 99999);
            Console.WriteLine("{0:d9}", 99999);
            Console.WriteLine("{0:f3}", 99999);
            Console.WriteLine("{0:n}", 99999);
            Console.WriteLine("{0:E}", 99999);
            Console.WriteLine("{0:e}", 99999);
            Console.WriteLine("{0:P}", 99999/10000);
        }
    }
}
