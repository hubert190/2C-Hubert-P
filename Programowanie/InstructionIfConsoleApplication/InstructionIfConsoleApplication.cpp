#include <iostream>

/*
Operatory warunkowe:
>-większe
<-mniejszość
>=-większe bądź równe
<=-mniejsze bądź równe
==-równe
!=-różne


//DRY - nie powtarzaj się

Operatory logiczne:
&& - and
! - not
|| - or


a	b		a&&b		a||b		!a
F	F		 F			  F			 T
F	T		 F			  T			T
T	F        F			  T			F
T	T		 T			  T			F

pow (number, 0.25) - pierwiatek do potęgi 4
pow (number, 0.5)   lub  sqrt(number)  - pierwiastek do 2

*/

//Napisz program, który wyświetli informacje, czy liczba jest dodatnia czy nie.
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


//Napisz program, który wyświetli informacje o tym czy liczba jest parzysta czy nieparzysta
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

//Napisz program , który wyświetli czy liczba jest z zakresu <1,10)
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



//Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i sprawdzi, czy są one równe.Wyświetl odpowiedni komunikat.
void task5()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj  liczbe całkowitą\n ";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe całkowitą\n ";
	std::cin >> secondNumber;

	if (secondNumber == firstNumber)
		std::cout << "Liczby są równe\n ";
	else
		std::cout << "Liczby nie są równe\n ";

}

//Napisz program, który poprosi użytkownika o podanie wieku i sprawdzi, czy osoba jest pełnoletnia.Wyświetl odpowiedni komunikat.
void task6()
{
	int number;
	std::cout << "Podaj wiek \n";
	std::cin >> number;
	if (number >= 18)
		std::cout << "Jesteś pełnoletni\n";
	else
		std::cout << "Jestes nie pełnoletni\n";
}

//Napisz program, który poprosi użytkownika o podanie liczby całkowitej i obliczy jej wartość bezwzględną. Wyświetl wynik.
void task7()

{
	int number;
	std::cout << "Podaj liczbe całkowitą \n";
	std::cin >> number;
	if (number < 0)
		std::cout << "Wartość bezwzględna: " << number * -1 << " \n";
	else
		std::cout << "Wartość bezwzględna:  " << number << " \n";
}

//Napisz program, który poprosi użytkownika o podanie liczby od 1 do 7 i wyświetli odpowiadający mu dzień tygodnia.
void task8()
{
	int numberOfDay;
	std::cout << "Podaj liczbe od 1 do 7 \n";
	std::cin >> numberOfDay;
	if (numberOfDay == 1)
		std::cout << "Dzień tygodnia to poniedziałek \n";
	if (numberOfDay == 2)
		std::cout << "Dzień tygodnia to wtorek \n";
	if (numberOfDay == 3)
		std::cout << "Dzień tygodnia to środa \n";
	if (numberOfDay == 4)
		std::cout << "Dzień tygodnia to czwartek \n";
	if (numberOfDay == 5)
		std::cout << "Dzień tygodnia to piątek \n";
	if (numberOfDay == 6)
		std::cout << "Dzień tygodnia to sobota \n";
	if (numberOfDay == 7)
		std::cout << "Dzień tygodnia to niedziela \n";
	
	if (numberOfDay < 1 || numberOfDay > 7)
		std::cout << "Liczba nie jest dniem \n ";


	//lub 

	
int dayOfWeek;
std::cout << "Podaj numer dnia tygodnia\n";
std::cin >> dayOfWeek;

if (dayOfWeek == 1)
	std::cout << "Podniedziałek\n";
else if (dayOfWeek == 2)
	std::cout << "Wtorek\n";
else if (dayOfWeek == 3)
	std::cout << "Środa\n";
else if (dayOfWeek == 4)
	std::cout << "Czwartek\n";
else if (dayOfWeek == 5)
	std::cout << "Piątek\n";
else if (dayOfWeek == 6)
	std::cout << "Sobota\n";
else if (dayOfWeek == 7)
	std::cout << "Niedziela\n";
else
	std::cout << "Dzień niepoprawny\n";

//lub

switch (dayOfWeek)
{
case 1:
	std::cout << "Podniedziałek\n";
	break;
case 2:
	std::cout << "Wtorek\n";
	break;
case 3:
	std::cout << "Środa\n";
	break;
case 4:
	std::cout << "Czwartek\n";
	break;
case 5:
	std::cout << "Piątek\n";
	break;
case 6:
	std::cout << "Sobota\n";
	break;
case 0:
case 7:
	std::cout << "Niedziela\n";
	break;
default:
	std::cout << "Dzień niepoprawny\n";
}

}


//Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i wyświetli większą z nich.
void task9()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj 1 liczbe całkowitą \n";
	std::cin >> firstNumber;
	std::cout << "Podaj 2 liczbe całkowitą \n";
	std::cin >> secondNumber;
	if (firstNumber > secondNumber)
		std::cout << "Lczba 1 jest większa od liczby 2 \n";
	else
		std::cout << "Lczba 2 jest większa od liczby 1\n";

}

//Napisz program, który poprosi użytkownika o podanie roku i sprawdzi, czy jest to rok przestępny.Wyświetl odpowiedni komunikat.
void task10()
{
	int year;
	std::cout << "Podaj rok \n";
	std::cin >> year;

	if (year > 0 && year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		std::cout << "Rok jest przestępny";
	else
		std::cout << "Rok nie jest przestępny";

}

//Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyświetl odpowiedni komunikat.
void task11()
{
	int number;
	std::cout << "Podaj liczbe całkowitą \n";
	std::cin >> number;

	if (number / 3 && number / 5 && number % 3 == 0 && number % 5 == 0)
		std::cout << "Liczba jest podzielna przez 3 i 5 \n";
	else
		std::cout << "Liczba nie jest podzielna przez 3 i 5 \n";




}

//Napisz program, który poprosi użytkownika o podanie masy ciała(w kilogramach) i wzrostu(w metrach).
//Na podstawie tych danych oblicz wskaźnik BMI(Body Mass Index) i wyświetl odpowiedni komunikat informujący o stanie zdrowia.
// mniej niż 16 - wygłodzenie
/* 16 - 16.99 - wychudzenie
● 17 - 18.49 - niedowaga
● 18.5 - 24.99 - wartość prawidłowa
● 25 - 29.99 - nadwagac 
● 30 - 34.99 - I stopień otyłości
● 35 - 39.99 - II stopień otyłości
● powyżej 40 - otyłość skrajna
*/

void task12()
{
	int weight, height, bmi;
	std::cout << "Podaj wagę w kilogramach \n";
	std::cin >> weight;
	std::cout << "Podaj wysokość w metrach \n";
	std::cin >> height;
	bmi = weight / (height * height);
	if (bmi < 16)
		std::cout << "wygłodzenie";
	if (bmi >= 16 && bmi <= 16.99)
		std::cout << "wychudzenie";
	if (bmi >= 17 && bmi <= 18.49)
		std::cout << "niedowaga";
	if (bmi >= 18.5 && bmi <= 24.99)
		std::cout << "wartość prawidłowa";
	if (bmi >= 15 && bmi <= 29.99)
		std::cout << "nadwaga";
	if (bmi >= 30 && bmi <= 34.99)
		std::cout << "I stopień otyłości";
	if (bmi >= 35 && bmi <= 39.99)
		std::cout << "II stopień otyłości";
	if (bmi > 20)
		std::cout << "otyłość skrajna";

}


//Napisz program, który poprosi użytkownika o podanie długości trzech odcinków i sprawdzi, czy można zbudować z nich trójkąt. Wyświetl odpowiedni komunikat.
void task13() 
{
	int firstSection, secondSection, thirdSection;
		std::cout << "Podaj dł. odcinka 1 ";
	std::cin >> firstSection;
	std::cout << "Podaj dł. odcinka 2 ";
	std::cin >> secondSection;
	std::cout << "Podaj dł. odcinka 3 ";
	std::cin >> thirdSection;
	if (firstSection > secondSection + thirdSection && secondSection > firstSection + thirdSection && thirdSection > secondSection + firstSection)
		std::cout << "Można zbudować trójkąt ";
	else
		std::cout << "Nie można zbudować trójkąta";
}

//Napisz program, który poprosi użytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, jeśli jest to możliwe.Wyświetl wynik lub odpowiedni komunikat, jeśli liczba jest ujemna.
void task14()
{
	int number, root;
	std::cout << "Podaj liczbe dodatnią ";
	std::cin >> number;
	root = sqrt(number);
	if (root < 0)
		std::cout << "Liczba jest ujemna ";
	else
		std::cout << "Pierwiastek kwadratowy z liczby wynosi: " << root;

}


//Program sprawdzający czy podana data jest poprawna(np.sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)
void task15()
{
	{
		int day, month, year;
		std::cout << "Podaj dzień\n";
		std::cin >> day;
		std::cout << "Podaj miesiąc\n";
		std::cin >> month;
		std::cout << "Podaj rok\n";
		std::cin >> year;

		if (day >= 1 && day <= 31
			&& month >= 1 && month <= 12
			&& year != 0

			&& ((month == 4 || month == 6 || month == 9 || month == 11) && day != 31)

			&& month == 2 && (day >= 28
				|| day == 29 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
			)
		{
			std::cout << "Data " << day << "." << month << "." << year << " jest poprawna\n";
		}
		else
		{
			std::cout << "Data nie jest poprawna";
		}
	}
}


int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
	//task13();
	//task14();
	//task15();
}

