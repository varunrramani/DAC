using System;

namespace ExampleAdd
{
    class Program
    {
        static void Main(string[] args)
        {
            Add add = new Add();
            int sum = add.add(10, 20);
            Console.WriteLine("Sum is: " + sum);
            Console.ReadLine();
        }
    }
}
