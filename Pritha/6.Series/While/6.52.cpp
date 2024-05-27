//6.52. Write a program to print all even numbers from 100 to 1.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 100;

    while(i > 0) {
        if(i % 2 == 0) {
            cout << i << endl;
        }
        --i;
    }

    return 0;
}
