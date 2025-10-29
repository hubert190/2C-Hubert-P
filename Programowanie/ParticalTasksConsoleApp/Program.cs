using System;

namespace ParticalTasksConsoleApp.Styczen2023_1
{
    internal class Program
    {
        static void Main()
        {
            Task1.Task_1();
        }
    }
}


using System;

namespace Task4
{

    class Urzadzenie
    {
        public void Komunikat(string tresc)
        {
            Console.WriteLine(tresc);
        }
    }

    class Pralka : Urzadzenie
    {
        private int numerProgramu = 0;

        public int UstawProgram(int numer)
        {
            if (numer >= 1 && numer <= 12)
            {
                numerProgramu = numer;
                Komunikat("Program został ustawiony");
            }
            else
            {
                Komunikat("Podano niepoprawny numer programu");
                numerProgramu = 0;
            }

            return numerProgramu;
        }
    }
    class Odkurzacz : Urzadzenie
    {
        private bool stan = false;

        public void On()
        {
            if (!stan)
            {
                stan = true;
                Komunikat("Odkurzacz włączono");
            }
        }

        public void Off()
        {
            if (stan)
            {
                stan = false;
                Komunikat("Odkurzacz wyłączono");
            }
        }
    }
    class Program
    {
        static void Main()
        {
            Pralka pralka = new Pralka();
            Odkurzacz odkurzacz = new Odkurzacz();

            Console.Write("Podaj numer prania 1..12: ");
            int numer;
            bool poprawny = int.TryParse(Console.ReadLine(), out numer);
            if (!poprawny) numer = 0;

            pralka.UstawProgram(numer);
            odkurzacz.On();
            odkurzacz.On();
            odkurzacz.On();

            odkurzacz.Komunikat("Odkurzacz wyładował się");
            odkurzacz.Off();

        }
    }
}

