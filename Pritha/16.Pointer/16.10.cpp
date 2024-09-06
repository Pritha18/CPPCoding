//16.10. Write a void function that gets three numbers and determine minimum, 
//then display the result within main function.

#include <iostream>
using namespace std;

void findMin(int *a, int *b, int *c, int *min) {
    if (*a < *b && *a < *c) {
        *min = *a;
    } else if (*b < *c) {
        *min = *b;
    } else {
        *min = *c;
    }
}

int main(int argc, char const *argv[]) {
    int num1, num2, num3;
    int minimum;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Enter the third number: ";
    cin >> num3;
    
    findMin(&num1, &num2, &num3, &minimum);
    
    cout << "The minimum of " << num1 << ", " << num2 << ", and " << num3 << " is: " << minimum << endl;
    
    return 0;
}
