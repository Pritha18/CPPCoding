//8.16. Write a program that read two numbers and display GCD(greatest common divisor)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x, y;
	cout << "Please enter two integer variables: ";
	cin >> x >> y;

	if (x > y) {
		int temp = x;
		x = y;
		y = temp;
	}

	while(y % x != 0) {
		int remainder = y % x;
		y = x;
		x = remainder;
	}

	cout << "GCD of given numbers is: " << x << endl;

	return 0;
}