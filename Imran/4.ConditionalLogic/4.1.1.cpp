
// 4.1. Write a program that read an integer and prints odd or even

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int number;

	cout << "enter the int variable: ";
	cin >> number;

	if (number % 2 == 0) {
		// here means number % 2 == 0 is true
		cout << "Even number" << endl;
	} else {
		// here means number % 2 == 0 is false
		cout << "Odd number" << endl;
	}

	return 0;
}

/*
	% - modulus operator only works with integer
*/