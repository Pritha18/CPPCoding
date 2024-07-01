//8.21. Write a program that read any integer and display its digital root (using loop)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int number;
    int sum = 0;
    
    cout << "Enter an integer: ";
    cin >> number;

    
    while (number >= 10) {
        sum = 0;
        while (number > 0) {
            sum += (number % 10);
            number /= 10;
        }
        number = sum;
    }

    cout << "The digital root is: " << number << endl;

    return 0;
}
