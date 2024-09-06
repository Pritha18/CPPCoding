//16.3. Write a void function that gets two numbers and adds them, then display the result 
//within main function. (x + y)


#include <iostream>
using namespace std;

void addNumbers(int *x, int *y, int *result) {
    *result = *x + *y;
}

int main(int argc, char const *argv[]) {
    int x, y, sum;
    
    cout << "Enter the first number: ";
    cin >> x;
    
    cout << "Enter the second number: ";
    cin >> y;
    
    addNumbers(&x, &y, &sum);
    
    cout << "The sum of " << x << " and " << y << " is: " << sum << endl;
    
    return 0;
}
