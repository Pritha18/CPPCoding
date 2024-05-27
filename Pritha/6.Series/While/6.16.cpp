//6.16. Write a program to calculate the series: 2.5.8 + 5.8.11 + 8.11.14 + ... + n(n+3)(n+6)

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "please enter the value of n: ";
	cin >> n;

	int i = 2;
	int sum = 0;

	while (i <= n) {
	      sum = sum + (i) * (i+3) * (i+6);
	      i i + 3;
	      
	}
	cout << "Series sum is: " << sum << endl;


    return 0;
}
