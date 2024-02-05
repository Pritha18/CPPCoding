
// 1.7. Write a program that read and display double number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// delcaring double
	double pritha;

	// prompting user
	cout << "enter the value of double variable pritha: ";

	// taking input from console
	cin >> pritha;


	// setting precision
	// set total digits count
	// without fixed, total digit count
	// with fixed, digit count after floating point
	cout.precision(2); 

	// fixed set digit count after flating point
	cout << fixed; // by default 6 digits after dot if we use fixed

	// displaying the floating point variable
	cout << "pritha contains: " << pritha << endl;

	return 0;
}