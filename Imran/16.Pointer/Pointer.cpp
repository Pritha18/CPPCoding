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

	// there is another syntax to declare pointers
	// actually this is not a separate syntax, this is just writing style of some coders
	// but this also works
	// you will find this style syntax in lots of code
	

	cout << endl;


	double marks = 95.97;

	cout << "value of marks is: " << marks << endl;
	cout << "address of marks is: " << &marks << endl;


	// here asterisk is with the variable
	double *promi;
	promi = &marks;

	// here, promi is a pointer, so it's value will be an address
	cout << "value of promi is: " << promi << endl;

	// using dereference to show holding value of an address
	// since it is pointing to address of marks
	// it will show the value of marks
	cout << "value of marks is: " << *promi << endl;
 
	cout << endl;

	// here asterisk is with the data type
	double* sakib = &marks;

	// here, sakib is a pointer, so it's value will be an address
	cout << "value of sakib is: " << sakib << endl;

	// using dereference to show holding value of an address
	// since it is pointing to address of marks
	// it will show the value of marks
	cout << "value of marks is: " << *sakib << endl;

	cout << endl;

	double cgpa = 3.04;
	
	cout << "value of cgpa is: " << cgpa << endl;
	cout << "address of cgpa is: " << &cgpa << endl;

	sakib = &cgpa;


	// here, sakib is a pointer, so it's value will be an address
	cout << "value of sakib is: " << sakib << endl;

	// using dereference to show holding value of an address
	// since it is pointing to address of cgpa
	// it will show the value of cgpa
	cout << "value of cgpa is: " << *sakib << endl;

	// and both are valid


	// let's talk about another common mistake in pointers
	
	// as we know we can declare multiple variables like this
	double area, volume;

	// we can also declare multiple pointers like this
	// here we are declaring two char type pointer variable
	char *black, *white;
	

	// then what is the common mistake

	// let's try to declare multiple variables in the new type syntax style

	// problem is this declaration is
	// here nayeem is double type pointer variable
	// where linkon is only double type variable
	
	// just commenting this to avoid error
	// since we have multiple variables of these names
	// code works fine
	// double* nayeem, linkon;

	// to fix this we can use
	// now both of them is pointer variable
	double* nayeem, *linkon;

	// funnily enough
	// there is another syntax style
	float * fVal;

	// you will again run into multiple variable declaration problem

	// here, only medha is the float type pointer variable
	// but arongka is only float type variable
	float * medha, arongka;

	// to fix this use the same way as earlier
	float * munir, *horidas;

	return 0;
}