using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace ParticalTasksConsoleApp.Styczen2023_1
{
    internal class Task1
    {
        public static void Task_1()
        {
            int a, b;

            Console.Write("Podaj a: ");
            a = int.Parse(Console.ReadLine());
            Console.Write("Podaj b: ");
            b = int.Parse(Console.ReadLine());

            if (a <= 0)
            {
                Console.WriteLine("a musi być większe od zera");
                return;
            }
            if (b <= 0)
            {
                Console.WriteLine("b musi być większe od zera");
                return;
            }

            int wynik = NWD(a, b);
            Console.WriteLine("NWD = " + wynik);
        }

           public static int NWD(int a, int b)
        {
            while (a != b)
            {
                if (a > b)
                    a = a - b;
                else
                    b = b - a;
            }
            return a;
        }
    }

    /**************************
    nazwa funkcji: NWD()
    opis funkcji: liczy NWD dwóch liczb
    parametry: a - pierwsza liczba 
               b - druga liczba
    zwracany typ i opis: zwraca wynik czyli NWD
    autor: 01234567890
    **************************/
}

