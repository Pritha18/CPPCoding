//6.8. Write a program to calculate the series: 1.3 + 3.5 + 5.7 + ... + n(n+2)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "enter the value of n: ";
	cin >> n;

	int sum = 0;
    
    	for (int i = 1, j = 3; i <= n; i += 2, j += 2) {
		sum = sum + i * j;
	}

	cout << "sum of the series is: " << sum << endl;

	return 0;
}