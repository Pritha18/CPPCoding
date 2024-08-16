//14.32. Write a C program to check whether a number is even or odd using functions


#include <iostream>
using namespace std;

bool isEven(int number) {
    return (number % 2 == 0);
}

void result(int number, bool isEven) {
    if (isEven) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }
}

int main(int argc, char const *argv[]) 
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    bool even = isEven(number);

    result(number, even);

    return 0;
}
