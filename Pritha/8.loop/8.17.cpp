//8.17. Write a program that read two numbers and display LCM(least common multiple)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;
    cout << "Please enter two integer variables: ";
    cin >> x >> y;

    int a = x, b = y;

    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    
    while(y % x != 0) {
        int remainder = y % x;
        y = x;
        x = remainder;
    }

    int gcd = x;

    //LCM * GCD = a * b
    int lcm = (a * b) / gcd;

    cout << "LCM of given numbers is: " << lcm << endl;

    return 0;
}
