//16.5. Write a void function that gets two numbers and multiply them, 
//then display the result within main function. (x * y)


#include <iostream>
using namespace std;

void mulNumbers(int *x, int *y, int *result) {
    *result = *x * *y;
}

int main(int argc, char const *argv[]) {
    int x, y, multiply;
    
    cout << "Enter the first number: ";
    cin >> x;
    
    cout << "Enter the second number: ";
    cin >> y;
    
    mulNumbers(&x, &y, &multiply);
    
    cout << "The multiplication of " << x << " and " << y << " is: " << multiply << endl;
    
    return 0;
}
