#include <iostream>

/*
Operatory warunkowe:
>-wiêksze
<-mniejszoœæ
>=-wiêksze b¹dŸ równe
<=-mniejsze b¹dŸ równe
==-równe
!=-ró¿ne

Operatory logiczne:
&& - and
! - not 
|| - or 


a	b		a&&b		a||b		!a
F	F		 F			  F			 T
F	T		 F			  T			T
T	F        F			  T			F
T	T		 T			  T			F
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

//Napisz program , który wyœwietli czy liczba jest z zakresu <1,10)
void task3()
{
	int number;
	std::cout << "Podaj liczbe \n";
	std::cin >> number;

	if (number >= 1) //wersja 1
	{
		if (number < 10)
			std::cout << "Liczba jest w przedziale\n";
		else
			std::cout << "Liczba z poza zakresu\n";
	}
	else
		std::cout << "Liczba z poza zakresu";



	if (number >= 1) //wersja 2
		if (number < 10)
			std::cout << "Liczba jest w przedziale\n";
		else
			std::cout << "Liczba z poza zakresu\n";
	else
		std::cout << "Liczba z poza zakresu";



	
	if (number >= 1 && number < 10)  //wersja 3
		std::cout << "Liczba jest w przedziale\n";
	else
		std::cout << "Liczba z poza zakresu\n";


	if (number < 1 || number >= 10)  //wersja 4
		std::cout << "Liczba z poza zakresu\n";
	else 
		std::cout << "Liczba jest w przedziale\n";


	if (!(number >= 1 || number < 10))  //wersja 5
		std::cout << "Liczba z poza zakresu\n";
	else
		std::cout << "Liczba jest w przedziale\n";

}

void task4()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbe\n ";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe\n ";
	std::cin >> secondNumber;

	if (secondNumber != 0)
	{
		int quoitent = firstNumber / secondNumber;
		std::cout << "Wynik dzielenia " << quoitent << "\n";
	}
	else
		std::cout << "Dzielenie przez zero!!! \n";


}

/*
* .Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.
* .Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i wyœwietli wiêksz¹ z nich.
* .Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny.Wyœwietl odpowiedni komunikat.
* .Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
* .Napisz program, który poprosi u¿ytkownika o podanie masy cia³a(w kilogramach) i wzrostu(w metrach).
Na podstawie tych danych oblicz wskaŸnik BMI(Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.
* .Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci trzech odcinków i sprawdzi, czy mo¿na zbudowaæ z nich trójk¹t.Wyœwietl odpowiedni komunikat.
* .Napisz program, który poprosi u¿ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, jeœli jest to mo¿liwe.Wyœwietl wynik lub odpowiedni komunikat, jeœli liczba jest ujemna.
* .Program sprawdzaj¹cy czy podana data jest poprawna(np.sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
*/



//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe.Wyœwietl odpowiedni komunikat.
void task5()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj  liczbe ca³kowit¹\n ";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe ca³kowit¹\n ";
	std::cin >> secondNumber;

	if (secondNumber == firstNumber)
		std::cout << "Liczby s¹ równe\n ";
	else
		std::cout << "Liczby nie s¹ równe\n ";

}

//Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia.Wyœwietl odpowiedni komunikat.
void task6()
{
	int number;
	std::cout << "Podaj wiek \n";
	std::cin >> number;
	if (number >= 18)
		std::cout << "Jesteœ pe³noletni\n";
	else
		std::cout << "Jestes nie pe³noletni\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹. Wyœwietl wynik.
void task7()
{
	int number;
	std::cout << "Podaj liczbe ca³kowit¹ \n";
	std::cin >> number;
	if (number < 0)
		(number* -1);
	std::cout << "Wartoœæ bezwzglêdna: " << number << "/n";
	else 
	std::cout << "Wartoœæ bezwzglêdna: " << number << "/n";
	}

int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();g
	//task3();
	//task4();
	//task5();
	//task6();
	task7();
}