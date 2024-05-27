// 6.1. Write a program to calculate the series: 1 + 2 + 3 + 4 + ... + n

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "enter the value of n: ";
    cin >> n;

    int i = 1;
    int sum = 0;

    do {
        sum = sum + i;
        i = i + 1;
    } while(i <= n);

    cout << "sum of the series is: " << sum << endl;

    return 0;
}