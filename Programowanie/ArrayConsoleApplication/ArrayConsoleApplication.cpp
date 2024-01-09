#include <iostream>

//Napisz program, który wczyta np. 5 liczb, a nastêpnie wyœwietli je w odwrotnej kolejnoœci.
void task1()
{
    const unsigned short ARRAY_SIZE = 5;
    //std::cout << ARRAY_SIZE; b³¹d!!!
    int numbers[ARRAY_SIZE];
    //numbers[2]=70;

    /* std::cout << "Podaj dan¹ \n";
    std::cin << numbers[0];
    std::cout << "Podaj dan¹ \n";
    std::cin << numbers[1];
    std::cout << "Podaj dan¹ \n";
    std::cin << numbers[2];
    std::cout << "Podaj dan¹ \n";
    std::cin << numbers[3];
    std::cout << "Podaj dan¹ \n";
    std::cin << numbers[4];*/
    
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << "podaj dan¹\n";
        std::cin >> numbers[i];
    }
    std::cout << "Podane dane w odwrotnej kolejnoœci:\n";
    for (int i = ARRAY_SIZE-1;i >= 0;  i--)
    {
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
}

//Napisz program obliczaj¹cy œredni¹ arytmetyczn¹ elementów liczb ca³kowitych



int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}


