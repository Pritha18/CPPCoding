// 13.4. Write a program that read two lines of text and add second line with first line

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

	cout << "before merging/adding firstLine " << firstLine << endl;

	cout << endl;

	// merging / adding
	firstLine = firstLine + secondLine;

	cout << "after merging/adding firstLine " << firstLine << endl;

	return 0;
}