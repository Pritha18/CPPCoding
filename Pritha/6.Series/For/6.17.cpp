//6.17. Write a program to calculate the series: 5.6.7 + 6.7.8 + 7.8.9 + ... + n(n+1)(n+2)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "enter the value of n: ";
	cin >> n;

	int sum = 0;

	for (int i = 5, j = 6, k = 7; i <= n; ++i, ++j, ++k) {
		sum += i * j * k;
	}

	cout << "sum of the series is: " << sum << endl;

	return 0;
}