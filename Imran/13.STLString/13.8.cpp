// 13.8. Write a program that compares two strings without case sensitivity

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	string firstLine;
	string secondLine;

	cout << "Enter the first line of text: ";
	getline(cin, firstLine);

	cout << "Enter the second line of text: ";
	getline(cin, secondLine);

	// make both of them lower
	transform(firstLine.begin(), firstLine.end(), firstLine.begin(), ::tolower);
	transform(secondLine.begin(), secondLine.end(), secondLine.begin(), ::tolower);

	if (firstLine == secondLine) {
		cout << "The two lines are equal." << endl;
	} else {
		cout << "The two lines are not equal." << endl;
	}

	return 0;
}