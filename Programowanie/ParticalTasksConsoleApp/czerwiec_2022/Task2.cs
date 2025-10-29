using System;


namespace ParcticalTasksConsoleApp.Task2022_06
{
    public class Osoba
    {
        private static long numberOfCreatedClass = 0;
        private int id;
        private string imie;
        public Osoba(int id, string imie)
        {
            numberOfCreatedClass++;
            this.id = id;
            this.imie = imie;
        }
        public Osoba(Osoba osoba)
        {
            numberOfCreatedClass++;
            this.id = osoba.id;
            this.imie = osoba.imie;
        }
        public Osoba()
        {
            numberOfCreatedClass++;
            this.id = 0;
            this.imie = null;
        }

        public void Przywitanie(string imieWitajacego)
        {
            Console.WriteLine($"Cześć {imieWitajacego}, mam na imię {imie} ");
        }



        class Program
        {
            static void Main(string[] args)
            {
              
                Osoba osoba1 = new Osoba();
                Osoba osoba2 = new Osoba(1, "Alicja"); 
                Osoba osoba3 = new Osoba(osoba2); 

             
                osoba1.Przywitanie("Bartek");
                osoba2.Przywitanie("Kasia");
                osoba3.Przywitanie("Marek");

                Console.WriteLine("Test zakończony.");



            }
        }
    }
}
