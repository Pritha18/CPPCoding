//6.11. Write a program to calculate the series: 1^3 + 2^3 + 3^3 + ... + n^3

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "enter the value of n: ";
	cin >> n;

	
	int sum = 0;
    
    for (int i = 1, j = 3; i <= n; ++i) {
		sum = sum + pow(i, j);
	}

	cout << "sum of the series is: " << sum << endl;

	return 0;
}