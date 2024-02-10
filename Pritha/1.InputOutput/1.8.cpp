// 1.8. Write a program that read and display any character

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// character variable declaration
	char moon; // does not matter what variable i use or whatever word i use when prompted. it always shows the first letter of whatever word.

	// prompting the user 
	cout << "enter the character variable: ";
	
	// input from console
	cin >> moon;

	
	// displaying the character
	cout << "user entered character is: " << moon << endl;

	return 0;
}