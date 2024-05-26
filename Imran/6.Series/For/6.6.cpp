// 6.6. Write a program to calculate the series: 1.2 + 2.3 + 3.4 + ... + n(n+1)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "enter the value of n: ";
	cin >> n;

	
	int sum = 0;

	for (int i = 1; i <= n; ++i) {
		sum = sum + i * (i + 1);
	}

	cout << "sum of the series is: " << sum << endl;

	return 0;
}