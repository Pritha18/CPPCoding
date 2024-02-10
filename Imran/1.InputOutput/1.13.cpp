
// 1.13. Write a program that read any decimal number and display equivalent octal number

#include <iostream>
// #include <iomanip> // but it not needed in recent compilers
using namespace std;

int main(int argc, char const *argv[])
{
	// declaring int variable
	int decimalNum;

	cout << "enter the decimal number: ";
	cin >> decimalNum;

	// after cout put oct for 
	cout << oct << "equivalent octal of entered decimal is: " << decimalNum << endl; 

	return 0;
}