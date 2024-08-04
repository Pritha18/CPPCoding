// 13.2. Write a program that read a line of text and display it in reverse order

#include <iostream>
// #include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	string pritha;
	cout << "enter the line of text: ";
	getline(cin, pritha);

	cout << "entered text: " << pritha << endl;

	// reverse it
	reverse(pritha.begin(), pritha.end());

	cout << "reversed text: " << pritha << endl;

	return 0;
}