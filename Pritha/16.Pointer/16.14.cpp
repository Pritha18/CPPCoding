//16.14. Write a void function that gets a number and reverse it, 
//then display the result within main function.

#include <iostream>
using namespace std;

void reverseNumber(int *num, int *reversed) {
    int n = *num;
    *reversed = 0;
    
    while (n > 0) {
        *reversed = (*reversed * 10) + (n % 10); 
        n /= 10;
    }
}
    

int main(int argc, char const *argv[]) {
    int number;
    int reversedNumber;
    
    cout << "Enter a number: ";
    cin >> number;
    
    reverseNumber(&number, &reversedNumber);
    
    cout << "The reverse of " << number << " is: " << reversedNumber << endl;
    
    return 0;
}
