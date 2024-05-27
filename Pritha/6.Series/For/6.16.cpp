//6.16. Write a program to calculate the series: 2.5.8 + 5.8.11 + 8.11.14 + ... + n(n+3)(n+6)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "enter the value of n: ";
	cin >> n;

	int sum = 0;

	for (int i = 2, j = 5, k = 8; i <= n; i = i + 3, j = j + 3, k = k + 3) {
		sum += i * j * k;
	}

	cout << "sum of the series is: " << sum << endl;

	return 0;
}