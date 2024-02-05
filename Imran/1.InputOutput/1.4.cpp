
// 1.4. Write a program that read and display floating point number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// declaring floating point number
	float x;

	// prompting user
	cout << "enter the value of floating point number: " ;

	// taking floating point variable input from console
	cin >> x;

	// displaying the floating point variable
	cout << "x contains: " << x << endl;

	return 0;
}

/*
	there are two floating point data types in c++

	1. float - 4 byte - 3.1416
	2. double - 8 byte - 3.1416

*/