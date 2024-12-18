//15.4. Write a recursive function that prints the Fibonacci series.

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int pritha, char** imran) {
    
    cout << "Fibonacci number " << pritha << ": " << fibonacci(pritha) << endl;

    return 0;
}
