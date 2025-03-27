#include <iostream>
#include <fstream>
#include <vector>
#include <set>

int main()
{
	std::ifstream file("przyklad.txt");


	std::cout << "Zadanie 4.1 \n";
	int number;
	while (file >> number) {
		int reserved = 0;
		int temp = number;
		while (temp > 0) {
			int digit = temp % 10;
			reserved = reserved * 10 + digit;
			temp /= 10;
		}
		if (reserved % 17 == 0) {
			std::cout << reserved << ", " << "\n";
		}
	}

	std::cout << "Zadanie 4.2 \n";
	int number;
	int maxDifference = 0;
	int numberWithMaxDifference = 0;
	while (file >> number) {
		int reversed = 0;
		int temp = number;
		while (temp > 0) {
			int digit = temp % 10;
			reversed = reversed * 10 + digit;
			temp /= 10;
		}
		int difference = number - reversed;
		if (difference < 0) {
			difference = -difference;
		}
		if (difference > maxDifference) {
			maxDifference = difference;
			numberWithMaxDifference = number;
		}
	}
	std::cout << numberWithMaxDifference << ", " << maxDifference;
}

void ask4_1 {

}
