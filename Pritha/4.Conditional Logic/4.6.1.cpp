//4.6.1 Write a program that read three numbers and display minimum

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x, y, z;

	cout << "enter three int numbers: " << endl;
	cin >> x >> y >> z;

	if (x < y) {
		// that means x < y is true
		if (x < z) {
			cout << x << " is minimum" << endl;
		} else {
			cout << z << " is minimum" << endl;
		}
	} else {
		// here means, x < y is false
		if (y < z) {
			cout << y << " is minimum" << endl;
		} else {
			cout << z << " is minimum" << endl;
		}
	}

	return 0;
}