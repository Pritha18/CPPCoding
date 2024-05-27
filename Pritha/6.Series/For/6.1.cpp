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