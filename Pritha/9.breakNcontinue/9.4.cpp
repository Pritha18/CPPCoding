//9.4. Write a program that uses nested loops to find a pair of numbers (i, j) such that 
// i ranges from 1 to 5 and j ranges from 1 to 5, and their product is 12.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	bool found = false; // found is indicating we found the pair or not
	// int found = -1; // here found value -1 is indicating that pair is not found yet

	for (int i = 1; i <= 5; ++i) {
		for (int j = 1; j <= 5; ++j) {
			if (i * j == 12) {
				cout << "Found a pair: (" << i << ", " << j << ")" << endl;
				found = true;

				// here, using -1 as a indicator that we found the value
				// we can use any value except the initial value, in this case it's -1
				// found = 1;

				// break only breaks the inner loop
				// so found is important to break the outer loop
				break; 
			}
		}


		// here, i need to remember the initial set value
		// if (-1 != found) {
		// 	break;
		// }

		if (found) {
			break;
		}
	}

	// the value is still the initial value
	// it means we did not found the pair

	// if (-1 == found) {
	// 	cout << "No pair found!" << endl;
	// }

	if (!found) {
		cout << "No pair found!" << endl;
	}

	return 0;
}
