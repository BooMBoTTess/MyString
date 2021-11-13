#include "MyString.h"
//github test

int main() {
	const char* fck = "First string";
	string a(fck);
	a.print();

	string b("Second string");
	b.print();
	b.print();
	b = "dshi";
	b.print();
	b = a + ' ' + b + " " + a;
	b.print();
	a.print();
	b = a;
	a = "New first string";
	a.print();
	b.print();

	std::cout << a << ' ' << b << std::endl;
	string c = "3 strings in one";
	std::cout << a << b << ' ' << c << std::endl;

	string ch('s');
	a = a + ch;
	std::cout << ch; // ch умирает
	a = a + ch; // 2 раза включается конструктор, и почему 
	std::cout << a << " TEst this" << std::endl;
	string intstring = "321";
	int bulichka = stoi(intstring);
	/*try {
		std::cout << intstring + 124;
	}
	catch (std::invalid_argument) {
		std::cerr << "pie";
	}*/
	bulichka = bulichka + 300;
	std::cout << bulichka << std::endl; //УМИРАЛО КОГДА В классе было const char* str 

	string cuts = cut(b, 2, 5);
	a + b;
	std::cout << cuts << std::endl;

	b = b + '5';
	std::cout << b << "_____________________________________" << std::endl;

	string object = "dsa";
	a = object + a + cut(b, 1, 6); //+ с char* не работет
	std::cout << a;

	string inp;
	std::cin >> inp;
	std::cout << inp;

	return 0;
}