
// 2.20. Write a program that read two numbers and display maximum using ternary operator

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// declaring two variables
	int xxx;
	double yyy;

	// gettin input from console
	cout << "enter two values" << endl;
	cin >> xxx >> yyy;

	// i am using double
	// because double support both int and double
	// since the result can be both int or double
	double maximum = xxx > yyy ? xxx : yyy;

	cout << "the maximum value is: " << maximum << endl;	

	return 0;
}


/*
	conditon ? statement : another statement
*/