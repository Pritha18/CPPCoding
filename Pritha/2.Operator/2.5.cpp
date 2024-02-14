// 2.5. Write a program that read two floating point numbers and divide them

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// delcaring two double variables
	double x, y;

	cout << "enter two floating values to divide: ";
	// reading two integers from console
	cin >> x >> y;

	double result = x / y;

	cout << "result is: " << result << endl;

	return 0;
}