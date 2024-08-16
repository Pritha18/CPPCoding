//14.44. Write a function that gets a string and convert it to lowercase

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	string input;
	cout << "enter the line of text: ";
	getline(cin, input);

	cout << "entered text: " << input << endl;

	transform(input.begin(), input.end(), input.begin(), ::tolower);

	cout << "lowercase text: " << input << endl;

	return 0;
}