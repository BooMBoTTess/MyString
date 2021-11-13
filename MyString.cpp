#include "MyString.h"

String::String() {
	str = nullptr;
	lenght = 0;
}
String::String(const char* s) {
	constructor(s);
}
String::String(const String& s) {
	constructor(s.str);
}

String::String(char s) {
	char c[2] = { s, '\0' };
	constructor(c);
}

void String::operator= (const char* s) {
	if (str) {
		delete[] str;
	}
	constructor(s);
}

void String::operator= (const String& s) {
	if (str) {
		delete[] str;
	}
	constructor(s.str);
}
const char& String::operator[] (const int index) {
	const char c = str[index];
	return c;
}
int stoi(String& s) {
	int l = s.lenght;
	//-------------------

	bool flag = true;
	int boof;
	int integer = 0;

	for (int i = 0; i < l; i++) {
		boof = (int)s.str[i];
		if (boof >= 48 && boof <= 57) {
			integer = integer * 10 + (boof - 48);
		}
		else {
			throw std::invalid_argument("Argument should be integer type");
		}
	}
	return integer;
}
String cut(String& s, int begin, int end) {
	if (begin > end) {
		throw std::invalid_argument("Begin value should be less than end");
	}
	String ss = "";
	for (int i = begin; i < end; i++) {
		char f = s[i];
		ss = ss + f;
	}
	return ss;
}
String operator+ (String s1, String s2) {
	char* c = new char[s1.lenght + s2.lenght];
	strcpy(c, s1.str);
	strcat(c, s2.str);
	String s = c;
	return s;
}
String operator+ (String s1, char s2) {
	char* c = new char[s1.lenght + 1];
	char boof[2] = { s2, '\0' };
	strcpy(c, s1.str);
	strcat(c, boof);
	String s = c;
	c = 0;
	return s;
}
std::ostream& operator<< (std::ostream& os, const String& s) {
	os << s.str;
	return os;
}
std::istream& operator>> (std::istream& is, String& s) { //TODO: PEredelat
	char* chars = new char[10]; // он остается((
	is >> chars;
	s = chars;
	delete[] chars;
	return is;
}
void String::constructor(const char* s) {
	lenght = strlen(s);
	str = new char[lenght + 1];
	str[lenght] = '\0';
	for (int i = 0; i < lenght; ++i) {
		str[i] = s[i];
	}
}
