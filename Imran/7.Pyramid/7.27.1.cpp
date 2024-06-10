/*
	7.27.
			A
			B B
			C C C 
			D D D D
			E E E E E
			D D D D
			C C C
			B B
			A

*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	cout << "enter the value of num: ";
	cin >> num;

	cout << endl << endl;

	int afterMiddle = 0;
	for (int row = 1; row <= num * 2 - 1; ++row) {
		if (row <= num) {
			for (int col = 1; col <= row; ++col) {
				cout << char('A' + row - 1) << " ";
			}
		} else {
			afterMiddle++;
			for (int col = 1; col <= row - afterMiddle * 2; ++col) {
				cout << char('A' + row - 1 - afterMiddle * 2) << " ";
			}
		}

		cout << endl;
	}

	// for (int row = num - 1; row > 0; --row) {
	// 	for (int col = 1; col <= row; ++col) {
	// 		cout << char('A' + row - 1) << " ";
	// 	}

	// 	cout << endl;
	// }

	return 0;
}