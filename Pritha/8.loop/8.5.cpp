//8.5. Write a program that read a positive integer and display sum of its digit


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int number;
	cout << "enter a positive integer: ";
	cin >> number;

	int sum = 0; 

	while(number != 0) {
		sum = sum + (number % 10);
		number = number / 10; 
	}
	
	cout << "Digit sum is: " << sum << endl;

	return 0;
}