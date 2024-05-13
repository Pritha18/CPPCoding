// 5.1. Write a program that read a digit and diplay by spelling

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int digit;
	cout << "enter the digit: ";
	cin >> digit;

	switch (digit) {
		case 0:
			cout << "Zero" << endl;
			break; // work is done, now break the sequence
			// if we don't use break
			// it will continue to execute following statements

		case 1:
			cout << "One" << endl;
			break;

		case 2:
			cout << "Two" << endl;
			break;

		case 3:
			cout << "Three" << endl;
			break;

		case 4:
			cout << "Four" << endl;
			break;

		case 5:
			cout << "Five" << endl;
			break;

		case 6:
			cout << "Six" << endl;
			break;

		case 7:
			cout << "Seven" << endl;
			break;

		case 8:
			cout << "Eight" << endl;
			break;

		case 9:
			cout << "Nine" << endl;
			break;

		default:
			cout << "Wrong Input" << endl;
			break;
	}


	return 0;
}

/*
	Difference between digits and number

	0 1 2 3 4 5 6 7 8 9 is digits for decimal number

	12, 1, 7 13 - these are numbers
*/