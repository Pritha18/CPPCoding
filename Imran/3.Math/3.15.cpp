/*
	3.15. Write a program that read any number and display it's square root
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	double num;
	cout << "enter any number for square root: ";
	cin >> num;

	double result = sqrt(num);

	cout << "square root of num is: " << result << endl;

	return 0;
}