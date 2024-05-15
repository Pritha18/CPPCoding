//4.5. Write a program that read three numbers and display maximum

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
    double num1, num2, num3, max;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Enter the third number: ";
    cin >> num3;
    
    max = num1;
    
    if (num2 > max) {
        max = num2;
    }

    if (num3 > max) {
        max = num3;
    }

    cout << "The maximum is: " << max << endl;
    
    return 0;
}
