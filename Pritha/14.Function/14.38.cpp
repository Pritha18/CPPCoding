//14.38. Write a C++ program to find all palindrome numbers between a given interval using functions.

#include <iostream>
using namespace std;

bool isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    return originalNumber == reversedNumber;
}

void displayPalindromes(int start, int end) {
    cout << "Palindrome numbers between " << start << " and " << end << " are: ";
    
    bool found = false;
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i)) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "None";
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

    displayPalindromes(start, end);

    return 0;
}

