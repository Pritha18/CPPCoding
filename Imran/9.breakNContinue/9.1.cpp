
/*
	9.1. Write a program that finds the first multiple of 7 between 50 and 100.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// -1 is just a indicating value
	// this can be any value
	int firstMultiple = -1; // why i used -1

	for (int i = 50; i <= 100; ++i) {
		if (i % 7 == 0) {
			// found  the first multiple of 7
			// save it
			firstMultiple = i;

			// now break the loop
			// break statement breaks the loop
			break;
		}
	}

	// if i still found -1 means i did not find the target
	if (-1 == firstMultiple) {
		cout << "first multiple is not found" << endl;
	} else {
		// otherwise, i found the target
		cout << "first multiple is: " << firstMultiple << endl;
	}

	return 0;
}