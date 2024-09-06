//16.7. Write a void function that gets two numbers and determine maximum, 
//then display the result within mainfunction.

#include <iostream>
using namespace std;

void findMax(int *a, int *b, int *max) {
    if (*a > *b) {
        *max = *a;
    } else {
        *max = *b;
    }
}

int main(int argc, char const *argv[]) {
    int num1, num2;
    int maximum;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    findMax(&num1, &num2, &maximum);
    
    cout << "The maximum of " << num1 << " and " << num2 << " is: " << maximum << endl;
    
    return 0;
}
