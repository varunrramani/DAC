using System;

namespace DelegateLambda
{
    class Rectangle
    {
        public int Width { get; set; }
        public int Height { get; set; }
        public Rectangle(int width, int height)
        {
            Width = width;
            Height = height;
        }
    }
    class Program
    {
        delegate int Factorial(int num);
        delegate int Area(Rectangle rect);
        static void Main(string[] args)
        {
            Rectangle rect = new Rectangle(10, 20);
            Area area = rectangle =>
            {
                return rectangle.Width * rectangle.Height;
            };

            int rectArea = area(rect);
            Console.WriteLine("Area of Rectangle: {0}", rectArea);
            Factorial fact = (n) =>
            {
                int temp = n;
                for (int i = 2; i < temp; i++)
                {
                    n = n * i;
                }
                return n;
            };

            int result = fact(5);
            Console.WriteLine("Factorial: {0}", result);
        }
    }
}
