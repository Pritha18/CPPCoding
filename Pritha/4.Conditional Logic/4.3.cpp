//4.3. Write a program that read two numbers and display maximum

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    double num1, num2, max;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    if (num1 > num2) 
    {
        max = num1;
        cout << "Maximum is num1" << endl;
    } else {
        max = num2;
        cout << "Maximum is num2" << endl;
    }
    
    return 0;
}
