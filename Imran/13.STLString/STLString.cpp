
#include <iostream>
// #include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string pritha;

	// read single word
	cin >> pritha;
	// since we are taking input of both int and character back to back
	// this getchar will get the endline character to solve the anomaly

	// this anomaly can also occur if we use cin and getline back to back
	getchar();

	cout << "single line output: " << pritha << endl; 

	string imran;

	// read a line
	// getline input is little different for stl string than character string
	getline(cin, imran);

	// this gonna fail
	// since string variable has no predetermined size
	// string variables are dynamic
	// cin.getline(imran, sizeof(imran));

	cout << "line of text: " << imran << endl;

	// Array of string
	// this is 5 size array of string
	// similar as fundamental variables
	string promi[5];

	return 0;
}

/*
	C++ has four fundamental data types

	Integer - int
	Character - char
	Floating point - float
	Double size floating point - double

	But modern languages have another datatype which called string

	For long time C++ did not any data type for string

	to remedy the situation modern compilers introduced STL string as a library

	Recently it also included std workspace.

	That's why some people call it STL string and some people call it std string
*/