#include "MyString.h"
#include <iostream>

int main() {
	const char* fck = "First string";
	String a(fck);
	a.print();

	String b("Second string");
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
	String c = "3 strings in one";
	std::cout << a << b << ' ' << c << std::endl;

	String ch('j');
	a = a + ch;
	std::cout << ch; // ch óìèðàåò
	a = a + ch;
	std::cout << a << " TEst this" << std::endl;


	String intstring = "3254641";
	int bulichka = stoi(intstring);


	std::cout << intstring + 124;


	bulichka = bulichka + 300;
	std::cout << bulichka << std::endl; //ÓÌÈÐÀËÎ ÊÎÃÄÀ Â êëàññå áûëî const char* str 

	String cuts = cut(b, 2, 5);
	a + b;
	std::cout << cuts << std::endl;

	b = b + '5';
	std::cout << b << "_____________________________________" << std::endl;

	String object = "dsa";
	a = object + a + cut(b, 1, 6); //+ ñ char* íå ðàáîòåò
	std::cout << a << std::endl;	
	std::cout << object[1];
	object[1] = 'e';
	std::cout << object[1];
	std::cout << object;

	String obj;
	std::cin >> obj;
	std::cout << obj << std::endl;

	String integer = 1324;
	std::cout << integer;
	return 0;
}
