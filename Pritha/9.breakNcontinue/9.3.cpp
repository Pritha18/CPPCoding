//9.3. Write a program that sums integers entered by the user until the user enters a negative number.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0;
    int number;
    int max_num = 1000000; 

    for (int i = 0; i <= max_num; ++i) {
        cout << "Enter an integer: ";
        cin >> number;

        if (number < 0) {
            break; 
        }

        sum += number; 
    }

    cout << "The sum of the entered numbers is: " << sum << endl;

    return 0;
}
