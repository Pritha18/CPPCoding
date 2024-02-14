// 1.5. Write a program that read and display a long number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// declare long variable
	long pritha;

	// prompt user
	cout << "enter the value of long number: " ;

	cin >> pritha;
	cout.precision(4);
	cout << fixed;
	// display the long variable
	cout << "pritha contains: " << pritha << endl;

	return 0;
}
