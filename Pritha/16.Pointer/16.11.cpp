//16.11. Write a void function that gets three numbers and determine median, 
//then display the result within main function.

#include <iostream>
using namespace std;

void findMedian(int *a, int *b, int *c, int *median) {
    if ((*a > *b && *a < *c) || (*a < *b && *a > *c)) {
        *median = *a;
    } else if ((*b > *a && *b < *c) || (*b < *a && *b > *c)) {
        *median = *b;
    } else {
        *median = *c;
    }
}

int main(int argc, char const *argv[]) {
    int num1, num2, num3;
    int median;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Enter the third number: ";
    cin >> num3;
    
    findMedian(&num1, &num2, &num3, &median);
    
    cout << "The median of " << num1 << ", " << num2 << ", and " << num3 << " is: " << median << endl;
    
    return 0;
}
