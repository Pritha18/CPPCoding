/*
	3.14. Write a program that read two numbers base, power and display the value of base^power
*/

#include <iostream>
#include <cmath>
// #include <math.h> 
using namespace std;

int main(int argc, char const *argv[])
{
	double base, power;
	cout << "enter the base: ";
	cin >> base;

	cout << "enter the power: ";
	cin >> power;

	double result = pow(base, power);

	cout << "Result is: " << result << endl;

	return 0;
}

/*
	math.h or cmath

	you can use anything

	both are same
*/