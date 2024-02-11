
// 2.6. Write a program that read two integer and display remainder

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// delcaring two integer variables
	int x, y;

	cout << "enter two integer values to add: ";
	// reading two integers from console
	cin >> x >> y;

	// this will return int part of the result
	int result = x / y;


	// % - modulus operator
	int remainder = x % y;

	cout << "result is: " << result << endl;
	cout << "remainder is: " << remainder << endl;

	return 0;
}