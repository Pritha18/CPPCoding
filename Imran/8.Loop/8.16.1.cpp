// 8.16. Write a program that read two numbers and display GCD(greatest common divisor)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x, y;
	cout << "Pritha, enter two integer variables: ";
	cin >> x >> y;

	int GCD = 0;

	for (int i = 1; i <= x && i <= y; ++i) {
		if (x % i == 0 && y % i == 0) {
			GCD = i;
		}
	}


	cout << "GCD of given numbers is: " << GCD << endl;

	return 0;
}