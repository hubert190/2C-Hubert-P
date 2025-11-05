using ParticalTasksConsoleApp.czerwiec_2022;
using ParticalTasksConsoleApp.czerwiec2023;
using ParticalTasksConsoleApp.Styczen2023;
using ParticalTasksConsoleApp.styczen2025;

namespace ParticalTasksConsoleApp
{
    internal class Program
    {
        static void Main()
        {
         /*   
            //zad 1
            Task1.Task_1();


            //task 3
            Film film = new Film();
            Console.WriteLine("Inicjalizacja obiektu klasy Film:");
            Console.WriteLine($"Tytuł: {film.GetTytul()}");
            Console.WriteLine($"Liczba wypożyczeń: {film.GetLiczbaWypozyczen()}");
            Console.Write("Podaj nowy tytuł filmu: ");
            string nowyTytul = Console.ReadLine();
            film.SetTytul(nowyTytul);
            Console.WriteLine($"Aktualny tytuł filmu: {film.GetTytul()}");
            Console.WriteLine($"Liczba wypożyczeń przed inkrementacją: {film.GetLiczbaWypozyczen()}");
            film.InkrementujWypozyczenia();
            Console.WriteLine($"Liczba wypożyczeń po inkrementacji: {film.GetLiczbaWypozyczen()}");
         */

            //zad2
            Console.WriteLine($"Liczba zarejestrowanych osób to {Osoba.Instances}");
            Osoba osoba1 = new Osoba();
            Console.Write("Podaj id nowej osoby: ");
            int id = int.Parse(Console.ReadLine());
            Console.Write("Podaj imię nowej osoby: ");
            string imie = Console.ReadLine() ?? "";
            Osoba osoba2 = new Osoba(id, imie);
            Osoba osoba3 = new Osoba(osoba2);
            Console.WriteLine("Przywitania");
            osoba1.Przywitanie("Jan");
            osoba2.Przywitanie("Jan");
            osoba3.Przywitanie("Jan");
            Console.WriteLine($"Liczba zarejestrowanych osób to {Osoba.Instances}");

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

            //zad1.2
            Note n1 = new Note("Lista zakupow", "slodycze, banany");
            Note n2 = new Note("Sprawdziany", "polski, matma");
            n1.TitleandContains();
            n1.Diag();
            n2.TitleandContains();
            n2.Diag();

        }
    }
}
