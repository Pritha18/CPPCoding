//8.4. Write a program that read a positive integer and display its factorial


#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int number;
    double factorial = 1; 
  
    cout << "Enter a positive integer: ";
    cin >> number;

    
    if (number < 0) {
        cout << "That's a negative number!" << endl;
    } else {       
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        
        cout << "Factorial of " << number << " is: " << factorial << endl;
    }

    return 0;
}
