using System;

namespace SquareCube
{
    class MathOperations
    {
        public int Square(ref int num)
        {
            num = num * num;
            return num;
        }

        public int Cube(ref int num)
        {
            num = num * num * num;
            return num;
        }
    }
}
