// 10.2. Write a program that read an array and display sum

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// declaring the array size
	int arraySize;
	cout << "enter the array size: ";
	cin >> arraySize;

	double pritha[arraySize];

	cout << "enter the array elements" << endl;

	for (int i = 0; i < arraySize; ++i) {
		cout << "pritha[" << i << "]: ";
		cin >> pritha[i];
	}

	double sum = 0;

	for (int i = 0; i < arraySize; ++i) {
		sum = sum + pritha[i];
	}

	cout << "Sum of the array is: " << sum << endl;

	return 0;
}