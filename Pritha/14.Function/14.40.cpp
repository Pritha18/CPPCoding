//14.40. Write a C++ program to find all strong numbers between given a interval using functions.


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

    return sum == number;
}

void strongNumbers(int start, int end) {
    bool foundStrongNumber = false;
    
    for (int i = start; i <= end; i++) {
        if (isStrong(i)) {
            cout << i << " is a strong number." << endl;
            foundStrongNumber = true;
        }
    }
    
    if (!foundStrongNumber) {
        cout << "There are no strong numbers in the interval [" << start << ", " << end << "]." << endl;
    }
}

int main() 
{
    int start, end;

    cout << "Enter the start of the interval: ";
    cin >> start;

    cout << "Enter the end of the interval: ";
    cin >> end;

    strongNumbers(start, end);

    return 0;
}
