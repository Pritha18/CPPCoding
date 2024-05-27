//6.12. Write a program to calculate the series: 1^1 + 2^2 + 3^3 + ... + n^n

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "please enter the value of n: ";
	cin >> n;

	int i = 1;
	int sum = 0;

	while (i <= n) {
	      sum = sum + pow(i, i);
	      ++i;
	
	}
	cout << "Series sum is: " << sum << endl;


    return 0;
}
