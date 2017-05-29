using System;

namespace MasterConstructorCar
{
    class Program
    {
        static void Main(string[] args)
        {
            Car c1 = new Car();
            Car c2 = new Car("Lambo", 100);
            Car c3 = new Car(55);
            Car c4 = new Car("Ferrari", 250);
            c1.disp();
            c2.disp();
            c3.disp();
            c4.disp();
        }
    }
}
