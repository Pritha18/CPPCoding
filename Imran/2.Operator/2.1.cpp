
// 2.1. Write a program that read two integer and display sum

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// delcaring two integer variables
	int x, y;

	// reading two integers from console
	cout << "enter the first integer: ";
	cin >> x;
	cout << "enter the second integer: ";
	cin >> y;

	int sum = x + y;

	cout << "sum of two entered integer is: " << sum << endl; 

	return 0;
}