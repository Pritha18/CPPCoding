////6.53. Write a program to print all odd numbers from 100 to 1.


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 100; i > 0; --i) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }

    return 0;
}
