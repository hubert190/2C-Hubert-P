
#include <iostream>



//napisz program który wczyta liczbê od u¿ytkownika i j¹ wyœiwtli na konsoli	
void task1()
{
	int numberFromUser;
	std::cout << "Podaj liczbe\n";
	std::cin >> numberFromUser;
	std::cout << "Podales " << numberFromUser << "\n";

}

//Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóvh liczb
void task2()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwsza liczbe\n";
	std::cin >> firstNumber;
	std::cout << "Podaj druga liczbe\n";
	std::cin >> secondNumber;
	int average;
	average = (firstNumber + secondNumber) / 2;

	std::cout << "Srednia to: " << average << "\n";

}
//Program do obliczania pola prostok¹ta
void task3()
{
	int sideA, sideB;
	std::cout << "Podaj d³ugoœæ pierwszego boku \n ";
	std::cin >> sideA;
	std::cout << "Podaj d³ugoœæ pierwszego bko \n ";
	std::cin >> sideB;
	int area;
	area = sideA * sideB;
	std::cout << "Pole wynosi : " << area << "\n ";
}
//Program obliczaj¹cy objêtoœæ sto¿ka
void task4()
{
	int ray, height;
	std::cout << "Podaj d³ugoœæ promienia \n ";
	std::cin >> ray;
	std::cout << "Podaj d³ugoœæ wysokoœci";
	std::cin >> height;
	int volume;
	volume = (height / 3) * 3.1415 * (ray * ray);
	std::cout << "osto¿ka wynosi : " << volume << "\n";
}

//Program obliczaj¹cy pole ko³a.
void task5()
{
	int ray;
		std::cout << "Podaj d³ugoœæ promienia";
		std::cin >> ray;
		int area;
		area = 3.1415 * (ray * ray);
		std::cout << "Pole d³ugoœci wynosi : " << area << "\n";



}

//Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2




int main()
{
	setlocale(LC_CTYPE, "polish");
     //task1()
	//task2()
	//task3()
	//task4()
	//task5()
	task6()
}


//algorytm- skoñczony zbiór instrukcji/zadañ który rozwi¹zuje zadany problem
/*
Zapis algorytmów
-rysunki
-opis s³owny
-w punktach
-schemat blokowy
-kod Ÿród³owy danego jêzyka programowania
-pseudokod

Zmienna- pewien obszar w pamiêci operaacyjnej, w której mo¿na w danej chwiliprzechowaæ tylko jedn¹ dan¹.

Instrukcja deklaracji zmiennej:
typ_zmiennej nazwa_zmiennej;

Typ zmiennej-wielkoœæ obszaru pamiêci, interpretacja ci¹gu bitów
int- l. ca³kowita ze znakiem < -2 147 483 648, 2 147 483 648 >
short- 2 bajtowa l. ca³kowita ze znakiem <-32 768, 32 767>
long- to samo co int
long long- 8 bajtowa l. ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>
unsigned- zmienna bez znaku  <0, 2*max + 1>
float- 4 bajtowa l. rzeczywista, dok³adnoœæ 6-7 cyfr po przecinku
long double- 12 bajtowa l.rzeczywista, dok³adnoœæ 19 - 20 cyfr po przecinku
double- 8 bajtowa l.rzeczywista, dok³adnoœæ 15 - 16 cyfr po przecinku

Nazwa zmienne nazwa obszaru w pamiêci
Warunki niezbdne
-alfabet angielski aA do zZê
-Cyfry arabskie 0-9
-podkreœlenie (pod³oga)
-pierwszym znakiem nie mo¿e byc cyfra
-unikalny  w swoim zakresie widocznoœci
-nie mo¿e byæ to s³owo kluczowe (zarezerwowane) danego jêzyka

Warunki programistów
- nazwa zmiennej powinna oddawæ charakter przechowywanych danych
- jeœli wiele s³ów to w miejsce spacji podkreœlenie lub zaczynaja od drugiego s³owa piszemy je z du¿ej litery
-piszemy po angielsku




*/

