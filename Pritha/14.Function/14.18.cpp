//14.18. Write a function that gets two positive integer and returns nPr (Permutation)


#include <iostream>
using namespace std;

int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

int nPr(int n, int r)
{
    return factorial(n) / factorial(n - r);
}

int main(int argc, char const *argv[])
{
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    if (r > n)
    {
        cout << "r cannot be greater than n." << endl;
        return 1;
    }

    int result = nPr(n, r);
    cout << "The value of " << n << "P" << r << " is: " << result << endl;

    return 0;
}
