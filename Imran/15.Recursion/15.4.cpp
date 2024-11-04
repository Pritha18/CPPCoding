/*
	15.4. Write a recursive function that prints the Fibonacci series.
*/

#include <iostream>
using namespace std;

int fibonacci(int n) {
	if (0 == n || 1 == n) {
		// cout << n << " ";
		return n;
	}


	int current = fibonacci(n - 1) + fibonacci(n - 2);
	cout << current << " ";

	return current;
}


int main(int argc, char const *argv[])
{
	fibonacci(5);


	return 0;
}