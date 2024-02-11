
//Write a program that read any upper case character and display in lower case


#include <iostream>
using namespace std;

int main()
{
	// declaring lowerCase Character variable
	char upperCaseChar;

	// console input
	cout << "enter the upper case character: ";
	cin >> upperCaseChar;
	char lowerCaseChar = tolower(upperCaseChar);

	cout << "lower case Character: " << lowerCaseChar << endl;

	return 0;
}