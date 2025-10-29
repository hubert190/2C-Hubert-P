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

}
