//2.20. Write a program that read two numbers and display maximum using ternary operator

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// declaring two variables
	int x;
	double y;

	// gettin input from console
	cout << "enter two values" << endl;
	cin >> x >> y;

	
	double maximum = x > y ? x : y;

	cout << "the maximum value is: " << maximum << endl;	

	return 0;
}