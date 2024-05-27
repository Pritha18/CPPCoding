//6.3. Write a program to calculate the series: 1 + 3 + 5 + 7 + ... + n

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int n;

    cout << "Please enter the value of n: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    cout << "Series sum is: " << sum << endl;

    return 0;
}
