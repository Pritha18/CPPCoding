// 4.8. Write a program that read mark and display pass or fail

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double mark;
	cout << "enter the mark: ";
	cin >> mark;

	if (mark >= 33) {
		cout << "Passed" << endl;
	} else {
		cout << "Failed" << endl;
	}

	return 0;
}