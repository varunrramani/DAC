using System;

namespace DelegateBasic
{
    delegate int mathOp(int num1, int num2);
    class Program
    {
        static int add(int num1, int num2)
        {
            return num1 + num2;
        }

        static int multiply(int num1, int num2)
        {
            return num1 * num2;
        }
        static void Main(string[] args)
        {
            MathOperations m = new MathOperations();
            //mathOp mO = new mathOp(m.add);
            //int r = mO(10, 10);
            //Console.WriteLine("Sum: " + r);

            //mO = m.multiply;
            //r = mO(10, 10);
            //Console.WriteLine("Product: " + r);
            //mathOp m = new mathOp(add);
            //int r = m(10, 10);
            //Console.WriteLine("Sum: " + r);

            //m = multiply;

            //r = m(10, 10);
            //Console.WriteLine("Product: " + r);

            mathOp m0;
            mathOp m1 = m.add;
            mathOp m2 = m.multiply;
            m0 = m1;
            m0 += m2;

            int r = m0(10, 10);
            Console.WriteLine("Sum: " + r);

        }
    }
}
