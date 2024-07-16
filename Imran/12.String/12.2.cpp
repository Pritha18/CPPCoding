// 12.2. Write a program that displays a string (a line)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char promi[64];

	cout << "enter a line: ";
	// cin.get(promi, sizeof(promi));
	cin.getline(promi, sizeof(promi));
	// cin.getline(promi, sizeof(promi), '0');

	cout << "entered line is: " << promi << endl;

	return 0;
}

/*
	cin can not read string with white spaces

	so for reading char string with white spaces we need to use cin.getline()

	basic syntax:

				cin.getline(str, sizeof(str),'\n');

				or we can also write

				cin.getline(str, sizeof(str)); // in this case ending character is  default '\n' - new line character

				Here, str is char string
					'\n' - string ending character (new line character)
*/