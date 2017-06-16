using SharedLibrary;
using System;

namespace SharedLibraryUse
{
    class Program
    {
        static void Main(string[] args)
        {
            MathOperations ob = new MathOperations();
            Console.WriteLine(ob.Square(10));
            Console.WriteLine(ob.Cube(10));
            Console.ReadLine();
        }
    }
}
