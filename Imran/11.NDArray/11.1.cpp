// 11.1. Write a program that read and display read and display a 2D array

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int pritha[3][3];

	float promi[4][2];

	double imran[4][5];

	char sakib[2][100][5];

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cin >> pritha[i][j];
		}
	}

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cout << pritha[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}