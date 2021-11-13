#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

//TODO: CLASS В .h объявления функций в .cpp

class String {
public:


	//construction
	String();
	String(const char* s);
	String(const String& s);
	String(char s);

	//operators 
	void operator= (const char* s); 
	void operator= (const String& s);

	friend std::ostream& operator<< (std::ostream& os, const String& s);
	friend std::istream& operator>> (std::istream& is, const String& s);
	friend String operator+ (String s1, String s2); // str + char; char + str ну или не надо 
	friend String operator+ (String s1, char s2);
	const char& operator[] (const int index);

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
};


