using System;

namespace DelegateAnonymous
{
    class Program
    {
        delegate void Factorial(int num);
        delegate int Square(int num);
        static void Main(string[] args)
        {
            Factorial fact = delegate(int num)
            {
                int temp = num;
                for (int i = 2; i < temp; i++)
                {
                    num = num * i;
                }
                Console.WriteLine("Factorial: {0}", num);
            };
            fact(5);

            Square sqr = delegate(int num)
            {
                return num*num;
            };

            Console.WriteLine("Square: {0}", sqr(5));
        }
    }
}
