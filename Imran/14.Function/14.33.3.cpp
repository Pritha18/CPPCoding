//14.33. Write a C++ program to check whether a number is prime or not using functions

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number) {
	if (number < 2) {
		return false;
	}

    // example
    // 121 - half of 121 is 60.5
    // square root of 121 is 11
    // which is much more efficient

    // but one can argue about 121 that it will always return on 11
    // for both sqrt(number) and number / 2 code

    // but let's consider a prime number 
    // very big prime number, let's say 997
    // 997 / 2  = 498.5
    // sqrt(997) = 31.5753
    // you can see the difference

	for (int i = 2; i <= sqrt(number); ++i) {
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
