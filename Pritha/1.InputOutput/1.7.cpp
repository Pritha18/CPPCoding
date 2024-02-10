// 1.7. Write a program that read and display double number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// delcaring double
	double pritha;

	cout << "enter the value of double variable pritha: ";

	cin >> pritha;

    // setting precision
	cout.precision(4); 

	// fixed set digit count after floating point, does not matter if i change precision point without using fixed. it only shows 2 number after the point. only shows whatever point i want if i use precision and fixed both.
	cout << fixed; 

	// displaying the floating point variable
	cout << "pritha contains: " << pritha << endl;

	return 0;
}