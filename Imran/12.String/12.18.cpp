// 12.18. Write a program that read and display an array of string

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	cout << "How many string you want to process? ";
	int n;
	cin >> n;

	// since we are taking input of both int and character back to back
	// this getchar will get the endline character to solve the anomaly
	getchar();

	// this is n strings with 512 characters
	char pritha[n][512];

	// this is 512 strings with n characters
	// which is wrong for the problem statement
	// char pritha[512][n];


	// read n strings
	for (int i = 0; i < n; ++i) {
		cin.getline(pritha[i], sizeof(pritha[i]));
	}

	// display the array of strings
	cout << endl;
	for (int i = 0; i < n; ++i) {
		cout << pritha[i] << endl;
	}

	return 0;
}

/*
	getchar() - is a cheatcode to solve the problems create by int and string input 
	back to back

	when getting int input '\n' character which is thrown by the press of the enter ignored

	but string input don't ignore the '\n' character

	that's how we lose the first input of string after a int input
*/