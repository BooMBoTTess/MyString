#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class string {
public:


	//construction
	string() {
		str = "";
		lenght = 0;
	}
	string(const char* s) {
		constructor(s);
	}
	string(const string& s) {
		constructor(s.str);
	}
	string(const char& s) {
		const char c[2] = { s, '\0' };
		const char* bukva = &c[0];
		str = bukva;
		lenght = 1;
	}

	//operators 
	void operator= (const char* s) {
		constructor(s);
	}

	friend std::ostream& operator<< (std::ostream& os, const string& s);
	friend std::istream& operator>> (std::istream& is, const string& s);
	friend string operator+ (string s1, string s2); // str + char; char + str ну или не надо
	friend string operator+ (string s1, char s2);
	const char& operator[] (const int index) {
		const char c = str[index];

		return c;
	}


	//function; 
	friend int stoi(string& s);
	friend string cut(string& s, int& begin, int& end);

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

	const char* str;

	void constructor(const char* s) {
		lenght = strlen(s);
		str = s;
	}
};

string cut(string& s, int begin, int end) {
	if (begin > end) {
		throw std::invalid_argument("Begin value should be less than end");
	}
	string ss = "";
	for (int i = begin; i < end; i++) {
		char f = s[i];
		ss = ss + f;
	}
	return ss;
}
string operator+ (string s1, string s2) {
	char* c = new char[s1.lenght + s2.lenght];
	strcpy(c, s1.str);
	strcat(c, s2.str);
	string s = c;
	return s;
}
string operator+ (string s1, char s2) {
	char* c = new char[s1.lenght + 1];
	char boof[2] = { s2, '\0' };
	strcpy(c, s1.str);
	strcat(c, boof);
	string s = c;
	return s;
}
std::ostream& operator<< (std::ostream& os, const string& s) {
	os << s.str;
	return os;
}
std::istream& operator>> (std::istream& is, const string& s) {
	char c;
	is >> s.str;
	return is;
}
int stoi(string& s) {
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


