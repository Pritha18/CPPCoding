/*
	4.12. Write a program to input any character and check whether it 
	is alphabet, digit or special character
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char character;
	cout << "enter the character: ";
	cin >> character;

	if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) {
		cout << "input character is alphabet" << endl;
	} else if (character >= '0' && character <= '9') {
		cout << "input character is digit" << endl;
	} else if (character != ' ') {
		cout << "input character is special character" << endl;
	}

	return 0;
}