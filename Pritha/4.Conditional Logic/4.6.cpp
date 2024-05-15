//4.6. Write a program that read three numbers and display minimum

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    double num1, num2, num3, min;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Enter the third number: ";
    cin >> num3;
    
    min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    cout << "The minimum is: " << min << endl;
    
    return 0;
}