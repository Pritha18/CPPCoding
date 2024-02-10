
// 1.9. Write a program that read ASCII value and display equivalent character

#include <iostream>
using namespace std;

int main()
{
	// declaring ascii value variable
	int asciiVal;

	// console input
	cout << "enter the ascii value: ";
	cin >> asciiVal;

	cout << "equivalent character of ascii value is: " << char(asciiVal) << endl;

	return 0;
}
