//9.4. Write a program that uses nested loops to find a pair of numbers (i, j) such that i ranges from 1 to 5 and j ranges from 1 to 5, and their product is 12.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    bool found = false; // Not sure how this actually works!

    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            if (i * j == 12) {
                cout << "Found a pair: (" << i << ", " << j << ")" << endl;
                found = true;
                break; 
            }
        }
        if (found) {
            break; 
    }

    if (!found) {
        cout << "No pair found!" << endl;
    }

    return 0;
}
