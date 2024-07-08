// 10.2. Write a program that read an array and display sum

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int arraySize;
	cout << "enter the array size: ";
	cin >> arraySize;

	double array[arraySize];

	cout << "enter the array elements" << endl;

	for (int i = 0; i < arraySize; ++i) {
		cout << "array[" << i << "]: ";
		cin >> array[i];
	}

	double sum = 0;

	for (int i = 0; i < arraySize; ++i) {
		sum = sum + array[i];
	}

	cout << "Sum of the array is: " << sum << endl;

	return 0;
}