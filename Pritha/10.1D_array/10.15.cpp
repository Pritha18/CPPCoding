//10.15. Write a program that display first n prime numbers using array

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int n;
    cout << "Enter the number of prime numbers: ";
    cin >> n;

    int primes[n];
    primes[0] = 2; 

    int count = 1; 
    int num = 3;   

    while (count < n) {
        bool is_prime = true;

        for (int i = 0; i < count; ++i) {
            if (num % primes[i] == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            primes[count] = num;
            ++count;
        }

        num += 2; 
    }
    
    cout << "First " << n << " prime numbers are:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << primes[i];
        if (i < n - 1)
            cout << ", ";
    }
    cout << endl;

    return 0;
}
