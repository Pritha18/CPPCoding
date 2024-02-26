
// 4.1. Write a program that read an integer and prints odd or even

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int number;

	cout << "enter the int variable: ";
	cin >> number;

	if (number % 2 == 0) {
		cout << "Even number" << endl;
	}

	if (number % 2 == 1) {
		cout << "Odd number" << endl;
	}

	return 0;
}

/*
	% - modulus operator only works with integer
*/