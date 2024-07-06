// 8.16. Write a program that read two numbers and display GCD(greatest common divisor)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x, y;
	cout << "Pritha, enter two integer variables: ";
	cin >> x >> y;

	// let's assume x will be the small one and y is the big one
	if (x > y) {
		// swap it
		int temp = x;
		x = y;
		y = temp;
	}

	// now, we know x is small and y is big

	while(y % x != 0) {
		int remainder = y % x;
		// the new y will be old x
		y = x;

		// the new x will be the remainder
		x = remainder;
	}

	cout << "GCD of given numbers is: " << x << endl;

	return 0;
}