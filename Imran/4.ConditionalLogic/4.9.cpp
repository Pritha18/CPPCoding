// 4.9. Write a program that read mark and display result in grade

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double mark;
	cout << "enter the mark: ";
	cin >> mark;

	cout << "Your grade is ";

	if (mark >= 80) {
		cout << "A+" << endl;
	} else if (mark >= 70) {
		cout << "A" << endl;
	} else if (mark >= 65) {
		cout << "A-" << endl;
	} else if (mark >= 60) {
		cout << "B" << endl;
	} else if (mark >= 50) {
		cout << "C" << endl;
	} else if (mark >= 40) {
		cout << "D" << endl;
	} else if (mark >= 33) {
		cout << "E" << endl;
	} else {
		cout << "F" << endl;
	}

	return 0;
}