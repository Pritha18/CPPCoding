//9.7. Write a program that calculates the sum of all numbers between 1 and 100 that are not multiples of 5

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{       
    int sum = 0;

    for (int i = 1; i <= 100; ++i) {
        if (i % 5 != 0) {
            sum += i;
        }
    }

    cout << "The sum of all numbers between 1 and 100 that are not multiples of 5 is: " << sum << endl;

    return 0;
}
