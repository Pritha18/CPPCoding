// 1.3. Write a program that read and display an integer number

#include <iostream>
using namespace std;

int main(int n, char const *pritha[])
{
	// delaration of int variable
	int num;

	// getting num variable input from console
	cout << "enter the value of num: ";
	cin >> num;

	cout << "num constains: " << num << endl;

	// don't think about it now
	// command line arguments, skipping 0 cause it's the file name
	for (int i = 1; i < n; ++i) {
		cout << pritha[i] << " ";
	}

	cout << endl;

	return 0;
}