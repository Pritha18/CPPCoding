
// 2.10. Write a program that read two numbers and display bitwise AND

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// delcaring two integer variables
	int x, y;

	cout << "enter two integer values to add: ";
	// reading two integers from console
	cin >> x >> y;

	// bit wise and operates in binary level
	// for example for 5 and 3 result will be 1
	// 5 - 101
	// 3 - 011
	// 1 - 001 (1 is for both 1)
	int bitAND = x & y;


	cout << "bitwise AND of entered integers is: " << bitAND << endl;

	return 0;
}