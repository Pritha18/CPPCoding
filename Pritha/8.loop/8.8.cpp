//8.8. Write a C program to swap first and last digits of a number

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int originalNum = num;
    int lastDigit = num % 10;

    int firstDigit = num;
    int digitCount = 0;

    while (firstDigit >= 10) {
        firstDigit /= 10;
        digitCount++;
    }

    int powerOfTen = pow(10, digitCount);
    // % - to remove the first digit
    // / - to remove the last digit
    // * - to prepare to add the last digit
    int swappedNum = (lastDigit * powerOfTen) + (((num % powerOfTen) / 10) * 10) + firstDigit;

    cout << "Number after swapping first and last digits: " << swappedNum << endl;

    return 0;
}


