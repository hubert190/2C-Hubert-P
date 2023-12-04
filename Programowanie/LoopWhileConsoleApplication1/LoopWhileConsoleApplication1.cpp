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
			nwd--; if (secondNumber % nwd != 0
		{
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



	//wersja 2
	nwd = 1;
	int dividend = 2;
	int tempFirstNumber = firstNumber, tempSecondNumber = secondNumber;;
	while (tempFirstNumber >= dividend
		&& tempSecondNumber >= dividend)
	{
		if (tempFirstNumber % dividend == 0
			&& tempSecondNumber % dividend == 0)
		{
			tempFirstNumber = tempFirstNumber / dividend;
			tempSecondNumber /= dividend;
			nwd *= dividend;

		}
		else
			dividend++;
	}
	std::cout << "Nwd jest równe " << nwd << "\n";



	//wersja 3
	//NWD=(a,b)=a			jeœli b=0
	//NWD=(a,b)=NWD(b,a%b)	jeœli b!=0

	int a = firstNumber, b = secondNumber;
	while (b != 0)
	{
		int tempA = a;                             
		a = b;
		b = tempA % b;
	}
	nwd != a;
	std::cout << "Nwd jest równe " << nwd << "\n";
}

//Sprawdzanie czy liczba jest palindromem.
void task3()
{
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	//wersja 1

	//obliczam iloœæ cyfr
	int tmpNumber = number;
	int numberOfDigit = 1;
	while (tmpNumber >= 10)
	{
		numberOfDigit++;
		tmpNumber = tmpNumber / 10;
	}

	//liczê 10 do potêgi (numberOfDigit - 1)
	int leftDivided = 1;
	while (numberOfDigit != 1)
	{
		leftDivided *= 10;
		numberOfDigit--;
	}

	int rightDivided = 10;
	int leftNumber = number;
	int rightNumber = number;

	bool isPalindrome = true;
	while (leftNumber > 10)
	{
		int leftDigit = leftNumber / leftDivided;
		int rightDigit = rightNumber % rightDivided;
		if (leftDigit != rightDigit)
		{
			isPalindrome = false;
			break;
		}

		leftNumber = leftNumber % leftDivided;
		rightNumber = rightNumber / rightDivided;

		leftDivided = leftDivided / 10;
	}

	if (isPalindrome /*== true*/)
		std::cout << "Liczba jest palindromem\n";
	else
		std::cout << "Liczba nie jest palindromem\n";


	//wersja 2
	int reverseNumber = 0;
	int tempNumber = number;
	do
	{
		int rest = tempNumber % 10;
		tempNumber /= 10;
		reverseNumber = reverseNumber * 10 + rest;

	} while (tempNumber > 0);

	if (number=reverseNumber)
		std::cout << "Liczba jest palindromem\n";
	else
		std::cout << "Liczba nie jest palindromem\n";
},




int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	task3();
}
