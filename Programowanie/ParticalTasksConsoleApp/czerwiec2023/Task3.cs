using System;

namespace ParticalTasksConsoleApp.czerwiec2023
{

    /*******************************************************
     nazwa klasy: Film
     pola:
       tytul - przechowuje tytuł filmu
       liczbaWypozyczen - przechowuje liczbę wypożyczeń filmu
     metody:
         SetTytul(string nowyTytul) – ustawia nowy tytuł filmu
        GetTytul() – zwraca tytuł filmu
        GetLiczbaWypozyczen() – zwraca liczbę wypożyczeń filmu
        InkrementujWypozyczenia() – zwiększa liczbę wypożyczeń o 1
     informacje:
        Klasa robi film w wypożyczalni umożliwia zapisywanie jego tytułu
        oraz liczenie ile razy dany film został wypożyczony
     autor: 01234567890
    *******************************************************/

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
                Console.WriteLine("Tytuł jest zbyt długi maks 20 znaków");
        }
        public string GetTytul()
        {
            return tytul;
        }
        public int GetLiczbaWypozyczen()
        {
            return liczbaWypozyczen;
        }
        public void Inkrementacja()
        {
            liczbaWypozyczen++;
        }
    }
}
