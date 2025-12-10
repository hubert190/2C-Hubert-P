using System;
/*************************************
   Nazwa: Komunikat
   Opis: Wyświetla w konsoli przekazywany komunikat tekstowy
   parametry: tresc
   zwracany typ i opis: brak
  *********************************/

/********************************
 Nazwa: UstawProgram
 Opis: Ustawia numer programu prania od (1-12)
 parametry: numer 
 zwracany typ i opis: int 
**********************************/


/*************************************
Nazwa: On
Opis: Włącza odkurzacz, wyświetla odpowiedni komunikat
parametry: brak
zwracany typ i opis: brak
**********************************/

/***********************************
Nazwa: Off
Opis: Wyłącza odkurzacz oraz wyświetla odpowiedni komunikat
parametry: brak
zwracany typ i opis: brak
*************************************/
namespace ParticalTasksConsoleApp.styczen2025
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
                Komunikat("Podano niepoprawny numer");
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

  

}
