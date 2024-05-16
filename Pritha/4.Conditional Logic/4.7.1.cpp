// 4.7.1 Write a program that read three numbers and display median

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x, y, z;

	cout << "enter three int numbers: " << endl;
	cin >> x >> y >> z;

	if (x > y) {
		if (x < z) {
			cout << "median is " << x << endl;
		} else {
			// x > z
			if (y > z) {
				cout << "median is " << y << endl;
			} else {
				cout << "median is " << z << endl;
			}
		}

	} else {
		// x < y
		if (x > z) {
			cout << "median is " << x << endl;
		} else {
			// x < z
			if (y < z) {
				cout << "median is " << y << endl;
			} else {
				cout << "median is " << z << endl;
			}
		}
	}

	return 0;
}
