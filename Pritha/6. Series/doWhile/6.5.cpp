//6.5. Write a program to calculate the series: 2 + 5 + 8 + 11 + ... + n

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "please enter the value of n: ";
    cin >> n;

    int i = 2;
    int sum = 0; 

    do {
        sum = sum + i;
        i = i + 3;
    } while (i <= n);

    cout << "series sum is: " << sum << endl;

    return 0;
}
