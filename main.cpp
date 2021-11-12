#include "MyString.h"
//github test

int main() {
	const char* fck = "dsafdsfsd";
	string a(fck);
	//a.print();

	string b("dsad");
	//b = "dshi";
	//b.print();

	string c = "lupikupipa";
	//c.print();

	/*std::cout << b << std::endl;
	string copied = b;
	copied.print();
	b = "iukyyikhj";
	b.print();
	copied.print();*/

	//std::cout << a << b << c << std::endl;
	string ch('s');

	int errfds = 321;
	//std::cout << ch;

	//c = c + '5';
	//std::cout << c;

	string cuts = cut(c, 3, 8);
	//std::cout << cuts;


	//string ss = cut(c, 2, 5);
	//std::cout << ss;

	/*const char* f;
	const char g[3] = { 'h','g', '\0'};
	f = &g[0];
	std::cout << f;*/

	return 0;
}