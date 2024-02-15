
// 2.12. Write a program that read two numbers and display bitwise Exclusive OR

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
	// for example for 5 and 3 result will be 6
	// 5 - 101
	// 3 - 011
	// 6 - 110 (1 is for diffrent digit)
	int exOR = x ^ y;


	cout << "bitwise exlusive OR of entered integers is: " << exOR << endl;

	return 0;
}