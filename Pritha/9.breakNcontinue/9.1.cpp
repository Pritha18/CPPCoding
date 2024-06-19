//9.1. Write a program that finds the first multiple of 7 between 50 and 100.


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    for (int i = 50; i <= 100; ++i) {
        if (i % 7 == 0) {
            cout << "The first multiple of 7 between 50 and 100 is: " << i << endl;
            break; 
        }
    }
    return 0;
}
