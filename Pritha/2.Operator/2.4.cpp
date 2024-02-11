//2.4 Write a program that read two integers and divide them

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// delcaring two integer variables
	int x, y;

	cout << "enter two integer values to divide: ";
	
	// reading two integers from console
	cin >> x >> y;

	int division = x / y; //this only works for higher/lower but not for lower/higher

	cout << "division of two entered integer is: " << division << endl; 

	return 0;
}
