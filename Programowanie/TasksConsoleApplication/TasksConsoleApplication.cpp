﻿
#include <iostream>
#include <string>

/*
Zadanie: Tworzenie prostego kalkulatora

Napisz program, który będzie działał jako prosty kalkulator
i będzie umożliwiał użytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dwóch liczbach.

Instrukcje:

Poproś użytkownika o podanie dwóch liczb oraz wybór operacji (dodawanie, odejmowanie, mnożenie lub dzielenie).
W zależności od wyboru użytkownika, wykonaj odpowiednią operację arytmetyczną.
Wyświetl wynik operacji.
Przykładowe działanie programu:

Prosty Kalkulator
-----------------
1. Dodawanie
2. Odejmowanie
3. Mnożenie
4. Dzielenie
0. Koniec programu

Wybierz operację: 3
Podaj pierwszą liczbę: 5
Podaj drugą liczbę: 3

Wynik mnożenia: 15
*/







void showMenu()
{
	system("cls");
	std::cout << "Prosty Kalkulator\n";
	std::cout << "-----------------\n";
	std::cout << "1. Dodawanie\n";
	std::cout << "2. Odejmowanie\n";
	std::cout << "3. Mnożenie\n";
	std::cout << "4. Dzielenie\n";
	std::cout << "0. Koniec programu\n";
}

int convertStringToInt(std::string value)
{
	int result = 0;

	for (int i = 0; i < value.length(); i++)
	{
		if (value[i] >= '0' && value[i] <= '9')
			result = result * 10 + (value[i] - '0');
		else
			return -1;
	}

	return result;
}

int getNumber(std::string message)
{
	std::string strChoise;

	std::cout << message;

	std::getline(std::cin, strChoise);

	return convertStringToInt(strChoise);
}

void calculate(int choice, int firstNumber, int secondNumber)
{
	switch (choice)
	{
	case 1:
		std::cout << "Wynik operacji: " << firstNumber + secondNumber << "\n";
		break;
	case 2:
		std::cout << "Wynik operacji: " << firstNumber - secondNumber << "\n";
		break;
	case 3:
		std::cout << "Wynik operacji: " << firstNumber * secondNumber << "\n";
		break;
	case 4:
		if (secondNumber != 0)
			std::cout << "Wynik operacji: " << firstNumber / secondNumber << "\n";
		else
			std::cout << "Nie można dzielić przez zero\n";
		break;
	default:
		break;
	}
}

void task1()
{
	while (true)
	{
		showMenu();

		int choice = getNumber("Wybierz operację:\n");

		if (choice == 0)
			break;

		int firstNumber = getNumber("Podaj pierwszą liczbę:\n");
		int secondNumber = getNumber("Podaj drugą liczbę:\n");

		calculate(choice, firstNumber, secondNumber);
		system("pause");
	}
}




/*
ZADANIE
Konwersja temperatury

Napisz program, który będzie konwertować temperaturę pomiędzy skalami: Celsiusza, Fahrenheita i Kelvina.

Instrukcje:

Poproś użytkownika o wybór jednostki, z której chce dokonać konwersji (C - Celsiusz, F - Fahrenheit, K - Kelvin).
Poproś użytkownika o podanie temperatury w wybranej jednostce.
Przelicz temperaturę na pozostałe jednostki (z wykorzystaniem odpowiednich wzorów konwersji).
Wyświetl przeliczone temperatury.
Przykładowe działanie programu:

Konwerter Temperatur
---------------------
Wybierz jednostkę temperatury:
1. Celsiusz (C)
2. Fahrenheit (F)
3. Kelvin (K)
Wybór: C

Podaj temperaturę w stopniach Celsiusza: 25

Przeliczona temperatura:
Fahrenheit: 77.0 °F
Kelvin: 298.15 K
*/


void showMenuTemperature()
{
	system("cls");
	std::cout << "Konwerter Temperatur\n";
	std::cout << "---------------------\n";
	std::cout << "1. Celsiusz (C)\n ";
	std::cout << "2. Fahrenheit (F)\n";
	std::cout << "3. Kelvin (K)\n";

}


void calculate(int choice, int celcius, int kelvin, int fahrenheit)
{
	if (choice == 1)
		fahrenheit = (celcius * 2) + 30,
		kelvin = celcius + 273, 15;
	if (choice == 2)
		celcius = kelvin - 273, 15,
		fahrenheit = (kelvin - 273.15) * 1.8000 + 32.00;
	if (choice == 3)
		celcius = fahrenheit - 273, 15,
		kelvin = (fahrenheit + 459.67) * 5 / 9;
}



