//2.16. Write a program that read a number and mod by four using bitwise AND
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// declaring int variable
	int x;

	cout << "enter the int number: ";
	cin >> x;

	int result = x & 3;

	cout << "resut is: " << result << endl;

	return 0;
}

/*
	0100
	0100



	0 - 3 : remainder of 4
	0 - 7 : remainder of 8
	0 - 10 : remainder of 11

	so largest possible remainder of a number is n - 1

	that's why we are doing & with n - 1
*/