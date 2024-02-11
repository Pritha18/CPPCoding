
// 2.4. Write a program that read two integers and divide them

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// delcaring two integer variables
	int x, y;

	cout << "enter two integer values to add: ";
	// reading two integers from console
	cin >> x >> y;

	// here x and y is int
	// if you divide an int with an int
	// result will be an int
	// if you divide 5 / 2, result will be 2
	// if you divide 2 / 5, result will be 0

	// because 5 / 2 will only return float 
	// when one of them if float/double among diviser and divider
	int result = x / y;

	cout << "result is: " << result << endl;

	// 5 / 2, result will be 2
	// even if result variable is double, diviser and divider is int
	double doubleResult = x / y;

	cout << "double result is: " << doubleResult << endl;

	// doubleResult = x / double(y);
	doubleResult = double(x) / y;

	cout << "double result after type casting: " << doubleResult << endl;

	return 0;
}