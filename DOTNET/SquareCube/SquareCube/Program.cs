using System;

namespace SquareCube
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter number to find its square and cube");
            int num = Convert.ToInt32(Console.ReadLine());
            int square;
            int cube;
            FindSquareCube(num, out square, out cube);
            Console.WriteLine("Square is: {0}", square);
            Console.WriteLine("Cube is: {0}", cube);

        }

        static void FindSquareCube(int number, out int square, out int cube)
        {
            square = number * number;
            cube = square * number;
        }
    }
}
