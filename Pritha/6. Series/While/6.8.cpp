//6.8. Write a program to calculate the series: 1.3 + 3.5 + 5.7 + ... + n(n+2)


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "please enter the value of n: ";
	cin >> n;

	int i = 1;
	int sum = 0;

	while (i <= n) {
		sum = sum + i * (i+2);
		i = i + 2;
	
	}

	cout << "series sum is: " << sum << endl;

	return 0;
}