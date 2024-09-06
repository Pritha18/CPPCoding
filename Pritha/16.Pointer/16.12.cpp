//16.12. Write a void function that gets a number and calculate factorial, 
//then display the result within main function.

#include <iostream>
using namespace std;

void calculateFactorial(int *num, double *factorial) {
    *factorial = 1;
    for (int i = 1; i <= *num; ++i) {
        *factorial *= i;
    }
}

int main(int argc, char const *argv[]) {
    int number;
    double factorial;
    
    cout << "Enter a number: ";
    cin >> number;
    
    if (number < 0) {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
    } else {
        calculateFactorial(&number, &factorial);
        
        cout << "The factorial of " << number << " is: " << factorial << endl;
    }
    
    return 0;
}
