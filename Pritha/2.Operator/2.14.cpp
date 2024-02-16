//2.14. Write a program that read a number and multiply by two using shift operator
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// declaring int variable
	int x;

	cout << "enter the int number: ";
	cin >> x;

	int multipliedNum = x << 1;

	cout << "resut is: " << multipliedNum << endl;

	return 0;
}