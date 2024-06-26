/*
	9.2. Write a program that prints all odd numbers between 1 and 20.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	for (int i = 1; i <= 20; ++i) {


		// cout << i << " pritha" << endl;
		// continue will not skip the code above of the "continue statement"

		// continue skips the rest of the code inside a loop 
		// continue;

		if (i % 2 == 0) {
			// what continue does?
			// continue skips the rest of the code inside a loop 
			continue;
		}

		cout << i << endl;
	}

	return 0;
}