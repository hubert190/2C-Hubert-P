#include <iostream>
#include <cmath>


class Trapeze {
private:
	double a, b, h, c, d;
public:
	Trapeze(double a, double b, double h, double c, double d)
		: a(a), b(b), h(h), c(c), d(d) {}

	double area() {
		return ((a + b) / 2) * h;
	}
	double circuit() {
		return a + b + c + d;
	}
};

class Rhombus {
public:
	Rhombus(double a, double h) : a(a), h(h) {}
	double area() {
		return a * h;
	}
	double circuit() {
		return 4 * a;
	}
private:
	double a, h;
};

class Parallelogram {
private: 
		double a, b, h;

public:
	Parallelogram(double a, double b, double h) : a(a),b(b), h(h) {}
	double area() {
		return a * h;
	}

	double circuit() {
		return 2 * (a + b);
	}
};

class Rectangle {
private:
	double a, b, h;

public:
	Rectangle(double a, double h) : a(a), h(h) {}
	double area() {
		return a * b;
	}

	double circuit() {
		return 2 * (a + b);
	}
};

class Square {
private:
	double a, b, h;

public:
	Square(double a) : a(a) {}
	double area() {
		return a * a;
	}

	double circuit() {
		return 4*a;
	}
};


int main()
{
	Trapeze Trapeze(4,4,3, 4, 5);
	std::cout << "pole trapezu: " << Trapeze.area() << "\n";
	std::cout << "obwód trapezu: " << Trapeze.circuit() << "\n";
}


