// 13.5. Write a program that read a line of text and display in lowercase 

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	string pritha;
	cout << "enter the line of text: ";
	getline(cin, pritha);

	cout << "entered text: " << pritha << endl;

	// convert to lowercase
	transform(pritha.begin(), pritha.end(), pritha.begin(), ::tolower);

	cout << "lowercase text: " << pritha << endl;

	return 0;
}