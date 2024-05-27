//6.4. Write a program to calculate the series: 4 + 12 + 20 + 28 + ... + n

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int n;

    cout << "Please enter the value of n: ";
    cin >> n;

    int sum = 0;

    for (int i = 4; i <= n; i += 8) {
        sum += i;
    }

    cout << "Series sum is: " << sum << endl;

    return 0;
}
