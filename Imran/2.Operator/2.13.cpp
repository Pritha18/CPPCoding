
// 2.13. Write a program that read a number and divide by two using shift operator

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// declaring int variable
	int x;

	cout << "enter the int number: ";
	cin >> x;

	// right shif 1 digit means divide the number with 2
	// since, bitwise operator works on bitwise level
	int dividedNum = x >> 1;

	cout << "resut is: " << dividedNum << endl;

	return 0;
}