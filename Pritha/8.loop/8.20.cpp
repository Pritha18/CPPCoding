//8.20. Write a program that read two numbers(n,r) and display nCr(Combination)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int n, r;
    cout << "Enter two numbers (n and r): ";
    cin >> n >> r;

    int nFact = 1;
    for (int i = 1; i <= n; ++i) {
        nFact *= i;
    }

    int rFact = 1;
    for (int i = 1; i <= r; ++i) {
        rFact *= i;
    }

    int nrFact = 1;
    for (int i = 1; i <= (n - r); ++i) {
        nrFact *= i;
    }

    int nCr = nFact / (rFact * nrFact);

    cout << "The value of " << n << "C" << r << " is: " << nCr << endl;

    return 0;
}
