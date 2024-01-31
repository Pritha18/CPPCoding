// 1.2. An integer variable n contains 5. Write a program that prints value of n.

#include <iostream>
// #define PI 3.1416
using namespace std;

const double PI = 3.1416;

int main()
{
	int n;

	n = 5;

	cout << "N contains: " << n << endl;

	return 0;
}

/*
	C++ Data Type - 5

	Integer - int
	Floating point - float, double
	Character - char
	Boolean - bool

*/

/*
	Z - Integer number

	int n = 3.75;
	cout << n << endl; // output will be 3
*/

/*
	variable declaration

	int x;
	int y;

	int x, y;

	int pritha;

	assign and initialization

	assign

	int n; // declare
	n = 5; // assign


	int n = 5; // initialization
*/

/*
	garbage value

	int n;
	cout << "N contains: " << n << endl;
*/

/*
	variable naming rule

	not allowed rule - space

	int pri tha; // error
	int pri_tha;

	not allowed rule - digit can not be used at first

	int 3a; // error
	int _3a;
	int a3;


	not allowed rule - can't use any symnbol in variable naming

	! @ # $ % ( )

	not allowed rule - can't use reserve keywords for variable naming

	int true;
	int double;
	int struct;
	int class;
	int init;
*/
