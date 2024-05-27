//6.13. Write a program to calculate the series: 1.1^2 + 2.3^2 + 3.5^2 + ... + n.(n + nth - 1)^2


#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "enter the value of n: ";
	cin >> n;

	int sum = 0;
    
    	for (int i = 1, j = 1; i <= n; ++i, j +=2) {
		sum = sum + i * pow(j, 2);
	}

	cout << "sum of the series is: " << sum << endl;

	return 0;
}