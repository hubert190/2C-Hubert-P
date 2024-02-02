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

//Napisz program, który przetestuje  zachowanie siê przekazywanych danych przez parametr
void task4(int number)
{
    std::cout << "zmienna number w funkcji task4: " << number << "\n";
    number--;
    std::cout << "zmienna number w funkcji task4: " << number << "\n";
}

//Napisz program, który wykorzysta przekazywanie parametru przez referencje 
void task5(int& number)
{
    std::cout << "zmienna number w funkcji task5: " << number << "\n";
    number--;
    std::cout << "zmienna number w funkcji task5: " << number << "\n";
}

void task6_GetNumber(int& number)
{
    std::cout << "Podaj liczbe \n";
    std::cin >> number;
}


int sumOfNumebrs(int fn, int sn)
{
    int s;
    s = fn + sn;
    return s;
}



int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
   // task1();
   // task2("Witaj œwiecie!!");
   // task2("Ala ma kota");
   // std::string text = "Uczyæ siê programowania!!!";
   // task2(text);
   // task3("Jan", 35);
  //  task3("Ala", 14);
    int number = 5;
   // std::cout << "zmienna number w funkcji task4: " << number << "\n";
   // task4(number);
    //std::cout << "zmienna number w funkcji task4: " << number << "\n";

    //task4(9);
    const int NUMBER = 9;
    //task4(NUMBER);


    //std::cout << "zmienna number w funkcji task5: " << number << "\n";
     //task5(number);
    // std::cout << "zmienna number w funkcji task5: " << number << "\n";

     //task5(9) -B£¥D  przez parametr mo¿na przekazaæ tylko zmienn¹
     //task5(NUMBER) - B£¥D  przez parametr mo¿na przekazaæ tylko zmienn¹
   
    int numberFromUser = 5;
    task6_GetNumber(numberFromUser);
    std::cout << "U¿ytkownik poda³ liczbe " << numberFromUser << "\n";

    int firstNumber, secondNumber, sum;
    firstNumber = 9;
    secondNumber = 1;
    sum = sumOfNumbers(firstNumber, secondNumber);
    std::cout << sum << "\n";
}

