#include <iostream>
/*Typy znakowe
-char-1 bajt, ca³kowitoliczbowa ze znakiem <-128, 127>
*/


//Napisz program, ktory pobierze od u¿ytkownika znak i wyœwietli go.
void task1()
{
	char characterFromUser;
	std::cout << "Podaj znak\n";
	std::cin >> characterFromUser;
	std::cout << "Poda³eœ znak: " << characterFromUser;
}



//Napisz program, który wczyta znak z klawiatury 
//i sprawdzi czy jest to ma³a litera alfabetu.
void task2()
{
	unsigned char characterFromUser;
	std::cout << "Podaj znak\n";
	std::cin >> characterFromUser;

	//if (characterFromUser >= 97 && characterFromUser <= 122)
	if (characterFromUser >= 'a' && characterFromUser <= 'z')
		std::cout << "Jest to ma³a litera alfabetu\n";
	else
		std::cout << "Nie jest to ma³a litera alfabetu\n";

	/*char x = 'a';
	std::cout << x;
	x = 'g' + 1;
	std::cout << x;
	x = 100;
	std::cout << x;*/

}

//napisz program, który poprosi cie o imie
void task3()
{
	std::string userName;
	std::cout << "Podaj swoje imie \n";
	std::cin >> userName;

	std::cout << "witaj " << userName << " tutaj.\n";


}

//program sprawdzaj¹cy czy podane has³o jest zgodne z has³em "abc123"
void task4()
{
	std::string password;
	std::cout << "podaj has³o\n";
	std::cin >> password;

	if (password == "abc123")
		std::cout << "has³o prawdziwe";
	else
		std::cout << "has³o nie poprawne";
}

//napisz program, który sprawdzi ile w ³añcuchu znaków jest lirer 'a'
void task6()
{
	std::string textFromUser;
	std::cout << "Podaj ³añcuch znaków\n";
	std::cin >> textFromUser;

	int numberOfCharacters = 0;

	//std::cout << "pierwszy znak to" << textFromUser[0]<<"\n";
	//textFromUser[1]='x';
	//std::cout << "iloœæ znaków " << textFromUser.length() << "\n";

	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a')
			numberOfCharacters++;
	}
	std::cout << "iloœæ ma³ych liter a wynosi: " << numberOfCharacters << "\n";
}

/*

* Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami (czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
* Program wyci¹gaj¹cy informacje z numeru PESEL
* Program implementuj¹cy algorytm szyfrowania Cezara (proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).

* Program który na wejœciu przyjmie równanie a na wyjœciu da równanie w odwrotnej notacji polskiej ONP. Np. na wejœciu 2+3*4 na wyjœcu da 234*+
* Program, który na wejœciu przyjmie rówanie w ONP a na wyjœciu wyœwietli wynik rówania.
* Algorytm szyfrowania AtBash Cipher - algorytm szyfruj¹cy, w którym ka¿da litera jest zamieniana na literê z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
*/

//Napisz program, który bêdzie prosi³ o has³o.Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
void task7()
{
	std::string password;


	do {
		std::cout << "podaj has³o\n";
		std::cin >> password;
	} while (password != "abc123");
	std::cout << "has³o poprawne";

}

//* Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
void task8()
{
	std::string chracterOfNumbers;;
	std::cout << "Podaj ³añcuch znaków\n";
	std::cin >> chracterOfNumbers;;
	int numberOfCharacters = 0;
	int numberOfVowels = 0;
	int numberOfconsonants = 0;
	for (int i = 0; i < chracterOfNumbers.length(); i++)
	{
		if
			(
				chracterOfNumbers[i] == 'a' ||
				chracterOfNumbers[i] == '¹' ||
				chracterOfNumbers[i] == 'e' ||
				chracterOfNumbers[i] == 'ê' ||
				chracterOfNumbers[i] == 'i' ||
				chracterOfNumbers[i] == 'o' ||
				chracterOfNumbers[i] == 'ó' ||
				chracterOfNumbers[i] == 'u' ||
				chracterOfNumbers[i] == 'y'
				) numberOfVowels++;
		else
			numberOfconsonants++;
	}
	std::cout << "samog³oski:" << numberOfVowels << " spó³g³oski:" << numberOfconsonants;

}

//*Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym.Nastêpnie skonwertuj tê liczbê na system dwójkowy(binarny) i wyœwietl wynik.
void task9()
{
	int numberOfUser, rest = 0;
	std::string numberBin;
	std::cout << "podaj liczbe\n";
	std::cin >> numberOfUser;
	while (numberOfUser != 0)
	{
		rest = numberOfUser % 2;
		numberOfUser /= 2;
		if (rest == 0)
			numberBin = "0" + numberBin;
		else
			numberBin = "1" + numberBin;
	}
	
	std::cout << numberBin;
}

//*Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem(czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
void task10()
{

}


//Algorytm szyfrowania AtBash Cipher - algorytm szyfruj¹cy, w którym ka¿da litera jest zamieniana na literê z przeciwnej strony alfabetu(np.A na Z, B na Y itd.)
void task11()
{
	char word,reversedWord;
	std::cout << "Podaj ci¹g znaków";
	std::cin >> word;

	for (int i = 0; i < .length(); i++)
	{

	}
	

}




int main()
{
	setlocale(LC_CTYPE, "polish");
	task10();

}

