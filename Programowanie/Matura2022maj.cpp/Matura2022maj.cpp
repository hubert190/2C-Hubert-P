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




