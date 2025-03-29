﻿#include <iostream>
#include <fstream>
#include <vector>


void zadanie4_1()
{
    std::ifstream file("przyklad.txt");
    std::vector<int> numbers;
    int number;

    std::cout << "Zadanie 4.1 \n";
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
}

void zadanie4_2() {
	std::ifstream file("przyklad.txt");
	std::vector<int> numbers;

	int number;
	int maxDifference = 0;
	int numberWithMaxDifference = 0;
	std::cout << "Zadanie 4.2 \n";

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
	std::cout << numberWithMaxDifference << ", " << maxDifference << "\n";
	}
	
void zadanie4_3() {
    std::ifstream file("przyklad.txt");
    int number; 

    std::cout << "Zadanie 4.3\n";

    while (file >> number) {
        int isPrime = true;
        if (number < 2) {
            isPrime = false;
        }
        else {
            for (int i = 2; i * i <= number; i++) {
                if (number % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (!isPrime) {
            continue;
        }

        int reversed = 0;
        int temp = number;
        while (temp > 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }
        int isReversedPrime = true;
        if (reversed < 2) {
            isReversedPrime = false;
        }
        else {
            for (int i = 2; i * i <= reversed; i++) {
                if (reversed % i == 0) {
                    isReversedPrime = false;
                    break;
                }
            }
        }
        if (isReversedPrime) {
            std::cout << number << "\n";
        }
    }
}

void zadanie4_4() {
        std::ifstream file("przyklad.txt"); 
        std::vector<int> numbers; 
        int number;

        while (file >> number) {
            numbers.push_back(number);
        }

        std::cout << "Zadanie 4.3\n";

        std::vector<int> uniqueNumbers; 
        std::vector<int> counts;        

        for (int i = 0; i < numbers.size(); i++) {
            int found = false;
            for (int j = 0; j < uniqueNumbers.size(); j++) {
                if (numbers[i] == uniqueNumbers[j]) {
                    counts[j]++; 
                    found = true;
                    break;
                }
            }
            if (!found) {
                uniqueNumbers.push_back(numbers[i]); 
                counts.push_back(1); 
            }
        }

        int uniqueCount = uniqueNumbers.size(); 
        int countTwo = 0;  
        int countThree = 0;

        for (int i = 0; i < counts.size(); i++) {
            if (counts[i] == 2) {
                countTwo++;
            }
            else if (counts[i] == 3) {
                countThree++;
            }
        }
        std::cout << uniqueCount << " " << countTwo << " " << countThree << "\n";
    }

    




int main()
{
    zadanie4_1();
	zadanie4_2();
    zadanie4_3();
    zadanie4_4();
}
	

