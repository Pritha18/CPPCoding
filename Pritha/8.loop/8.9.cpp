//8.9. Write a program that read any positive integer and display reverse

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int num;
    int reversedNum = 0;
    int remainder;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}
