//14.17. Write a function that gets two positive integer(a,b) and returns a to the power b

#include <iostream>
using namespace std;

double power(double a, double b)
{
    double result = 1;
    for (int i = 0; i < b; ++i)
    {
        result *= a;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int base, exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = power(base, exponent);
    cout << base << " to the power " << exponent << " is: " << result << endl;

    return 0;
}
