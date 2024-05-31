////6.54. Write a program to print all number from n to 1.


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = n; i > 0; --i) {
        cout << i << endl;
    }

    return 0;
}
