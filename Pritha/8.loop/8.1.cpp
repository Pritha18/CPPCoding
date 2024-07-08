//8.1. Write down a program that can take a lower bound i and an upper bound n and then find out 
//the summation of those numbers which are even from i to n.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int i, n;
    int sum = 0;

    cout << "Enter the lower bound (i): ";
    cin >> i;
    cout << "Enter the upper bound (n): ";
    cin >> n;

    for (int num = i; num <= n; ++num) {
        if (num % 2 == 0) {
            sum += num;
        }
    }
    
    cout << "The sum of even numbers from " << i << " to " << n << " is: " << sum << endl;

    return 0;
}
