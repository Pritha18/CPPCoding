// 5.1. Write a program that read a digit and diplay by spelling

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int digit;
	cout << "enter the digit: ";
	cin >> digit;

	if (0 == digit) {
		cout << "Zero" << endl;
	} else if (1 == digit) {
		cout << "One" << endl;
	} else if (2 == digit) {
		cout << "Two" << endl;
	} else if (3 == digit) {
		cout << "Three" << endl;
	} else if (4 == digit) {
		cout << "Four" << endl;
	} else if (5 == digit) {
		cout << "Five" << endl;
	} else if (6 == digit) {
		cout << "Six" << endl;
	} else if (7 == digit) {
		cout << "Seven" << endl;
	} else if (8 == digit) {
		cout << "Eight" << endl;
	} else if (9 == digit) {
		cout << "Nine" << endl;
	} else {
		cout << "Wrong Input" << endl;
	}

	return 0;
}

/*
	Difference between digits and number

	0 1 2 3 4 5 6 7 8 9 is digits for decimal number

	12, 1, 7 13 - these are numbers
*/

/*
	Why the number first

	if (digit == 4) {
		// important operation
	} else {
		// another important operation
	}

	let's say I made a typing mistake
	
	// first if will return true always because experession always return true
	if (digit = 4) { // now this is a assignment operation not condition
		// important operation
	} else {
		// another important operation
	}

	How to solve it?

	if (4 == digit) {
		// important operation
	} else {
		// another important operation
	}

	If you made a mistake

	if (4 = digit) { // it will show compiler error
		// important operation
	} else {
		// another important operation
	}

*/