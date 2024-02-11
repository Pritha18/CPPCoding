

// 1.11. Write a program that read any lower case character and display in upper case

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// char variable
	char lowerCase;

	// taking input from console
	cout << "enter the lower case character: ";
	cin >> lowerCase;

	char upperCase = lowerCase - 32;

	cout << "upper case of entered lower case is: " << upperCase << endl;

	return 0;
}