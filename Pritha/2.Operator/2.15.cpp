//2.15. Write a program that read a number and multiply by five using shift operator
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// declaring int variable
	int x;

	cout << "enter the int number: ";
	cin >> x;

	int multipliedNum = (x << 2) + x;

	cout << "resut is: " << multipliedNum << endl;

	return 0;
}