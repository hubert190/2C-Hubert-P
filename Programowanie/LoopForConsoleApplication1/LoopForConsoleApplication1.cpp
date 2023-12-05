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

//Program obliczaj¹cy n!.
void task6()
{

}

int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	task6()
}

