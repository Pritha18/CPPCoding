//14.3.2. Write a function that reads two integers and returns Multiplication

#include <iostream>
using namespace std;

int multiply() 
{
	int x, y;

	cout << "Enter two integer variables: ";
	cin >> x >> y;

	int product = x * y;

	return product;
}

int main(int argc, char const *argv[])
{
	int product = multiply();

	cout << "The result is: " << product << endl;

	return 0;
}
