//16.13. Write a void function that gets a number and calculate sum of the digit, 
//then display the result within main function.

#include <iostream>
using namespace std;


void digitSum(int *num, int *sum) {
    *sum = 0;
    int n = *num;
    
    while (n > 0) {
        *sum += n % 10; 
        n /= 10;        
    }
}

int main(int argc, char const *argv[]) {
    int number;
    int digit_sum;
    
    cout << "Enter a number: ";
    cin >> number;
    
    digitSum(&number, &digit_sum);
    
    cout << "The sum of the digits of " << number << " is: " << digit_sum << endl;
    
    return 0;
}
