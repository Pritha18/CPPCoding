//4.2. Write a program to determine whether a number is divisible by 5 or not

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double number;

	cout << "enter the number: ";
	cin >> number;

	if (number % 5 == 0) {
		cout << "Divisible By 5" << endl;
	} else {
		cout << "Not Divisible By 5" << endl;
	}

	return 0;
}