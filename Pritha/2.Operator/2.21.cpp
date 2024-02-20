//2.21. Write a program that read two numbers and display minimum using ternary operator

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

	
	double minimum = x < y ? x : y;

	cout << "the minimum value is: " << minimum << endl;	

	return 0;
}