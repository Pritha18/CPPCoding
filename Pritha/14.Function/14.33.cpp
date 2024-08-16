//14.33. Write a C++ program to check whether a number is prime or not using functions


#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
    	return false; 
    }

    for (int i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            return false; 
        }
    }
    
    return true; 
}

void result(int number, bool isPrime) {
    if (isPrime) {
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

    bool prime = isPrime(number);

    result(number, prime);

    return 0;
}
