//8.6. Write a C program to find first and last digit of a number

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

    cout << "The first digit is: " << firstDigit << endl;
    cout << "The last digit is: " << lastDigit << endl;

    return 0;
}


