
// 6.1. Write a program to calculate the series: 1 + 2 + 3 + 4 + ... + n

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	cout << "please enter the value of n: ";
	cin >> n;

	// math rule implementation
	int mathResult = (n * (n + 1)) / 2;
	
	cout << "Series sum using math rule: " << mathResult << endl;

	int sum = 0; // initially sum needs to set 0

	// for loop has 3 parts
	// initial value
	// condition
	// increment or decrement

	for (int i = 1; i <= n; ++i) {
		sum = sum + i;
	}

	cout << "Series sum is: " << sum << endl;

	return 0;
}

/*
	1 + 2 + 3 + .... + n = (n (n + 1)) / 2
*/

/*
	there is 3 loops in c++

		for, while and do while

	but we are gonna learn for loop in this code
*/