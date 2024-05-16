//4.13.1 Write a C program to check whether a character is uppercase or lowercase alphabet


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char character;
	cout << "enter the character: ";
	cin >> character;

	
	if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) {
		if (character >= 'A' && character <= 'Z') {
			cout << "character is uppercase" << endl;
		} else {
			cout << "character is lowercase" << endl;
		}
	} else {
		cout << "Invalid Input" << endl;
	}

	return 0;
}