// 16.1. Write a program that read any number and display it with pointer variables.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int pritha = 50;

	int *imran = &pritha;

	cout << "addres of variable pritha is: " << imran << endl;
	cout << "value of variable pritha is: " << pritha << endl;
	cout << "value of variable pritha through pointer is: " << *imran << endl;


	*imran = 80;
	cout << "value of variable pritha is: " << pritha << endl;

	int promi;

	imran = &promi;
	*imran = 25;

	cout << "address of variable promi is: " << imran << endl;
	cout << "value of variable promi through pointer is: " << *imran << endl;


	return 0;
}

