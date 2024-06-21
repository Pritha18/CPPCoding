//9.8. Write a program that repeatedly asks the user to enter a positive integer. 
//If the user enters a non-positive integer, prompt them again. 
//The program should stop asking for input when the user has entered 5 positive integers and then print the sum of these integers.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0;
    int count = 0;
    int number;
    
    while(count < 5) 
    { 
        cout << "Enter a positive integer: ";
        cin >> number;

        if (number <= 0) {
            cout << "Please enter a positive integer." << endl;
            continue;
        }

        sum += number;
        count++;
    }

    cout << "The sum of the 5 positive integers is: " << sum << endl;

    return 0;
}
