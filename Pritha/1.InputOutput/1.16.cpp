// 1.16. Write a program that read any hexadecimal number and display equivalent decimal number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// declaring int variable
	int hexaDecimalNum;

	cout << "enter the hex value: ";
	// setting hexadecimal input from console
	cin >> hex >> hexaDecimalNum;

	cout << dec << "equivalent decimal number of entered hexadecimal is: " << hexaDecimalNum << endl;

	return 0;
}