void task2()
{


	showMenuTemperature();
	int choice, celcius{}, kelvin{}, fahrenheit{};
	std::cout << "Wybierz operację\n";
	std::cin >> choice;
	if (choice < 1 || choice >3)
		std::cout << "Nie ma takiej opcji";
	if (choice == 1)
		std::cout << "Podaj temperature w stopniech Celciusza\n",
		std::cin >> celcius;
	
	if (choice == 2)
		std::cout << "Podaj temperature w stopniech Fahrenheit\n",
		std::cin >> kelvin;

	if (choice == 3)
		std::cout << "Podaj temperature w stopniech Kelvin\n",
		std::cin >> fahrenheit;
	

	if (choice == 1)
		fahrenheit = (celcius * 2) + 30,
		kelvin = celcius + 273, 15;
	if (choice == 2)
		celcius = kelvin - 273, 15,
		fahrenheit = (kelvin - 273.15) * 1.8000 + 32.00;
	if (choice == 3)
		celcius = fahrenheit - 273, 15,
		kelvin = (fahrenheit + 459.67) * 5 / 9;

	std::cout << "Celciusze: " << celcius << "\n";
	std::cout << "Kelviny " << kelvin << "\n";
	std::cout << "Farenhajty: " << fahrenheit << "\n";
}


/*
ZADANIE
Symulator rzutu kostką

Napisz program, który będzie symulował rzut kostką. Program powinien umożliwiać użytkownikowi wybór rodzaju kostki (np. 6-ścienna, 10-ścienna, 20-ścienna) oraz ilość rzutów. Po wykonaniu rzutów, program powinien wyświetlić wyniki oraz sumę otrzymanych wartości.

Instrukcje:

Poproś użytkownika o wybór rodzaju kostki (np. 6-ścienna, 10-ścienna, 20-ścienna).
Poproś użytkownika o podanie ilości rzutów.
Wykonaj podaną liczbę rzutów wybranej kostką, zapisując wyniki.
Wyświetl otrzymane wyniki oraz sumę otrzymanych wartości.
Przykładowe działanie programu:

Symulator rzutu kostką
-----------------------

Wybierz rodzaj kostki (6/10/20): 10
Ile rzutów chcesz wykonać?: 5

Wyniki rzutów kostką 10-ścienną:
1. Rzut 1: 7
2. Rzut 2: 3
3. Rzut 3: 10
4. Rzut 4: 5
5. Rzut 5: 8

Suma wyników: 33

*/

void selection(int choice,int throws)
{
	std::cout << "Wybierz rodzaj kostki ";
	std::cin >> choice;
	if (choice==6||choice==10||choice==20)

	std::cout << "Ile rzutów chcesz wykonać: ";
	std::cin >> throws;
}

void drawingNumbers(int choice)
{

	const unsigned short LOWER_RANGE = 1;
	const unsigned short UPPER_RANGE=choice ;

	const unsigned short ARRAY_SIZE = 10;
	int numbers[ARRAY_SIZE];

	srand(time(0));
	std::cout << "wylosowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
}

void task3()
{
	int choice{}, throws{};
	selection(choice, throws);
	drawingNumbers(choice);

	

}


/*
ZADANIE
Konwerter jednostek

Napisz program konwertujący jednostki miar. Program powinien umożliwiać konwersję między różnymi jednostkami (np. metry na centymetry, kilogramy na funty) oraz obsługiwać różne typy jednostek.

Instrukcje:

Zdefiniuj zestaw jednostek, które chcesz obsługiwać (np. długość: metry, centymetry, cale; masa: kilogramy, funty).
Poproś użytkownika o wybór jednostki wejściowej i jednostki wyjściowej oraz podanie wartości do konwersji.
Przekonwertuj wartość z jednostki wejściowej na jednostkę wyjściową na podstawie ustalonego współczynnika konwersji.
Wyświetl wynik konwersji.
Przykładowe działanie programu:

Konwerter jednostek
-------------------

Wybierz jednostkę wejściową:
1. Metry
2. Centymetry
3. Cale
Wybór: 1

Wybierz jednostkę wyjściową:
1. Metry
2. Centymetry
3. Cale
Wybór: 2

Podaj wartość do konwersji: 5

Wynik konwersji: 500 centymetrów

*/
void showMenuConvert()
{
	system("cls");
	std::cout << "Konwerter miar\n";
	std::cout << "---------------------\n";
	std::cout << "1. Metry \n ";
	std::cout << "2. Centymetry \n";
	std::cout << "3. Cale \n";

}




void task4()
{
	showMenuConvert();
	double choice, cale{}, centymeters{}, meters{};
	std::cout << "Wybór ";
	std::cin >> choice;
	if (choice > 3 || choice < 1)
		std::cout << "nie ma tekiego wyboru\n";
	if (choice == 1)
		std::cout << "Podaj miare w metrach\n",
		std::cin >> meters;
	if (choice == 2)
		std::cout << "Podaj miare w centymetrach\n",
		std::cin >> centymeters;

	if (choice == 3)
		std::cout << "Podaj miare w calach\n",
		std::cin >> cale;

	if (choice == 1)
		centymeters = meters * 100,
		cale = meters * 39.370;
	if (choice == 2)
		meters = centymeters / 100,
		cale = meters * 39.370;
	if (choice == 3)
		meters = cale * 0.0254,
		centymeters = meters * 100;

	std::cout << "Metry: " << meters << "\n";
	std::cout << "Centymetry: " << centymeters << "\n";
	std::cout << "Cale:  " << cale << "\n";
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task4();
}






