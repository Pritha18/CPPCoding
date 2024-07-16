/*
	What is string?

	Some people gonna say, string is array of characters but that's not entirely true

	string is sequence of characters terminated by a null character

	Now what is the null character?
	null character is simply this symbol, '\0'

	Normally char pritha[10] will have 10 positions for array of characters

	but for string case pritha[10] will have 9 positions for sequence of characters. 
	the last position will be used for null character

	As you can see I deliberately used array for characters and sequence for string.

	Most advanced languages made a clear difference in array of chracters and string with
	2 different data types.

	But in C/C++,

	We can decalare string in two ways

	1. using array of characters with null characters at the end of it
		char str[5] = {'h', 'e', 'l', 'l', 'o'}; // which is array of characters
		char str[6] = {'h', 'e', 'l', 'l', 'o', '\0'}; // which is a string

	2. using sequence of characters
		std::string str = "hello"; // this is a string using sequence
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char pritha[5];

	// take input for array of characters
	cout << "enter chracters" << endl;
	for (int i = 0; i < 5; ++i) {
		cin >> pritha[i];
	}

	cout << "entered characters are: ";
	for (int i = 0; i < 5; ++i) {
		cout << pritha[i] << " ";
	}

	cout << endl;

	// take a input of string
	cout << "enter the string: ";
	cin >> pritha;

	cout << "entered string is: " << pritha << endl;


	return 0;
}