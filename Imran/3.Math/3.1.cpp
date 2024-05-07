/*
	3.1. Write a program that read any integer number and display absolute value
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	cout << "enter any integer number: ";
	cin >> num;

	int absValue = abs(num);

	cout << "Absolute value of num is: " << absValue << endl;

	return 0;
}