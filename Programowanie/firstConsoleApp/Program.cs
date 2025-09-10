using System.Runtime.InteropServices;

Console.Write("Hello, World! \n");
Console.WriteLine("Hello, World!");

string name = "Jan";
string lastname = "Kowalski";
Console.WriteLine("Witaj " + name + " " + lastname + " " + "tutaj!!!");
Console.Write("Witaj {0} {1} tutaj!!!", name, lastname);

Console.WriteLine($"Witaj {name} {lastname} tutaj!!!");
Console.WriteLine("predkosc to km//h");
Console.WriteLine(@"predkosc to km/h");

int firstNumber = 5;
int secondNumber = firstNumber;
secondNumber++;
Console.WriteLine($"Pierwsza liczba: {firstNumber}");
Console.WriteLine($"Pierwsza liczba: {secondNumber}");

//----------------------------------------------------

//przekazywanie wartości
void ParametrTest_v1(int p)
{
    Console.WriteLine($"Parametr: {p}");
    p++;
    Console.WriteLine($"Parametr: {p}");
}

firstNumber = 15;
Console.WriteLine($"przed {firstNumber}");
ParametrTest_v1(firstNumber);
Console.WriteLine($"po {firstNumber}");
//Parametr_v1(99);