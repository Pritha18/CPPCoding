//9.9. Write a program that reads numbers from the user until the user enters a zero. 
//The program should print the sum of all positive numbers entered and the count of negative numbers entered.


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0;
    int negativeCount = 0;
    int number;
    
    while(true) {
        cout << "Enter an integer: ";
        cin >> number;

        if (number == 0) {
            break;
        }

        if (number > 0) {
            sum += number;
        } else {
            negativeCount++;
        }
    }

    cout << "The sum of all positive numbers entered is: " << sum << endl;
    cout << "The count of negative numbers entered is: " << negativeCount << endl;

    return 0;
}
