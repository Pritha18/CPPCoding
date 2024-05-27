//6.9. Write a program to calculate the series: 1^2 + 2^2 + 3^2 + ... + n^2


#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "enter the value of n: ";
	cin >> n;

	int sum = 0;
    
    	for (int i = 1; i <= n; ++i) {
		sum = sum + pow(i, 2);
	}

	cout << "sum of the series is: " << sum << endl;

	return 0;
}