#include <iostream>
#include <fstream>
#include <vector>

int main()
{
	std::ifstream file("przyklad.txt");
	/*
	int numbers[200];

	for (int i = 0; i < 200; i++)
	{
		file >> numbers[i];
	}

	std::cout << "Odczytanie liczby: \n";
	for (int i = 0; i <	200; i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
	*/

	std::vector<int> numbers;

	int num;
	while (file >> num)
		numbers.push_back(num);
	/*
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << ", ";
	}
	*/
	
	std::cout << "Wyswietlone liczby: \n";
	for (int num : numbers )
	{
		std::cout << num << ", ";
	}
	std::cout << "\n";


	//Podaj, ile jest w pliku liczby.txt takich liczb, których cyfry pierwsza i ostatnia są takie
	//same.Zapisz tę z nich, która występuje w pliku liczby.txt jako pierwsza.
	//W pliku z danymi jest co najmniej jedna taka liczba.
	std::cout << "Zadanie 4.1 \n";
	int count = 0;
	int first_matching_number = 0;
	for (int num : numbers)
	{
		int firstDigit;
		int lastDigit = num % 10;
		int tmpNum = num;

		do
		{
			firstDigit = tmpNum % 10;
			tmpNum = tmpNum / 10;
		} while (tmpNum != 0);

		if (firstDigit == lastDigit)
		{
			count++;
		}
		 
		
	}

		std::cout << "Ilość: " << count << "\n";
		std::cout << "Pierwsza liczba: " << first_matching_number << "\n";
	
}

