#include <iostream>

struct point
{
	double x;
	double y;
};

void getPointValue(point &p)
{
	std::cout << "podaj x\n";
	std::cin >> p.x;
	std::cout << "podaj y\n";
	std::cin >> p.y;
}

//Napisz program który obliczy odleg³oœæ punktu 2D od innego punktu

void task2()
{


	//double x, y;
	point firstPoint;
	getPointValue (firstPoint);
	double distance = sqrt(firstPoint.x * firstPoint.x + firstPoint.y * firstPoint.y);
	std::cout << "odleg³oœæ: " << distance << '\n';
}