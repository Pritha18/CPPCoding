// 17.1. Write a program that read and display 
// any student's name, roll, and total mark using structure

/*#include <iostream>
using namespace std;

struct Student
{
	char name[25];
	int roll;
	double totalMarks;

	Student() { }

	Student(char _name[25], int _roll, double _totalMarks) 
	{
		name = _name;
		roll = _roll;
		totalMarks = _totalMarks;
	}
};

int main(int argc, char const *argv[])
{
	Student pritha;

	pritha.name = "pritha";
	pritha.roll = 31;
	pritha.totalMarks = 92.87;

	Student promi("pritha", 31, 92.87);
	
	return 0;
} */

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    float totalMarks;
};

int main(int argc, char const *argv[]) {
    Student s;

    cout << "Enter student's name: ";
    getline(cin, s.name);
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter total marks: ";
    cin >> s.totalMarks;

    cout << "\nStudent Information:\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.roll << endl;
    cout << "Total Marks: " << s.totalMarks << endl;

    return 0;
}
