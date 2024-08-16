//14.35. Write a C++ program to check whether a number is perfect or not using functions


#include <iostream>
using namespace std;

bool isPerfect(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum == number;
}

void result(int number, bool isPerfect) {
    if (isPerfect) {
        cout << number << " is a perfect number." << endl;
    } else {
        cout << number << " is not a perfect number." << endl;
    }
}

int main(int argc, char const *argv[]) 
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    bool perfect = isPerfect(number);

    result(number, perfect);

    return 0;
}
