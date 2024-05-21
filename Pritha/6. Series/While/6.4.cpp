//6.4. Write a program to calculate the series: 4 + 12 + 20 + 28 + ... + n

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "please enter the value of n: ";
	cin >> n;

	int i = 4;
	int sum = 0; 

	while (i <= n) {
		sum = sum + i;
		i = i + 8;
	}
	

	cout << "series sum is: " << sum << endl;

	return 0;
}