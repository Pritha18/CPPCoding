//14.36. Write a C program to check whether a number is strong or not using functions

#include <iostream>
using namespace std;

int factorial(int digit) {
    int fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact *= i;
    }
    return fact;
}

bool isStrong(int number) {
    int sum = 0;
    int temp = number;

    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    return (sum == number);
}

void result(int number, bool isStrong) {
    if (isStrong) {
        cout << number << " is a strong number." << endl;
    } else {
        cout << number << " is not a strong number." << endl;
    }
}

int main() 
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    bool strong = isStrong(number);

    result(number, strong);

    return 0;
}
