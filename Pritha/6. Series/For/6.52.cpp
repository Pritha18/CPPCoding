////6.52. Write a program to print all even numbers from 100 to 1.


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 100; i > 0; --i) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
