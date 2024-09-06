//16.8. Write a void function that gets two numbers and determine minimum, 
//then display the result within main function.

#include <iostream>
using namespace std;

void findMin(int *a, int *b, int *min) {
    if (*a < *b) {
        *min = *a;
    } else {
        *min = *b;
    }
}

int main(int argc, char const *argv[]) {
    int num1, num2;
    int minimum;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    findMin(&num1, &num2, &minimum);
    
    cout << "The minimum of " << num1 << " and " << num2 << " is: " << minimum << endl;
    
    return 0;
}
