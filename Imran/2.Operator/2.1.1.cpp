
// 2.1. Write a program that read two integer and display sum

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// delcaring two integer variables
	int x, y;

	cout << "enter two integer values to add: ";
	// reading two integers from console
	cin >> x >> y;

	int sum = x + y;

	cout << "sum of two entered integer is: " << sum << endl; 

	return 0;
}