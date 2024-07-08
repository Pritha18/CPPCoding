//8.13. Write a program that read any decimal number and display equivalent binary number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int decimal;
	cout << "Please enter the decimal: ";
	cin >> decimal;

	int binDigits[100];
	int binIndex = 0;

	while(decimal != 0) {
		binDigits[binIndex] = decimal % 2;
		binIndex++;
		decimal = decimal / 2;
	}

	cout << "equivalent binary of entered decimal is: ";

	for (int i = binIndex - 1; i >= 0; --i) {
		cout << binDigits[i];
	}

	cout << endl;


	return 0;
}