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
	std::cout << ch; // ch �������
	a = a + ch;
	std::cout << a << " TEst this" << std::endl;


	String intstring = "3254641";
	int bulichka = stoi(intstring);


	std::cout << intstring + 124;


	bulichka = bulichka + 300;
	std::cout << bulichka << std::endl; //������� ����� � ������ ���� const char* str 

	String cuts = cut(b, 2, 5);
	a + b;
	std::cout << cuts << std::endl;

	b = b + '5';
	std::cout << b << "_____________________________________" << std::endl;

	String object = "dsa";
	a = object + a + cut(b, 1, 6); //+ � char* �� �������
	std::cout << a << std::endl;	
	std::cout << object[1];
	object[1] = 'e';
	std::cout << object[1];
	std::cout << object;

	String obj = "hesd";
	//std::cin >> obj;
	std::cout << obj << std::endl;

	String integer = 1324;
	std::cout << integer << std::endl;


	String  first[5] = { "abcd", "abc", "", "BIG LETTER", "Boobtry" };
	String  second[5] = { "abcdefg", "aac", "wsdw", "big letter", "bOOber" };

	for (int i = 0; i < 5; ++i)
	{
		std::cout << (first[i] < second[i]) << ' ' << first[i]  << '<' << second[i] << std::endl;
	}
	return 0;
}
