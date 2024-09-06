//16.4. Write a void function that gets two numbers and substract them, 
//then display the result within main function. (x - y)

#include <iostream>
using namespace std;

void subNumbers(int *x, int *y, int *result) {
    *result = *x - *y;
}

int main(int argc, char const *argv[]) {
    int x, y, sub;
    
    cout << "Enter the first number: ";
    cin >> x;
    
    cout << "Enter the second number: ";
    cin >> y;
    
    subNumbers(&x, &y, &sub);
    
    cout << "The subtraction of " << x << " and " << y << " is: " << sub << endl;
    
    return 0;
}
