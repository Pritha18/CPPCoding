//6.57. Write a program to print all number who is divible by y from n to 1 (y < n).


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, y;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of y: ";
    cin >> y;

    if (y >= n) {
        cout << "Invalid Input: y should be less than n!" << endl;
        return 0;
    }

    for (int i = n; i > 0; --i) {
        if (i % y == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
