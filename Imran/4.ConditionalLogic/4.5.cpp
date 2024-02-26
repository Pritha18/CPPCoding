
// 4.5. Write a program that read three numbers and display maximum
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x, y, z;

	cout << "enter three int numbers: " << endl;
	cin >> x >> y >> z;

	if (x > y) {
		// that means x > y is true
		if (x > z) {
			cout << x << " is maximum" << endl;
		} else {
			cout << z << " is maximum" << endl;
		}
	} else {
		// here means, x > y is false
		if (y > z) {
			cout << y << " is maximum" << endl;
		} else {
			cout << z << " is maximum" << endl;
		}
	}

	return 0;
}