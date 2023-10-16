
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
void task6()
{
	int a, b;
	std::cout << "Podaj wartoœæ a ";
	std::cin >> a;
	std::cout << "Podaj wartoœæ b ";
	std::cin >> b;
	int score;
	score = (a * a) + (b * b);
	std::cout << "Wyra¿enie a^2 + b^2 wynosi: " << score << "\n";





}

//Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
void task7()
{
	int base_side, height;
	std::cout << "Podaj podstawe trójk¹ta ";
	std::cin >> base_side;
	std::cout << "Podaj wysokoœæ trójk¹ta ";
	std::cin >> height;
	int area;
	area = (height * base_side) / 2;
	std::cout << "Pole trójk¹ta wynosi: " << area << "\n";
}

//Program obliczaj¹cy objêtoœæ kuli o promieniu r
void task8()
{
	int ray;
	std::cout << "Podaj promieñ ";
	std::cin >> ray;
	int volume;
	volume = 3 / 4 * 3.14 * (ray * ray * ray);
	std::cout << "Objêtoœæ kuli wynosi: " << volume << "\n";
}

//Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
void task9()
{
	int a, b, h;
	std::cout << "Podaj d³ugoœæ podstawy a ";
	std::cin >> a;
	std::cout << "Podaj d³ugoœæ podstawy b ";
	std::cin >> b;
	std::cout << "Podaj d³ugoœæ wysokoœci h ";
	std::cin >> h;
	int area;
	area = (a + b) * h / 2;
	std::cout << "Pole trapezu wynosi: " << area << "\n";

}

//Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
void task10()
{
	int mark1, mark2, mark3, weight1, weight2, weight3;
	std::cout << "Podaj 1 ocene ";
	std::cin >> mark1;
	std::cout << "Podaj wagê 1 oceny ";
	std::cin >> weight1;
	std::cout << "Podaj 2 ocene ";
	std::cin >> mark2;
	std::cout << "Podaj wagê 2 oceny ";
	std::cin >> weight2;
	std::cout << "Podaj 3 ocene ";
	std::cin >> mark3;
	std::cout << "Podaj wagê 3 oceny ";
	std::cin >> weight3;
	int mean;
	mean = ((mark1 * weight1) + (mark2 * weight2) + (mark3 * weight3)) / (weight1 + weight2 + weight3);
	std::cout << "Œrednia ocen wynosi: " << mean << "\n";

}

//Stwórz program, który pobiera od u¿ytkownika d³ugoœæ w metrach i przelicza j¹ na centymetry i milimetry, wyœwietlaj¹c wynik
void task11()
{
	int meters;
	std::cout << "Podaj d³ugoœæ w metrach ";
	std::cin >> meters;
	int centimeter;
	centimeter = meters * 100;
	std::cout << "Metry w przeliczeniu na centymetry: " << centimeter << "\n";
	int  milimeter;
	milimeter = centimeter * 10;
	std::cout << "Metry w przeliczeniu na milimetry wynosi: " << milimeter << "\n";
}

//Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.
void task12()
{
	int priceZl, convert;
	std::cout << "Podaj kwotê w z³otówkach: ";
	std::cin >> priceZl;
	std::cout << "Podaj przelicznik: ";
	std::cin >> convert;
	int result;
	result = priceZl * convert;
	std::cout << "Przelicznik ze z³otówek na inn¹ walute wynosi: " << result << "\n"; 

}

//Napisz program, który wyœwietli informacje o tym czy liczba jest parzysta czy nieparzysta
void task13()

{
	int number;
	std::cout << "Podaj liczbe \n";
	std::cin >> number;

	if (number % 2 == 0)
		std::cout << "Liczba jest parzysta \n";
	else
		std::cout << "Liczba jest nieparzysta \n";


}












	int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();	
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
	void task13();
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

