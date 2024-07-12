// 11.1.1. Write a program that read and display read and display a 2D array

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int row, col;
	cout << "please enter row and col: ";
	cin >> row >> col;

	int pritha[row][col];

	cout << "please enter the 2D array or matrix" << endl;

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			cout << "pritha[" << i << "][" << j << "] = ";
			cin >> pritha[i][j];
		}
	}

	cout << "enter 2D array / matrix is " << endl;

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			cout << pritha[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}