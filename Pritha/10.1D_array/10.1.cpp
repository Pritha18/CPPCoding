//10.1. Write a program that read and display an array

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int arraySize;
	cout << "enter the array size: ";
	cin >> arraySize;

	int array[arraySize];

	cout << "enter the array elements" << endl;

	for (int i = 0; i < arraySize; ++i) {
		cout << "array[" << i << "]: ";
		cin >> array[i];
	}

	cout << endl;

	for (int i = 0; i < arraySize; i++) {
		cout << "array[" << i << "]: ";
		cout << array[i] << endl;
	}


	return 0;
}