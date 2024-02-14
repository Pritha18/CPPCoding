// 1.14. Write a program that read any decimal number and display equivalent hexadecimal number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// declaring int variable
	int decimalNum;

	cout << "enter the decimal number: ";
	cin >> decimalNum;

	// after cout put hex for 
	cout << hex << "equivalent hexadecimal of entered decimal is: " << decimalNum << endl; 

	//setting uppercase
	cout.setf(ios::uppercase);

	cout << hex << "equivalent hexadecimal of entered decimal is: " << decimalNum << endl; 

	return 0; 
}