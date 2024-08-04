// 13.3. Write a program that read two lines of text and copy second line into first line

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string firstLine;
	string secondLine;

	cout << "Enter the first line of text: ";
	getline(cin, firstLine);

	cout << "Enter the second line of text: ";
	getline(cin, secondLine);

	cout << "before copying firstLine " << firstLine << endl;
	cout << "before copying secondLine " << secondLine << endl;

	cout << endl;

	// copy - just assign like a variable
	firstLine = secondLine;

	cout << "after copying firstLine " << firstLine << endl;
	cout << "after copying secondLine " << secondLine << endl;

	return 0;
}