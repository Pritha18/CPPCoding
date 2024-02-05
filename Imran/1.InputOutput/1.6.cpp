
// Write a program that read and display a long integer number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	long int promi;

	cout << "enter the integer number promi: " << endl;
	cin >> promi;

	cout << "promi contains: " << promi << endl;

	return 0;
}

/*
	int - 2 byte - -32768 to 32767
	long int - 4 byte - -2147483648 to 2147483647
	long long int - 8 byte - -9223372036854775808 to 9223372036854775807

	right now most new compilers support

	int - 4 byte
	short int - 2 byte
*/