/*
	Write a program that read a positive integer and display sum of its digit
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int number;
	cout << "enter a positive integer: ";
	cin >> number;

	// now let's find the digit sum
	// example: 589, digit sum = 5 + 8 + 9 = 22

	// sum for summation of digits
	int sum = 0; // 0 is for escaping garbage value

	while(number != 0) {
		// adding last digit to the sum
		sum = sum + (number % 10);

		// now we don't need the last digit
		// after adding the first digit, number / 10 will be 0
		// that is when we need to stop
		int newNum = number / 10;
		number = newNum; // neglecting last digit
	}

	cout << "Digit sum is: " << sum << endl;

	return 0;
}

/*
	why number % 10 ?

	24 % 10 = 4
	126 % 10 = 6
	522 % 10 = 2
	589 % 10 = 9

	when we modulus integer with 10, always we get the last digit of the number
*/

/*
	why number = number / 10 ?
	
	24 / 10 = 2
	126 / 10 = 12
	522 / 10 = 52
	589 / 10 = 58
*/

/*
	why number != 0 ?
	
	2 / 10 = 0
	12 / 10 = 1 -> 1 / 10 = 0
	52 / 10 = 5 -> 5 / 10 = 0
	58 / 10 = 5 -> 5 / 10 = 0
*/