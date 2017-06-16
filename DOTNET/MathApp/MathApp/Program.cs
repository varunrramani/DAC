using System;
using MathLibrary;

namespace MathApp
{
    class Program
    {
        static void Main(string[] args)
        {
            MathOperations mo = new MathOperations();
            Console.WriteLine(mo.Square(10));
            Console.WriteLine(mo.Cube(10));
            Console.ReadLine();
        }
    }
}
