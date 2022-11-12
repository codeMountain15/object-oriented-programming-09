// copy_constructor01a.cpp
//

#include <iostream>
using namespace std;

class Subject {
private:
	string title;
	int grade, year;

public:
	// Initialization-list constructor
	Subject(string s, int x, int y) : title(s), grade(x), year(y) {};

	string get_title() const { return title; }
	int get_grade () const { return grade; }
	int get_year() const { return year; }
};

int main()
{
	Subject s1("Object Oriented Programming", 1, 2022); // Constructor
	Subject s2 = s1; // Subject s2(s1);

	cout << s1.get_title() << " " << s1.get_grade() << " " << s1.get_year() << endl;
	cout << s2.get_title() << " " << s2.get_grade() << " " << s2.get_year() << endl;

	return 0;
}
