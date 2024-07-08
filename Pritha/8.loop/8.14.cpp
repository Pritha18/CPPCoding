//8.14. Write a program that read any decimal number and display equivalent octal number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int decimal;
	cout << "Please enter the decimal: ";
	cin >> decimal;

	int octDigits[100];
	int octIndex = 0;

	while(decimal != 0) {
		octDigits[octIndex] = decimal % 8;
		octIndex++;
		decimal = decimal / 8;
	}

	cout << "equivalent octal of entered decimal is: ";

	for (int i = octIndex - 1; i >= 0; --i) {
		cout << octDigits[i];
	}

	cout << endl;


	return 0;
}