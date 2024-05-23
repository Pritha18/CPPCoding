/*
	6.51. Write a program to print all numbers from 100 to 1.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int i = 100;

	while(i > 0) {
		cout << i << endl;
		--i;
		// i = i - 1;
	}

	return 0;
}