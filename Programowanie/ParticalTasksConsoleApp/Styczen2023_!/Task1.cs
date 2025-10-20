using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace ParticalTasksConsoleApp.Styczen2023__
{
    internal class Task1
    {
        static void NWD(int a, int b)
        {
            while (a != b)
            {
                if (a > b)
                    a = a - b;
                else
                    b = b - a;
            }
            Console.WriteLine("NWD = " + a);
        }

        public void Main()
        {
            Console.WriteLine("Podaj pierwszą liczbe");
            int a = int.Parse(Console.ReadLine());
            if (a < 0)
                a = a * (-1);
            Console.WriteLine("Podaj drugą liczbe");
            int b = int.Parse(Console.ReadLine());
            if (b < 0)
                b = b * (-1);

            NWD(a, b);
        }
    }
}


