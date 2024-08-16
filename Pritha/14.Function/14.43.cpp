//14.43. Write a function that gets a string and convert it to uppercase

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	string input;
	cout << "enter the line of text: ";
	getline(cin, input);

	cout << "entered text: " << input << endl;

	transform(input.begin(), input.end(), input.begin(), ::toupper);

	cout << "uppercase text: " << input << endl;

	return 0;
}