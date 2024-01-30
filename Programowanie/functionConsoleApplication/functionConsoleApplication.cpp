#include <iostream>
/*Funkcja
      -zbiór instrukcji realizuj¹cy zadanie
     -podprogram  
  Budowa funkcji :
        -na³ówek
        -cia³o funkcji - instrukcje ograniczone nawiasami klamrowymi 
   Nag³ówek:
   typ_zwracalnej_danej nazwa_funkcji(parametry)

*/
void task1()
{
    std::cout << "Hello World\n";
}

//Napisz funkcjê uniwersaln¹, która pozwala wyœwietliæ dowolny tekst
void task2(std::string textParam)
{
    std::cout << textParam << "\n";
}


// Napisz funkcjê uniwersaln¹ , która wyœwietli imiê oraz informacje czy ktoœ jest pe³noletni czy nie 
void task3(std::string name, int age)
{
    if (age >= 18)
        std::cout << name << " jest pe³noletni/pe³noletnia\n";
    else
        std::cout << name << " jest niepe³noletni/niepe³noletnia\n";
}



int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
    task1();
    task2("Witaj œwiecie!!");
    task2("Ala ma kota");
    std::string text = "Uczyæ siê programowania!!!";
    task2(text);
    task3("Jan", 35);
    task3("Ala", 14);

}

