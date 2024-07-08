//8.3. Write a C program to print multiplication table of any number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int number;

    cout << "Enter a number to print its multiplication table: ";
    cin >> number;

    cout << "Multiplication table for " << number << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << number << " x " << i << " = " << number * i << endl;
    }
    
    return 0;
}
