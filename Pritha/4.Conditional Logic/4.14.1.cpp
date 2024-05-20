/*
	4.14. Write a program to generate a simple arithmetic calculator
	
	hints: 
	enter two numbers: 6 5
	select the menu:
	1. Add
	2. Subtract
	3. Multiply
	4. Divide
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double x, y;

	cout << "enter the two numbers: ";
	cin >> x >> y;

	cout << "enter the operation to apply with these two numbers: ";
	char operation;
	cin >> operation;

	double result = 0;

	if ('+' == operation) {
		result = x + y;
	} else if ('-' == operation) {
		result = x - y;
	} else if ('*' == operation) {
		result = x * y;
	} else if ('/' == operation) {
		if (0 != y) {
			result = x / y;
		} else {
			cout << "Math Error!!! We can't divide by zero." << endl;
		}
	} else if ('%' == operation) {
		if (0 != y) {
			result =  int(x) % int(y);
		} else {
			cout << "Math Error!!! We can't divide by zero." << endl;
		}
	} else {
		cout << "Invalid operation" << endl;
	}

	cout << "The result is: " << result << endl;

	return 0;
}