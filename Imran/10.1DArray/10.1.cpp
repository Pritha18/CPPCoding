
// 10.1. Write a program that read and display an array

#include <iostream>
using namespace std;

void arrayIntro() {
	// declaring a single variable
	int imran;

	// array's will hold only one type

	// declaring an int array
	// this will hold only int values
	// this is holding 5 int varibales under pritha
	int pritha[5];

	pritha[0] = 1;
	pritha[1] = 2;
	pritha[2] = 5;
	pritha[3] = 3;
	pritha[4] = 6;

	// this will hold only double values
	// this is holding 10 double varibales under promi
	double promi[10] = {0}; // it only applicable for zero

	// this will hold only char values
	char sakib[256];
}

int main(int argc, char const *argv[])
{
	// declaring an array

	int arraySize;
	cout << "enter the array size: ";
	cin >> arraySize;

	int pritha[arraySize];

	cout << "enter the array elements" << endl;

	for (int i = 0; i < arraySize; ++i) {
		cout << "pritha[" << i << "]: ";
		cin >> pritha[i];
	}

	// printing a blank line
	cout << endl;

	// display the array
	for (int i = 0; i < arraySize; i++) {
		cout << "pritha[" << i << "]: ";
		cout << pritha[i] << endl;
	}


	return 0;
}