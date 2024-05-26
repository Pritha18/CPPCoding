// 6.18. Write a program to calculate the series: 1.3.5.7 + 3.5.7.9 + 5.7.9.11 + ... + n(n+2)(n+4)(n+6)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "enter the value of n: ";
	cin >> n;

	int sum = 0;

	for (int i = 1, j = 3, k = 5, l = 7; i <= n; i = i + 2, j = j + 2, k = k + 2, l = l + 2) {
		sum += i * j * k * l;
	}

	cout << "sum of the series is: " << sum << endl;

	return 0;
}