//14.2.2. Write a function that reads two integers and returns Substraction

#include <iostream>
using namespace std;

int subtract() 
{
	int x, y;

	cout << "Enter two integer variables: ";
	cin >> x >> y;

	int difference = x - y;

	return difference;
}

int main(int argc, char const *argv[])
{
	int difference = subtract();

	cout << "The result is: " << difference << endl;

	return 0;
}
