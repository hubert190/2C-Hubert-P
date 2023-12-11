#include <iostream>

void task1()
//napisz program który wyœwietli Hello word tyle ile razy chce u¿ytkownik
{
	int howManyTime;
	std::cout << "ile razy mam powtórzyæ?\n";
	std::cin >> howManyTime;
	//i != howManyTime
	for (int i = 0; i != howManyTime; i++)
	{
		std::cout << "Hello word\n";
		i++;
	}
}

void task2()
//napisz program który wyœwietli l. parzyste do podanej przez u¿ytkownika liczby
{
	int upperRange;
	std::cout << "Podaj górn¹ granice \n";
	std::cin >> upperRange;


	for (int i = 0; i <= upperRange; i += 2)
	{
		std::cout << i << "\n";

	}
}

void task3()
//Program obliczaj¹cy sumê liczb od 1 do 100
{
	int sum = 0;
	for (int i = 0; i <= 100; i += 1)
	{
		sum = sum + i;
	}
	std::cout << sum;

}

void task4()
// Program sprawdzaj¹cy czy podana liczba jest liczb¹ doskona³¹ (czyli tak¹, której suma dzielników 
// (z wy³¹czeniem samej siebie) jest równa danej liczbie, np. 6 jest liczb¹ doskona³¹, poniewa¿ 1 + 2 + 3 = 6).
{
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	int sum = 0;
	for (int i = 1; 1 < number; i++)
	{
		if (number % i == 0)
		{
			sum += i;
		}
	}
	std::cout << "suma z dzielników" << sum << "\n";

	if (sum == number)
		std::cout << "jest liczb¹ doskona³¹\n";
	else
		std::cout << "jest liczb¹ doskona³¹\n";

}


void task5()
//Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
{
	int i = 0;
	for (int number = 1; number <= 10; number++)
	{
		std::cout << i<<"\n";
		i = number * number;
	}
	std::cout << i;

}


//Program wyœwietlaj¹cy na ekranie tabliczkê mno¿enia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
void task6()
{
	int number, i;

	for (i = 0; i <= 9; i++)
	{
		std::cout << "1x" << i << " = ";
		number = 1 * i;
		std::cout << number << "\n";
	}
}

//Program wyœwietlaj¹cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task7()
{
	int number;
	std::cout << "Liczby podzielneprzez 3 z zakresu 1 - 100:\n";

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			std::cout << i << "\n";
	}
}

//Program obliczaj¹cy sumê kwadratów liczb od 1 do 10
void task8()
{
	int number;
	int sum = 0;

	for (int i = 1; i <= 10; i++)
	{
		number = i * i;
		sum = sum + number;
	}
	std::cout << "Suma kwadratow liczb 1 - 10 = " << sum << "\n";
}


//Program obliczaj¹cy n!  (4! = 1*2*3*4)
void task9()
{
	int number;
	int x = 0;
	int result = 1;
	std::cout << "Podaje liczbe: ";
	std::cin >> number;

	for (int i = 1; i <= number; i++)
	{
		x++;
		result = result * x;
	}
	std::cout << "n! = " << result;
}

//Program wyœwietlaj¹cy na ekranie ci¹g Fibonacciego do 20 elementu
// (ci¹g Fibonacciego to ci¹g gdzie ka¿dy element jest sum¹ dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task10()
{
	int number=0;
	for (int i=0;i<10;i++)
	{
		std::cout << i;
		
	}
}

//Program, kóry wyœwietli poni¿sze cztery zwory:
//	****    54321        121212        122333
//	***     65432        212121        223334444
//	**      76543        121212        333444455555
//	*       87654        212121        444455555666666

int main()
{
	setlocale(LC_CTYPE, "polish");
	task10();
	
}

