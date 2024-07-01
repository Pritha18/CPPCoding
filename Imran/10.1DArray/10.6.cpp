// 10.6. Write a program that inserts any number in an array

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// delcaring a fixed sized array
	double list[100];

	int decision;
	int index = 0;

	while(true) {
		cout << "Do you want to insert any number in the array (1 ? 0): ";
		cin >> decision;

		if (0 == decision) {
			break;
		}

		int number;
		cout << "enter the number that you want to insert: ";
		cin >> number;

		// list[index] = number;
		// index++;
		list[index++] = number;
	}

	cout << "current array is: ";

	for (int i = 0; i < index; ++i) {
		cout << list[i] << " ";
	}

	cout << endl;

	return 0;
}