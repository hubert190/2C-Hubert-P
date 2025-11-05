using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/************************
klasa: <Note>
opis:  zawiera 2 metody 1 wypisuje wytul i tresc notaki a 2 wypisuje info daignostyczne
pola   noteCounter - licznik notatek
       uniqID - przechowóje unikalne id notatki
autor: ...
*/
internal class Note
{
    private static int noteCounter = 0;
    private int Id;
    protected string title;
    protected string contains;

    public Note(string t, string c)
    {
        noteCounter++;
        Id = noteCounter;
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
        Console.WriteLine($"ID: {Id}; Licznik: {noteCounter}; Tytul: {title}; Tresc: {contains}");
    }
}

