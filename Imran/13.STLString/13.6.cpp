// 13.6. Write a program that read a line of text and display in uppercase

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	string pritha;
	cout << "enter the line of text: ";
	getline(cin, pritha);

	cout << "entered text: " << pritha << endl;

	// convert to uppercase
	transform(pritha.begin(), pritha.end(), pritha.begin(), ::toupper);

	cout << "uppercase text: " << pritha << endl;

	return 0;
}