//2.11. Write a program that read two numbers and display bitwise OR
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// delcaring two integer variables
	int x, y;

	cout << "enter two integer values to add: ";
	cin >> x >> y;

	int bitOR = x | y;


	cout << "bitwise OR of entered integers is: " << bitOR << endl;

	return 0;
}