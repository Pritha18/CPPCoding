// 12.18. Write a program that read and display an array of string

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	cout << "How many string you want to process? ";
	int n;
	cin >> n;
	getchar();

	char pritha[n][512];

	for (int i = 0; i < n; ++i) {
		cin.getline(pritha[i], sizeof(pritha[i]));
	}

	cout << endl;
	for (int i = 0; i < n; ++i) {
		cout << pritha[i] << endl;
	}

	return 0;
}
