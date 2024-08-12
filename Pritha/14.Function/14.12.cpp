//14.12. Write a function that gets any positive integer and returns it's factorial

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

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    int fact = factorial(num);
    cout << "The factorial of " << num << " is: " << fact << endl;

    return 0;
}
