//14.20. Write a function that gets two positive integer and returns GCD (greatest common divisor)


#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int main(int argc, char const *argv[])
{
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    int result = gcd(num1, num2);
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
