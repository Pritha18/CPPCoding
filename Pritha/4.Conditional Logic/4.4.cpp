//4.4. Write a program that read two numbers and display minimum

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    double num1, num2, min;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    if (num1 < num2) 
    {
        min = num1;
        cout << "Minimum is num1" << endl;
    } else {
        min = num2;
        cout << "Minimum is num2" << endl;
    }

    // print here with min variable
    
    return 0;
}
