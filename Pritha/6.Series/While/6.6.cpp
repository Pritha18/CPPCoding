//6.6. Write a program to calculate the series: 1.2 + 2.3 + 3.4 + ... + n(n+1)


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "please enter the value of n: ";
	cin >> n;

	int i = 1;
	int j = 2;
	int sum = 0;

	while (i <= n) {
		sum = sum + (i * j);
		++i;
		++j;
	}

	cout << "series sum is: " << sum << endl;

	return 0;
}