//2.3 Write a program that read two integers and display product


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// delcaring two integer variables
	int x, y;

	cout << "enter two integer values to multiply: ";
	
	// reading two integers from console
	cin >> x >> y;

	int product = x * y;

	cout << "multiplication of two entered integer is: " << product << endl; 

	return 0;
}
