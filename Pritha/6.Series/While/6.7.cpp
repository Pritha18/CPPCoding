//6.7. Write a program to calculate the series: 2.1 + 5.3 + 8.5 + ... + n(n - nth)


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "please enter the value of n: ";
	cin >> n;

	int i = 2;
	int k = 1;
	int sum = 0;

	while (i <= n) {
		sum = sum + i * (i - k);
		i = i + 3;
		k = k + 1;
		
	}

	cout << "series sum is: " << sum << endl;

	return 0;
}
