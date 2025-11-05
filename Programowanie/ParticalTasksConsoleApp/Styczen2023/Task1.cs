using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace ParticalTasksConsoleApp.Styczen2023
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






using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.Styczen2023_1
{
    internal class Task2
    {
        public void Task()
        {
            Note n1 = new Note("Lista zakupow", "slodycze, banany");
            Note n2 = new Note("Sprawdziany", "polski, matma");

            n1.TitleandContains();
            n1.Diag();

            n2.TitleandContains();
            n2.Diag();
        }
    }
}

internal class Note
{
    private static int noteCounter = 0;
    private int uniqID;

    protected string title;
    protected string contains;

    public Note(string t, string c)
    {
        noteCounter++;
        uniqID = noteCounter;
        title = t;
        contains = c;
    }

    public void TitleandContains()
    {
        Console.WriteLine($"Tylul: {title}");
        Console.WriteLine($"Tresc: {contains}");
    }

    public void Diag()
    {
        Console.WriteLine($"ID: {uniqID}; Licznik: {noteCounter}; Tytul: {title}; Tresc: {contains}");
    }
}

/************************
klasa:          <Note>
opis:           <zawira 2 metody 1 wypisuje wytul i tresc notaki a 2 wypisuje info daignostyczne>
pola:           <noteCounter - jest liczkiem notatek>
                <uniqID - przechowuej unikalne id notatki>
autor:          <>
*************************/
