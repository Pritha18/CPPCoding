//12.2. Write a program that displays a string (a line)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char pritha[64];

	cout << "enter a line: ";
	cin.getline(pritha, sizeof(pritha));

	cout << "entered line is: " << pritha << endl;

	return 0;
}
