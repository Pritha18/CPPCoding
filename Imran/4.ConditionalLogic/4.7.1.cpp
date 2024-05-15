
// 4.7. Write a program that read three numbers and display median

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

/*
	what is median
	
	middle value

	5 9 2 7 4
	if odd (n + 1) / 2
	(5 + 1) / 2 = 3 
	sorted in ascending order - 2 4 5 7 9
	median - 5

	5 9 2 7 4 8
	if even numbers (n) / 2 and (n / 2) + 1
	6 / 2 = 3, so 3 an 4 will be candidate
	(3th + 4th) / 2
	sorted in ascending order - 2 4 5 7 8 9
	median - (5 + 7) / 2 - 6
*/