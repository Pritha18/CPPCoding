
// 1.8. Write a program that read and display any character

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// character variable declaration
	char tweety;

	// prompting the user 
	cout << "enter the character variable: ";
	
	// input from console
	cin >> tweety;

	
	// displaying the character
	cout << "user entered character is: " << tweety << endl;

	return 0;
}

/*
	char data type - 1 byte - 8 bit

	it can hold only one character

	valid characters are shown in ASCII table
*/