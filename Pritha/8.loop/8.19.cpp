//8.19. Write a program that read two numbers(n,r) and display nPr(Permutation) 


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

    
    int nrFact = 1;
    for (int i = 1; i <= (n - r); ++i) {
        nrFact *= i;
    }

    int nPr = nFact / nrFact;

    cout << "The value of " << n << "P" << r << " is: " << nPr << endl;

    return 0;
}

