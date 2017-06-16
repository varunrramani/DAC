using System;

namespace DelegateBasic
{
    class MathOperations
    {
        public int add(int num1, int num2)
        {
            Console.WriteLine(num1 + num2);
            return num1 + num2;
        }

        public int multiply(int num1, int num2)
        {
            Console.WriteLine(num1 * num2);
            return num1 * num2;
        }
    }
}
