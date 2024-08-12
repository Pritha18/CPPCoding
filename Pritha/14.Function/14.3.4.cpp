//14.3.4. Write a function that gets two integers and returns Multiplication

#include <iostream>
using namespace std;

int multiply(int x, int y)
{
	return x * y;
}

int main(int argc, char const *argv[])
{
	int pritha, imran;

	cout << "Enter two integer variables: ";
	cin >> pritha >> imran;

	int product = multiply(pritha, imran); 

	cout << "The result is: " << product << endl;

	return 0;
}
