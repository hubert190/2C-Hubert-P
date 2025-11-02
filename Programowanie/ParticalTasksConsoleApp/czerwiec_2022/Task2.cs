using System;


namespace ParticalTasksConsoleApp.czerwiec_2022
{
    public class Osoba
    {
        private static long numberOfCreatedClass = 0;
        private int id;
        private string imie;
        public static long Instances => numberOfCreatedClass;
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
    }
}
