using ParcticalTasksConsoleApp.Task2022_06;
using System;
using Task4;
using WypozyczalniaFilmow;

namespace ParticalTasksConsoleApp.Styczen2023_1
{
    internal class Program
    {
        static void Main()
        {
            /*
            //zad 1
            Task1.Task_1();
            */

            /*
            //zad2
            Osoba osoba1 = new Osoba();
            Osoba osoba2 = new Osoba(1, "Alicja");
            Osoba osoba3 = new Osoba(osoba2);
            osoba1.Przywitanie("Bartek");
            osoba2.Przywitanie("Kasia");
            osoba3.Przywitanie("Marek");
            Console.WriteLine("Test zakończony.");
            */

            /*
            //zad4
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
            */

            
            //zad3
            Film film = new Film();

            Console.WriteLine("SYSTEM WYPOŻYCZALNI FILMÓW");
            Console.WriteLine($"Tytuł: '{film.GetTytul()}', liczba wypożyczeń: {film.GetLiczbaWypozyczen()} \n");
            Console.Write("Podaj tytuł filmu: ");
            string tytul = Console.ReadLine();
            film.SetTytul(tytul);
            Console.WriteLine($"Tytuł filmu został ustawiony na: '{film.GetTytul()}'");
            Console.WriteLine($"Aktualny tytuł filmu: {film.GetTytul()}");
            Console.WriteLine($"Liczba wypożyczeń: {film.GetLiczbaWypozyczen()}");
            Console.WriteLine("Test inkrementacji liczby wypożyczeń:");
            Console.WriteLine($"Przed inkrementacją: {film.GetLiczbaWypozyczen()}");
            film.InkrementujWypozyczenia();
            Console.WriteLine($"Po inkrementacji: {film.GetLiczbaWypozyczen()}");
            */
        }
    }
}
