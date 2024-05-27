////6.5. Write a program to calculate the series: 2 + 5 + 8 + 11 + ... + n


#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int n;

    cout << "Please enter the value of n: ";
    cin >> n;

    int sum = 0;

    for (int i = 2; i <= n; i += 3) {
        sum += i;
    }

    cout << "Series sum is: " << sum << endl;

    return 0;
}
