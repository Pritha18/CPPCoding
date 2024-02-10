
// 1.16. Write a program that read any hexadecimal number and 
// display equivalent decimal number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// declaring int variable
	int hexaDecimalNum;

	cout << "enter the octal value: ";
	// setting hexadecimal input from console
	cin >> hex >> hexaDecimalNum;

	cout << dec << "equivalent decimal number of entered hexadecimal is: " << hexaDecimalNum << endl;

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