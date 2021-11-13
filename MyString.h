#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
// TODO: CLASS В .h объявления функций в .cpp

class String {
public:


	//construction
	String() {
		str = nullptr;
		lenght = 0;
	}
	String(const char* s) {
		constructor(s);
	}
	String(const String& s) {
		constructor(s.str);
	}

	String(char s) { // УМЕР 'd'
		char c[2] = { s, '\0' };
		constructor(c);
	}

	//operators 
	void operator= (const char* s) {
		if (str) {
			delete[] str;
		}
		constructor(s);
	}

	void operator= (const String& s) {
		if (str) {
			delete[] str;
		}
		constructor(s.str);
	}

	friend std::ostream& operator<< (std::ostream& os, const String& s);
	friend std::istream& operator>> (std::istream& is, const String& s);
	friend String operator+ (String s1, String s2); // str + char; char + str ну или не надо 
	friend String operator+ (String s1, char s2);
	const char& operator[] (const int index) {
		const char c = str[index];
		return c;
	}


	//function; 
	friend int stoi(String& s);
	friend String cut(String& s, int& begin, int& end); // обработать end > lenght;

	//output
	void print(bool endl = true) {
		if (endl)
			std::cout << str << std::endl;
		else
			std::cout << str;
	}

	int len() {
		return lenght;
	}

	//destruction

private:
	int lenght;
	
	 char* str = nullptr;

	void constructor(const char* s) {
		lenght = strlen(s);
		str = new char[lenght+1];
		str[lenght] = '\0';
		for (int i = 0; i < lenght; ++i) {
			str[i] = s[i];
		}
	}
};

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
std::istream& operator>> (std::istream& is,  String& s) { // TODO: PEredelat
	char* chars = new char[10]; // он остается((
	is >> chars;
	s = chars;
	delete[] chars;
	return is;
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


