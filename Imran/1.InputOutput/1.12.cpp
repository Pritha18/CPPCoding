
// Write a program that read any upper case character and display in lower case

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// char variable
	char upperCase;

	// taking input from console
	cout << "enter the upper case character: ";
	cin >> upperCase;

	char lowerCase = upperCase + 32;

	cout << "lower case of entered upper case is: " << lowerCase << endl;

	return 0;
}