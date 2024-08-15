//14.21. Write a function that gets two positive integer and returns LCM (least common multiple)

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

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b); 
}

int main(int argc, char const *argv[])
{
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    int result = lcm(num1, num2);
    cout << "The LCM of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
