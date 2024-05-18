// 6.2. Write a program to calculate the series: 2 + 4 + 6 + 8 + ... + n

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	cout << "please enter the value of n: ";
	cin >> n;
	
	int i = 2; // initial value
	int sum = 0; // initially sum needs to set 0

	while (i <= n) {
		sum = sum + i;
		i = i + 2;
	}

	cout << "Series sum is: " << sum << endl;

	return 0;
}