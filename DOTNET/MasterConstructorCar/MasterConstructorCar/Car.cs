using System;

namespace MasterConstructorCar
{
    class Car
    {
        private string carName;
        private int speed;

        public Car(string carName, int speed)
        {
            if (carName.Equals(""))
            {
                this.carName = "Unknown";
            }
            else
            {
                this.carName = carName;
            }

            if (speed > 60)
            {
                this.speed = 60;
            }
            else
            {
                this.speed = speed;
            }
        }

        public Car() : this("", 0)
        {

        }

        public Car(string carName) : this(carName, 0)
        {

        }

        public Car(int speed) : this("", speed)
        {

        }

        public void disp()
        {
            Console.WriteLine("Name: {0}\tSpeed: {1}", carName, speed);
        }
    }
}
