/*
	Pointer is a variable which points or refer to other variable's address

	int pointer points or refers to int variable's address
	float pointer points or refers to float variable's address
	double pointer points or refers to double variable's address
	char pointer points or refers to char variable's address
	bool pointer points or refers to bool variable's address
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	

	// declaring a double pointer
	double *dPtr;

	// declaring a float pointer
	float *fPtr;

	// declaring a char pointer
	char *cPtr;

	// declaring a bool pointer
	bool *bPtr;


	int pritha = 21;
	// address-of operator
	cout << "value of pritha is: " << pritha << endl;
	cout << "address of pritha is: " << &pritha << endl;

	// dereference only works with addresses
	// so the following will give you error 
	// cout << "value of pritha is: " << *pritha << endl;


	// declaring int pointer will be
	int *ptr;
	ptr = &pritha;

	// or we could have done it in following way
	// int *ptr = &pritha;
	// but not in the following way it will generate error
	
	// here, asterisk operator is in action
	// int *ptr;
	// here, you are doing dereferencing, so dereference in action
	// so *ptr will expect a int value since, ptr is an address which holds int value
	// but we are giving an int variable address
	// that's why it will show error
	// *ptr = &pritha;
	
	cout << "value of ptr is: " << ptr << endl;
	cout << "value of pritha is: " << *ptr << endl;

	cout << endl;

	int imran = 121;
	ptr = &imran;

	// address-of operator
	cout << "value of imran is: " << imran << endl;
	cout << "address of imran is: " << &imran << endl;

	cout << "value of ptr is: " << ptr << endl;
	cout << "value of imran is: " << *ptr << endl;

	return 0;
}