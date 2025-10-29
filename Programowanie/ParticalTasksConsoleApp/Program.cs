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





















using System;

namespace WypozyczalniaFilmow
{
    class Film
    {

        private string tytul;
        private int liczbaWypozyczen;


        public Film()
        {
            tytul = "";
            liczbaWypozyczen = 0;
        }


        public void SetTytul(string nowyTytul)
        {
            if (nowyTytul.Length <= 20)
                tytul = nowyTytul;
            else
                Console.WriteLine("Tytuł jest zbyt długi (maks. 20 znaków).");
        }


        public string GetTytul()
        {
            return tytul;
        }


        public int GetLiczbaWypozyczen()
        {
            return liczbaWypozyczen;
        }

        public void InkrementujWypozyczenia()
        {
            liczbaWypozyczen++;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {

            Film film = new Film();

            Console.WriteLine("SYSTEM WYPOŻYCZALNI FILMÓW");


            Console.WriteLine($"Tytuł: '{film.GetTytul()}', liczba wypożyczeń: {film.GetLiczbaWypozyczen()} \n");


            Console.Write("Podaj tytuł filmu: ");
            string tytul = Console.ReadLine();
            film.SetTytul(tytul);


            Console.WriteLine($"Tytuł filmu został ustawiony na: '{film.GetTytul()}'");


            Console.WriteLine($"Aktualny tytuł filmu: {film.GetTytul()}");
            Console.WriteLine($"Liczba wypożyczeń: {film.GetLiczbaWypozyczen()}");

            Console.WriteLine("\nTest inkrementacji liczby wypożyczeń:");
            Console.WriteLine($"Przed inkrementacją: {film.GetLiczbaWypozyczen()}");
            film.InkrementujWypozyczenia();
            Console.WriteLine($"Po inkrementacji: {film.GetLiczbaWypozyczen()}");

        }
    }
}

