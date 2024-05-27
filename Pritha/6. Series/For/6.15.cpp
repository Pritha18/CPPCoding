//6.15. Write a program to calculate the series: 1.2.3 + 2.3.4 + 3.4.5 + ... + n(n+1)(n+2)


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "enter the value of n: ";
	cin >> n;

	int sum = 0;

	for (int i = 1, j = 2, k = 3; i <= n; ++i, ++j, ++k) {
		sum += i * j * k;
	}

	cout << "sum of the series is: " << sum << endl;

	return 0;
}