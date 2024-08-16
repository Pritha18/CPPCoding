//14.37. Write a C program to find all prime numbers between a given interval using functions.


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

void displayPrime(int start, int end) {
    cout << "Prime numbers between " << start << " and " << end << " are: ";
    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(int argc, char const *argv[]) 
{
    int start, end;

    cout << "Enter the start of the interval: ";
    cin >> start;
    cout << "Enter the end of the interval: ";
    cin >> end;

    displayPrime(start, end);

    return 0;
}
