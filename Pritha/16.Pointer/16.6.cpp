//16.6. Write a void function that gets two numbers and divide them, 
//then display the result within main function. (x / y)

#include <iostream>
using namespace std;

void divNumbers(int *x, int *y, double *result) {
    if (*y != 0) {
        *result = (double)(*x) / *y;  
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
        *result = 0;  
    }
}

int main(int argc, char const *argv[]) {
    int x, y;
    double divide;
    
    cout << "Enter the first number: ";
    cin >> x;
    
    cout << "Enter the second number: ";
    cin >> y;
    
    divNumbers(&x, &y, &divide);
    
    if (y != 0) {
        cout << "The division of " << x << " by " << y << " is: " << divide << endl;
    }
    
    return 0;
}
