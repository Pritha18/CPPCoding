
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

	while(y == 0) {
		cout << "Math error"
		cout << "we can not divide anything with zero" << endl;
		cout << "enter second variable which is not zero"
		cin >> y;
	}

	// this will return int part of the result
	int result = x / y;


	// % - modulus operator
	int remainder = x % y;

	cout << "result is: " << result << endl;
	cout << "remainder is: " << remainder << endl;

	return 0;
}