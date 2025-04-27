#include <iostream>
#include <fstream>
#include <vector>
#include <set>

int main()
{
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

	std::ifstream file("przyklad.txt");

	int num;
	while (file >> num) {
		int divisor = 2;
		std::vector <int> uniqueFactors;
		int n = num;
		int factorsCount = 0;

		/*
		for (int i = 0; i < numbers.size(); i++)
		{
			std::cout << numbers[i] << ", ";
		}
		*/

		//Zdanie 4.2

			
		std::cout << "Zadanie 4.2 \n";
		int maxFactorsCount = 0, maxUniqueFactorsCount = 0;
		int numberWithMostFactors = 0, numberWithMostUniqueFactors = 0;



		while (n > 1) {
			bool isNewFactor = true;
			while (n % divisor == 0) {
				factorsCount++;
				n /= divisor;

				for (int i = 0; i < uniqueFactors.size(); i++) {
					if (uniqueFactors[1] == divisor) {
						isNewFactor = false;
						break;
					}
				}
				divisor++;
			}
			if (factorsCount > maxFactorsCount) {
				maxFactorsCount = factorsCount;
				numberWithMostFactors = n;
			}
		}
		if (uniqueFactors.size() > maxUniqueFactorsCount) {
			maxUniqueFactorsCount = uniqueFactors.size();
			numberWithMostUniqueFactors = n;
		}

		std::cout << numberWithMostFactors << " " << maxFactorsCount << " " << numberWithMostUniqueFactors << " " << maxUniqueFactorsCount;
	}
	}





#include <iostream>
#include <fstream>

void task3_2() {

	std::ifstream file("skrot_przyklad.txt");

	std::cout << "Zadanie 3.2" << '\n';

	int number;
	int count = 0;
	int maxNumber = 0;

	while (file >> number) {
		int temp = number;
		bool oddDigit = false;

		while (temp > 0) {
			int digit = temp % 10;
			if (digit % 2 == 1) {
				oddDigit = true;
				break;
			}
			temp /= 10;
		}

		if (!oddDigit) {
			count++;


			if (number > maxNumber) {
				maxNumber = number;
			}
		}
	}

	std::cout << count << "\n";
	std::cout << maxNumber << "\n";
}

void task3_3() {
	std::ifstream file("skrot2_przyklad.txt");

	std::cout << "Zadanie 3.3" << '\n';

	int numbers;

	while (file >> numbers) {
		int temp = numbers;
		int oddShortcut = 0;
		int multiplier = 1;

		while (temp > 0) {
			int digit = temp % 10;
			if (digit % 2 == 1) {
				oddShortcut = digit * multiplier + oddShortcut;
				multiplier *= 10;
			}
			temp /= 10;
		}

		int num1 = numbers, num2 = oddShortcut;
		while (oddShortcut != 0) {
			int temp = num2;
			num2 = num1 % num2;
			num1 = temp;
		}

		if (num1 == 7) {
			std::cout << numbers << '\n';
		}
	}
}

int main() {
	task3_2();
	task3_3();

}


