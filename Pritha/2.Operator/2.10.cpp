//2.10. Write a program that read two numbers and display bitwise AND
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// delcaring two integer variables
	int x, y;

	cout << "enter two integer values to add: ";
	cin >> x >> y;

	int bitAND = x & y;


	cout << "bitwise AND of entered integers is: " << bitAND << endl;

	return 0;
}