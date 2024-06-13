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

	for (int row = 1; row <= num; ++row) {
		for (int col = 1; col <= row; ++col) {
			cout << char('A' + row - 1) << " ";
		}

		cout << endl;
	}

	for (int row = num - 1; row > 0; --row) {
		for (int col = 1; col <= row; ++col) {
			cout << char('A' + row - 1) << " ";
		}

		cout << endl;
	}

	return 0;
}