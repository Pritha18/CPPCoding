
// 1.15. Write a program that read any octal number and display equivalent decimal number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// declaring int variable
	int octalNum;

	cout << "enter the octal value: ";
	// setting octal input from console
	cin >> oct >> octalNum;

	cout << dec << "equivalent decimal number of entered octal is: " << octalNum << endl;

	return 0;
}

/*
	hex - to print numbers in hexadecimal base

	oct - to print numbers in octal base

	dec - to print numbers in decimal base

	dec is active by default for input output stream

	these are the memebers of iomanip headers

	sometimes we need to include the header like this,

	#include <iomanip>

	sometimes it work without including the header iomanip

	In update compilers don't need to include iomanip
*/