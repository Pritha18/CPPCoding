//14.34. Write a C++ program to check whether a number is palindrome or not using functions


#include <iostream>
using namespace std;

int reverseNumber(int number) {
    int reversed = 0;

    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    return reversed;
}

bool isPalindrome(int number) {
    return number == reverseNumber(number);
}

void result(int number, bool isPalindrome) {
    if (isPalindrome) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
}

int main(int argc, char const *argv[]) 
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    bool palindrome = isPalindrome(number);

    result(number, palindrome);

    return 0;
}
