//2.17. Write a program that read a number and mod by eight using bitwise AND
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// declaring int variable
	int x;

	cout << "enter the int number: ";
	cin >> x;

	int result = x & 7;

	cout << "resut is: " << result << endl;

	return 0;
}