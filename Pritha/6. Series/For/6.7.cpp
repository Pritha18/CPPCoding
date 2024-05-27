//6.7. Write a program to calculate the series: 2.1 + 5.3 + 8.5 + ... + n(n - nth)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "enter the value of n: ";
	cin >> n;

	
	int sum = 0;
    
    for (int i = 2, j = 1; i <= n; i +=3, j +=2) {
		sum = sum + i * j;
	}

	cout << "sum of the series is: " << sum << endl;

	return 0;
}