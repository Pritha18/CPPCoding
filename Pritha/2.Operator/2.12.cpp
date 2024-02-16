//2.12. Write a program that read two numbers and display bitwise Exclusive OR
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// delcaring two integer variables
	int x, y;

	cout << "enter two integer values to add: ";
	cin >> x >> y;

	int exOR = x ^ y;


	cout << "bitwise exOR of entered integers is: " << exOR << endl;

	return 0;
}