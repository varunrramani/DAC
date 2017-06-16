using System;

namespace SquareCube
{
    delegate int MathOp(ref int num);
    class Program
    {
        static void Main(string[] args)
        {
            MathOperations mathOperations = new MathOperations();
            MathOp m0;
            MathOp m1 = mathOperations.Square;
            MathOp m2 = mathOperations.Cube;
            m0 = m1;
            m0 += m2;
            int num = 2;
            int r = m0(ref num);
            Console.WriteLine("Cube: {0}", r);
            Console.WriteLine("Cube again: {0}", num);
        }
    }
}
