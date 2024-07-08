//8.7. Write a C program to find sum of first and last digit of a number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    int firstDigit, lastDigit;
    int newNum = number; 
    
    lastDigit = number % 10;

    while (newNum >= 10) {
        newNum = newNum / 10;
    }
    firstDigit = newNum;
    int sum = firstDigit + lastDigit;

    cout << "The sum of the first and last digits is: " << sum << endl;

    return 0;
}