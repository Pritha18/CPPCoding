#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;

	cout << "enter the value of num: ";
	cin >> num;

	cout << endl << endl; 

	for (int row = 1; row <= num; ++row) {
		for (int col = 1; col <= row; ++col) {
			cout << col << " ";
		}

		cout << endl;
	}


	return 0;
}
