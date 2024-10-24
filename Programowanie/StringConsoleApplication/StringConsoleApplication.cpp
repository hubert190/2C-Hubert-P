#include <iostream>

int main()
{
	std::string text;

	text = "Hello";
	std::cout << "napisz tekst na pocz¹tku" << text<<"\n";
	std::cout << "d³ugoœæ ³añcucha to: " << text.length() << "\n";
	std::cout << "czy zmienna jest pusta: " << text.empty() << "\n";
	text.append("World");
	//text = text + ("World");
	// text = +"world";
	std::cout << "nasz tekst na: " << text << "\n";
	//"Hello world";
	std::string subText = text.substr(7, 5);
	std::cout << "skopiowany podtekst" << subText << "\n";

	text = "Ala ma kota";
	text.replace(0, 3, "Ola");
	std::cout << "nasz tekst na: " << text << "\n";

	//text = text.substr(0, 3) + " nie" + text.substr(3, text.length() - 3);
	text.insert(3, " nie");
	std::cout << "nasz tekst na: " << text << "\n";
}
