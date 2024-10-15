//15.1. Write a recursive function that gets any positive integer and returns it's factorial

#include <iostream>
using namespace std;

int factorial(int n) {
	if (1 == n) {
		return 1;
	}
	
	return n * factorial(n - 1);
}

int main(int argc, char const *argv[])
{
	int pritha;
	cout << "enter an integer value: ";
	cin >> pritha;

	int result = factorial(pritha);

	cout << "factorial of given number is: " << result << endl;

	return 0;
}