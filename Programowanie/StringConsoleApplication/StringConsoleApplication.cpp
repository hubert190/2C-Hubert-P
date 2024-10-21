#include <iostream>

int main()
{
	std::string text;

	text = "Hello";
	std::cout << "napisz tekst na pocz¹tku" << text<<"\n";
	std::cout << "d³ugoœæ ³añcucha to: " << text.length() << "\n";
	std::cout << "czy zmienna jest pusta: " << text.empty() << "\n";
}
