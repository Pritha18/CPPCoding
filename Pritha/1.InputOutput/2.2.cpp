// 2.2 Write a program that subtracts two integers


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// delcaring two integer variables
	int x, y;

	cout << "enter two integer values to subtract: ";
	// reading two integers from console
	cin >> x >> y;

	int subtract = x - y;

	cout << "subtraction of two entered integer is: " << subtract << endl; 

	return 0;
}