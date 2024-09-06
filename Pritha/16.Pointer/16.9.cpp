//16.9. Write a void function that gets three numbers and determine maximum, 
//then display the result within main function.

#include <iostream>
using namespace std;

void _findMax(int a, int b, int c, int max) {
    if (a > b && a > c) {
        *max = a;
    } else if (b > c) {
        *max = b;
    } else {
        *max = c;
    }
}

void findMax(int *a, int *b, int *c, int *max) {
    if (*a > *b && *a > *c) {
        *max = *a;
    } else if (*b > *c) {
        *max = *b;
    } else {
        *max = *c;
    }
}

int main(int argc, char const *argv[]) {
    int num1, num2, num3;
    int maximum;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Enter the third number: ";
    cin >> num3;
    
    findMax(&num1, &num2, &num3, &maximum);
    
    cout << "The maximum of " << num1 << ", " << num2 << ", and " << num3 << " is: " << maximum << endl;
    
    return 0;
}
