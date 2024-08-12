//14.19. Write a function that gets two positive integer and returns nCr (Combination)

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


int nCr(int n, int r)
{
    if (r > n)
    {
        return 0; 
    }

    int nFact = factorial(n);
    int rFact = factorial(r);
    int nMinusRFact = factorial(n - r);

    int result = nFact / (rFact * nMinusRFact);
    return result;
}

int main(int argc, char const *argv[])
{
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    int combination = nCr(n, r);
    cout << "The value of " << n << "C" << r << " is: " << combination << endl;

    return 0;
}
