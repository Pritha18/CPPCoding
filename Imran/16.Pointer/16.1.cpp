
// 16.1. Write a program that read any number and 
// display it with pointer variables.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int pritha = 20;

	// int type pointer variable will point to 
	// int type variable addres
	int *imran = &pritha;

	cout << "addres of variable pritha is: " << imran << endl;
	cout << "value of variable pritha is: " << pritha << endl;
	cout << "value of variable pritha through pointer is: " << *imran << endl;

	// changing value using dereferencing 
	// pointer variable imran is changing the value of variable here
	// which's address it is holding
	*imran = 55;
	cout << "value of variable pritha is: " << pritha << endl;

	int promi;

	imran = &promi;
	*imran = 75;

	cout << "address of variable promi is: " << imran << endl;
	cout << "value of variable promi through pointer is: " << *imran << endl;


	return 0;
}

/*
	pointer operators
	& - address of - use to acess variable address
	* - asterick or dereferencing operator - mainly being used 
	    with pointer variable

	int *imran;
	int* imran; // only applicable for single variable
	int *imran, *sakib;
*/