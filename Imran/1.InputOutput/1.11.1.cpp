
// 1.11. Write a program that read any lower case character and display in upper case

#include <iostream>
using namespace std;

int main()
{
	// declaring lowerCase Character variable
	char lowerCaseChar;

	// console input
	cout << "enter the lower case character: ";
	cin >> lowerCaseChar;
	char upperCaseChar = toupper(lowerCaseChar);

	cout << "UpperCase Character: " << upperCaseChar << endl;

	return 0;
}
