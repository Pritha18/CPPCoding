
// 1.10. Wrtie a program that read any character and display equivalent ASCII value

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// declare a char variable
	char asciiChar;

	cout << "enter a characer from ASCII table: ";
	cin >> asciiChar;

	cout << "equivalent ASCII value of entered character is: " << int(asciiChar) << endl; 
	return 0;
}