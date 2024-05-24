
// 6.1. Write a program to calculate the series: 1 + 2 + 3 + 4 + ... + n

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "enter the value of n: ";
	cin >> n;

	
	int sum = 0;

	for (int i = 1; i <= n; ++i) {
		sum = sum + i;
	}

	cout << "sum of the series is: " << sum << endl;

	return 0;
}

/*
	for (initialization ; condition; increment or decrement) {
		statements
	}

	while (condition) {
		statements
	}

	for our need, we tailored while loop like this

	initialization
	while (condition) {
		statements
		increment or decrement

	}
*/