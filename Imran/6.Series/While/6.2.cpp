// 6.2. Write a program to calculate the series: 2 + 4 + 6 + 8 + ... + n

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	cout << "please enter the value of n: ";
	cin >> n;
	
	int i = 1; // initial value
	int sum = 0; // initially sum needs to set 0

	while (i <= n) {
		if ( i % 2 == 0) {
			sum = sum + i;
		}
		
		++i; // similar to i = i + 1 or i++
	}

	cout << "Series sum is: " << sum << endl;

	return 0;
}