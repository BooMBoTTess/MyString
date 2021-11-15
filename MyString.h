#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class String {
public:


	//construction
	String();
	String(const char* s);
	String(const String& s);
	String(char s);
	String(int s);

	//operators 
	void operator= (char* s); 
	void operator= (const String& s);

	friend std::ostream& operator<< (std::ostream& os, const String& s);
	friend std::istream& operator>> (std::istream& is, String& s);
	friend String operator+ (const String s1, const String s2); // str + char; char + str ну или не надо 
	friend String operator+ (const String s1, const char s2);
	friend String operator+ (const String s1, const int s2);

	friend bool operator> (const String& lhs, const String& rhs);
	friend bool operator< (const String& lhs, const String& rhs);
	friend bool operator== (const String& lhs, const String& rhs);

	char& operator[] (const int index);

	//function; 
	friend int stoi(String& s);
	friend String cut(String& s, int begin, int end); // обработать end > lenght;

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

	void constructor(const char* s);
	friend int compare(const String& lhs, const String& rhs);
};
