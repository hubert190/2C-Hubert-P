#include <iostream>

/*
Operatory warunkowe:
>-wiêksze
<-mniejszoœæ
>=-wiêksze b¹dŸ równe
<=-mniejsze b¹dŸ równe
==-równe
!=-ró¿ne
*/

//Napisz program, który wyœwietli informacje, czy liczba jest dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "Podaj liczbe\n ";
	std::cin >> number;

	if (number > 0)
		std::cout << "Liczba jest dodatnia\n ";

	if (number < 0)
		std::cout << "Liczba jest ujemna\n ";

	if (number == 0)
		std::cout << "Liczba równa sie 0\n";

	std::cout << "Kolejna instrukcja";

		
}


//Napisz program, który wyœwietli informacje o tym czy liczba jest parzysta czy nieparzysta
void task2()

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
	//task1();
	task2();

}