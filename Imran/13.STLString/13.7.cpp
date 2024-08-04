// 13.7. Write a program that compares two strings

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

	if (firstLine == secondLine) {
		cout << "The two lines are equal." << endl;
	} else {
		cout << "The two lines are not equal." << endl;
	}

	return 0;
}