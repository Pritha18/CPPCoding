//6.10. Write a program to calculate the series: 1^2 + 3^2 + 5^2 + ... + n^2

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "enter the value of n: ";
	cin >> n;

	
	int sum = 0;
    
    for (int i = 1, j = 2; i <= n; i +=2) {
		sum = sum + pow(i, j);
	}

	cout << "sum of the series is: " << sum << endl;

	return 0;
}