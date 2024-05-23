//6.18. Write a program to calculate the series: 1.3.5.7 + 3.5.7.9 + 5.7.9.11 + ... + n(n+2)(n+4)(n+6)

//6.15. Write a program to calculate the series: 1.2.3 + 2.3.4 + 3.4.5 + ... + n(n+1)(n+2)


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
	      sum = sum + (i) * (i+2) * (i+4) * (i+6);
	      i = i + 2;
	      
	}
	cout << "Series sum is: " << sum << endl;


    return 0;
}
