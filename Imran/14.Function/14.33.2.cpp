//14.33. Write a C++ program to check whether a number is prime or not using functions

#include <iostream>
using namespace std;

bool isPrime(int number) {
	if (number < 2) {
		return false;
	}

    // example
    // 4, half of 4 is 2
    // if we dont use <= for number / 2 this will give wrong answer
	for (int i = 2; i <= number / 2; ++i) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}

void checkPrime(int number) {
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
}

int main(int argc, char const *argv[]) 
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    checkPrime(number);

    return 0;
}
