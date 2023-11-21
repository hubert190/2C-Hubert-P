#include <iostream>


//Napisz program, który policzy sumê cyfr podanej przez u¿ytkownika liczby.
void task1()
{
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	int sum = 0;
	int rest;

	/*
	if (number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
		if (number != 0)
		{
			rest = number % 10;
			sum = sum + rest;
			number = number / 10;
			if (number != 0)
			{
				rest = number % 10;
				sum = sum + rest;
				number = number / 10;
				//if (number != 0) ...
			}
		}
	}
	*/

	do
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	} while (number != 0);


	while (number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	}

	std::cout << "Suma " << sum << "\n";
}

void task2()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> secondNumber;

	int nwd;
	if (firstNumber < secondNumber)
		nwd = firstNumber;
	else nwd = secondNumber;

	/*if (secondNumber % nwd != 0
		|| firstNumber % nwd != 0)
	{
		nwd--;
		if (secondNumber % nwd != 0
			|| firstNumber % nwd != 0);
		{
			nwd--; if (secondNumber % nwd != 0
				|| firstNumber % nwd != 0);...
		}

	}*/

	while (secondNumber % nwd != 0
		|| firstNumber % nwd != 0)
	{
		nwd--;
	}
	
	//lub

	/*while (secondNumber % nwd != 0 || firstNumber % nwd != 0)
		nwd--;*/


	std::cout << "Nwd jest równe " << nwd << "\n";
}




int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	task2();
}
