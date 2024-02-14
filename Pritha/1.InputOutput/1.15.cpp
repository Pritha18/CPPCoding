// 1.15. Write a program that read any octal number and display equivalent decimal number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// declaring int variable
	int octalNum;

	cout << "enter the octal value: ";
	
	cin >> oct >> octalNum;

	cout << dec << "equivalent decimal number of entered octal is: " << octalNum << endl;

	return 0;
}
