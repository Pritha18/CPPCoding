//9.2. Write a program that prints all odd numbers between 1 and 20.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 20; ++i) {
        if (i % 2 == 0) {
            continue; 
        }
        cout << i << " ";
    }
    
    return 0;
}
