// 13.1. Write a program that read a line of text and display it's length

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string pritha;
	cout << "enter the line of text: ";
	getline(cin, pritha);

	cout << "length of the entered line is: " << pritha.length() << endl;
	cout << "length of the entered line is: " << pritha.size() << endl;

	return 0;
}