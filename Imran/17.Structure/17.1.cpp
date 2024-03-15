
// 17.1. Write a program that read and display 
// any student's name, roll, and total mark using structure

#include <iostream>
using namespace std;

// user define variable struct
struct Student
{
	char name[25];
	int roll;
	double totalMarks;

	// must add default constructor when adding other constructor
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
}